"""
rpcround_setup.py
Generador automático de archivos para rondas de la Red de Programación Colombiana (RPC)
Compatible con Windows, Linux y MacOS
Autor: josuerom
Fecha: 12/01/26
"""

import os
import platform
import re
import glob
import shutil
import subprocess
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
        ruta = (
            f"{particion}:\\Workspace\\Competitive-Programming\\Contests\\RPC\\{anio}"
        )

    elif sistema == "Linux":
        usuario = os.getenv("USER") or os.getenv("USERNAME") or "user"
        ruta = f"/home/{usuario}/Workspace/Competitive-Programming/Contests/RPC/{anio}"

    elif sistema == "Darwin":
        usuario = os.getenv("USER") or os.getenv("USERNAME") or "user"
        ruta = f"/Users/{usuario}/Workspace/Competitive-Programming/Contests/RPC/{anio}"

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


def obtener_ruta_descargas(sistema):
    if sistema == "Windows":
        usuario = os.getenv("USERNAME") or "root"
        return f"C:\\Users\\{usuario}\\Downloads"
    elif sistema == "Linux":
        usuario = os.getenv("USER") or "user"
        return f"/home/{usuario}/Downloads"
    elif sistema == "Darwin":
        usuario = os.getenv("USER") or "user"
        return f"/Users/{usuario}/Downloads"
    return None


def buscar_documento_pdf(directorio_descargas):
    archivos_pdf = glob.glob(os.path.join(directorio_descargas, "*.pdf"))

    for archivo in archivos_pdf:
        nombre_archivo = os.path.basename(archivo)
        if re.search(r"(problem|set|rpc|rnd|round)", nombre_archivo, re.IGNORECASE):
            return archivo

    if archivos_pdf:
        archivos_pdf.sort(key=os.path.getmtime, reverse=True)
        return archivos_pdf[0]

    return None


def crear_archivos_plantilla(
    ruta_ronda, lista_problemas, extension, sistema, numero_ronda
):
    fecha_hora = datetime.now()
    nombre_equipo = "2Bits"
    dia = fecha_hora.strftime("%d")
    mes = fecha_hora.strftime("%m")
    anio = fecha_hora.strftime("%Y")

    ruta_plantillas = obtener_ruta_plantillas(sistema)

    plantillas = {
        "cpp": os.path.join(ruta_plantillas, "tem_rpc.cpp"),
        "java": os.path.join(ruta_plantillas, "tem.java"),
        "py": os.path.join(ruta_plantillas, "tem.py"),
    }

    if not os.path.exists(plantillas[extension]):
        print(
            f"\033[93mAdvertencia: No se encontró la plantilla para {extension}\033[0m"
        )
        print(f"\033[93mCreando archivo vacío...\033[0m")

    print("\033[94mArchivos creados:\n-----------------------------\033[0m")

    for problema_id in lista_problemas:
        ruta_problema = os.path.join(ruta_ronda, problema_id)
        os.makedirs(ruta_problema, exist_ok=True)

        archivo_base = os.path.join(ruta_problema, f"{problema_id}.{extension}")

        if os.path.exists(plantillas[extension]):
            with open(plantillas[extension], "r", encoding="utf-8") as f:
                lineas = f.readlines()

            lineas = [
                linea.replace("$%U%$", nombre_equipo)
                .replace("$%D%$", dia)
                .replace("$%M%$", mes)
                .replace("$%Y%$", anio)
                .replace("$%R%$", numero_ronda)
                .replace("$%file%$", problema_id)
                for linea in lineas
            ]

            with open(archivo_base, "w", encoding="utf-8") as archivo_salida:
                archivo_salida.writelines(lineas)
        else:
            with open(archivo_base, "w", encoding="utf-8") as archivo_salida:
                archivo_salida.write(f"# Problema {problema_id}\n")

        archivo_entrada = os.path.join(ruta_problema, "in1")
        open(archivo_entrada, "w").close()

        print(f"{problema_id}/{problema_id}.{extension}")
        print(f"{problema_id}/in1")

    print("\033[94m-----------------------------\033[0m")


def mover_pdf_a_ronda(ruta_ronda, sistema):
    ruta_descargas = obtener_ruta_descargas(sistema)

    if not ruta_descargas or not os.path.exists(ruta_descargas):
        print("\033[93mNo se pudo acceder a la carpeta de descargas.\033[0m")
        return False

    archivo_pdf = buscar_documento_pdf(ruta_descargas)

    if archivo_pdf:
        nombre_pdf = os.path.basename(archivo_pdf)
        destino_pdf = os.path.join(ruta_ronda, nombre_pdf)

        try:
            shutil.move(archivo_pdf, destino_pdf)
            print(f"\033[92mPDF encontrado y movido: {nombre_pdf}\033[0m")
            return True
        except Exception as e:
            print(f"\033[91mError al mover el PDF: {str(e)}\033[0m")
            return False
    else:
        print("\033[93mNo se encontró el PDF de los problemas en Descargas.\033[0m")
        return False


def abrir_editor(ruta_ronda, sistema):
    try:
        if sistema == "Windows":
            subprocess.run(f'code "{ruta_ronda}"', shell=True)
        else:
            subprocess.run(["code", ruta_ronda])

        print(f"\033[94mAbriendo VSCode en {ruta_ronda} 😁\033[0m")

    except FileNotFoundError:
        print(
            f"\033[93mVSCode no encontrado. Abre manualmente la carpeta: {ruta_ronda}\033[0m"
        )
    except Exception as e:
        print(f"\033[91mError al abrir VSCode: {str(e)}\033[0m")


def generar_ronda_rpc():
    sistema = detectar_sistema_operativo()

    numero_ronda = input("\033[93mRonda del año ->\033[0m ").strip()

    if not numero_ronda.isdigit():
        print("\033[91mEl valor de la ronda debe ser numérico.\033[0m")
        return

    ruta_base = obtener_ruta_base(sistema)
    ruta_ronda = os.path.join(ruta_base, f"Rnd{numero_ronda}")

    if os.path.exists(ruta_ronda):
        print(f"\033[91mLa ronda ya existe 😞\033[0m")
        print(f"Ruta: {ruta_ronda}")
        return

    os.makedirs(ruta_base, exist_ok=True)
    os.makedirs(ruta_ronda, exist_ok=True)

    mover_pdf_a_ronda(ruta_ronda, sistema)

    lista_problemas = (
        input("\033[93m¿Qué problemas resolverás? Ej: A B C ->\033[0m ").upper().split()
    )

    if not lista_problemas:
        print("\033[91mDebes ingresar al menos un problema.\033[0m")
        return

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

    crear_archivos_plantilla(
        ruta_ronda, lista_problemas, extension, sistema, numero_ronda
    )

    abrir_editor(ruta_ronda, sistema)


if __name__ == "__main__":
    try:
        generar_ronda_rpc()
    except KeyboardInterrupt:
        print("\n\033[91mEjecución cancelada!\033[0m")
    except Exception as e:
        print(f"\n\033[91mError inesperado: {str(e)}\033[0m")
