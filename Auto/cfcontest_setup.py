"""
cfcontest_setup.py
Generador automático de archivos para concursos de codeforces
Compatible con Windows, Linux y MacOS
Autor: josuerom
Fecha: 12/01/26
"""

import os
import platform
import subprocess
import json
import urllib.request
import urllib.error
from datetime import datetime
from pathlib import Path


def detectar_sistema_operativo():
    sistema = platform.system()
    return sistema


def obtener_ruta_base(sistema):
    anio = datetime.now().strftime("%Y")

    if sistema == "Windows":
        if (particion := "D") not in ["C", "D"]:
            particion = "D"
        ruta = f"{particion}:\\Workspace\\Competitive-Programming\\Contests\\CodeForces\\{anio}"

    elif sistema == "Linux":
        usuario = os.getenv("USER") or os.getenv("USERNAME") or "user"
        ruta = f"/home/{usuario}/Workspace/Competitive-Programming/Contests/CodeForces/{anio}"

    elif sistema == "Darwin":
        usuario = os.getenv("USER") or os.getenv("USERNAME") or "user"
        ruta = f"/Users/{usuario}/Workspace/Competitive-Programming/Contests/CodeForces/{anio}"

    return ruta


def obtener_ruta_plantillas(sistema):
    if sistema == "Windows":
        if (particion := "D") not in ["C", "D"]:
            particion = "D"
        return f"{particion}:\\Workspace\\Competitive-Programming\\Templates"
    elif sistema == "Linux":
        usuario = os.getenv("USER") or os.getenv("USERNAME") or "user"
        return f"/home/{usuario}/Workspace/Competitive-Programming/Templates"
    elif sistema == "Darwin":
        usuario = os.getenv("USER") or os.getenv("USERNAME") or "user"
        return f"/Users/{usuario}/Workspace/Competitive-Programming/Templates"
    return None


def obtener_problemas_concurso(id_concurso):
    url = f"https://codeforces.com/api/contest.standings?contestId={id_concurso}&from=1&count=1&showUnofficial=true"

    headers = {
        "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36"
    }

    try:
        peticion = urllib.request.Request(url, headers=headers)
        respuesta = urllib.request.urlopen(peticion, timeout=10)
        datos = json.loads(respuesta.read().decode("utf-8"))

        if datos.get("status") != "OK":
            print(
                f"\033[91mError en la API: {datos.get('comment', 'Desconocido')}\033[0m"
            )
            return None

        problemas = datos.get("result", {}).get("problems", [])

        if not problemas:
            print("\033[91mNo se encontraron problemas para este concurso.\033[0m")
            return None

        lista_problemas = []
        for problema in problemas:
            indice = problema.get("index", "")
            nombre = problema.get("name", "")

            nombre_formateado = f"{indice} {nombre}"
            nombre_archivo = nombre_formateado.replace(" ", "_")

            caracteres_invalidos = r'<>:"/\|?*!,;=+&%'
            for char in caracteres_invalidos:
                nombre_archivo = nombre_archivo.replace(char, "")

            lista_problemas.append(nombre_archivo)

        return lista_problemas

    except urllib.error.HTTPError as e:
        print(f"\033[91mError HTTP {e.code}: {e.reason}\033[0m")
        return None
    except urllib.error.URLError as e:
        print(f"\033[91mError de conexión: {e.reason}\033[0m")
        return None
    except json.JSONDecodeError:
        print("\033[91mError al decodificar la respuesta JSON\033[0m")
        return None
    except Exception as e:
        print(f"\033[91mError inesperado: {str(e)}\033[0m")
        return None


def crear_archivos_plantilla(
    ruta_concurso, cantidad_problemas, nombres_problemas, extension, sistema
):
    fecha_hora = datetime.now()
    autor = "josuerom"
    dia = fecha_hora.strftime("%d")
    mes = fecha_hora.strftime("%m")
    anio = fecha_hora.strftime("%Y")

    ruta_plantillas = obtener_ruta_plantillas(sistema)
    plantillas = {
        "cpp": os.path.join(ruta_plantillas, "tem.cpp"),
        "java": os.path.join(ruta_plantillas, "tem.java"),
        "py": os.path.join(ruta_plantillas, "tem.py"),
    }

    if not os.path.exists(plantillas[extension]):
        print(
            f"\033[93mAdvertencia: No se encontró la plantilla para {extension}\033[0m"
        )
        print(f"\033[93mCreando archivo vacío...\033[0m")

    print("\033[94mArchivos creados:\n-----------------------------\033[0m")

    for i in range(cantidad_problemas):
        if i < len(nombres_problemas):
            nombre_archivo = nombres_problemas[i]
        else:
            nombre_archivo = f"Problema_{chr(65 + i)}"

        ruta_salida = os.path.join(ruta_concurso, f"{nombre_archivo}.{extension}")

        if os.path.exists(plantillas[extension]):
            with open(plantillas[extension], "r", encoding="utf-8") as f:
                lineas = f.readlines()

            lineas = [
                linea.replace("$%U%$", autor)
                .replace("$%D%$", dia)
                .replace("$%M%$", mes)
                .replace("$%Y%$", anio)
                .replace("$%file%$", nombre_archivo)
                for linea in lineas
            ]

            with open(ruta_salida, "w", encoding="utf-8") as archivo_salida:
                archivo_salida.writelines(lineas)
        else:
            with open(ruta_salida, "w", encoding="utf-8") as archivo_salida:
                archivo_salida.write(f"# {nombre_archivo}\n")

        print(f"{nombre_archivo}.{extension}")

    open(os.path.join(ruta_concurso, "in1"), "w").close()
    print("in1\n\033[94m-----------------------------\033[0m")


def abrir_editor(ruta_concurso, sistema):
    try:
        if sistema == "Windows":
            subprocess.run(f'code "{ruta_concurso}"', shell=True)
        else:
            subprocess.run(["code", ruta_concurso])

        print(f"\033[94mAbriendo VSCode en {ruta_concurso} 😁\033[0m")

    except FileNotFoundError:
        print(
            f"\033[93mVSCode no encontrado. Abre manualmente la carpeta: {ruta_concurso}\033[0m"
        )
    except Exception as e:
        print(f"\033[91mError al abrir VSCode: {str(e)}\033[0m")


def generar_concurso_codeforces():
    sistema = detectar_sistema_operativo()

    contest_id = input("\033[93mContestID ->\033[0m ").strip()

    if not contest_id.isdigit():
        print("\033[91mEl ID del concurso debe ser un número.\033[0m")
        return

    ruta_base = obtener_ruta_base(sistema)
    ruta_concurso = os.path.join(ruta_base, contest_id)

    fecha_hora_actual = datetime.now().strftime("%d/%m/%Y %H:%M:%S")

    if os.path.exists(ruta_concurso):
        print(f"\033[91mEl concurso ya existe 😞\033[0m")
        print(f"Ruta: {ruta_concurso}")
        return

    print("\033[93mObteniendo información del concurso...\033[0m")
    nombres_problemas = obtener_problemas_concurso(contest_id)

    if nombres_problemas is None:
        print("\033[91mNo se pudo obtener la información del concurso.\033[0m")
        return

    print(f"\033[92mSe encontraron {len(nombres_problemas)} problemas.\033[0m")

    cantidad = input(
        f"\033[93m¿Cuántos problemas resolverás? [max: {len(nombres_problemas)}] ->\033[0m "
    ).strip()

    if not cantidad.isdigit():
        cantidad = len(nombres_problemas)
    else:
        cantidad = min(int(cantidad), len(nombres_problemas))

    while True:
        opcion = input(
            "\033[93m¿En qué lenguaje resolverás?\n"
            "1. C++\n"
            "2. Java\n"
            "3. Python\n"
            "->\033[0m "
        ).strip()

        extensiones = {"1": "cpp", "2": "java", "3": "py"}

        if opcion in extensiones:
            extension = extensiones[opcion]
            break
        else:
            print("\033[91mOpción inválida. Intenta de nuevo.\033[0m")

    os.makedirs(ruta_concurso, exist_ok=True)

    crear_archivos_plantilla(
        ruta_concurso, cantidad, nombres_problemas, extension, sistema
    )

    abrir_editor(ruta_concurso, sistema)


if __name__ == "__main__":
    try:
        generar_concurso_codeforces()
    except KeyboardInterrupt:
        print("\n\033[91mEjecución cancelada!.\033[0m")
    except Exception as e:
        print(f"\n\033[91mError inesperado: {str(e)}\033[0m")
