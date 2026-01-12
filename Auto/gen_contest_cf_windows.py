"""
Generador automático de archivos para concursos de codeforces, enfocado en sistemas Windows
Autor: josuerom
Fecha: 16/06/25
"""

import os
import subprocess
import re
import json
import urllib.request
from datetime import datetime


def obtener_nombre_problema(contest_id):
    url = f"https://codeforces.com/api/contest.standings?contestId={contest_id}&from=1&count=1&showUnofficial=true"
    problem_set = []
    try:
        headers = {
            "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.3"
        }
        req = urllib.request.Request(url, headers=headers)
        response = urllib.request.urlopen(req)
        data = json.loads(response.read().decode("utf-8"))
        s = str(data)
        s = re.sub(r"[.:,{}()\[\]]", "", s)
        s = re.sub(r"' '", " ", s)
        s = re.sub(r"'", "", s).split(" ")
        ind = title = ""
        for i in range(0, len(s)):
            if s[i] == "index":
                ind = s[i + 1]
                i += 2
            elif s[i] == "name":
                i += 1
                while s[i] != "type":
                    if s[i + 1] != "type":
                        title += s[i] + " "
                    else:
                        title += s[i]
                    i += 1
                i += 4
                ans = re.sub(r"[.!'\-,:;=+&%/\\]", "", f"{ind} {title}")
                problem_set.append(ans.replace(" ", "_"))
            title = ""
        problem_set.remove(problem_set[0])
        return problem_set
    except urllib.error.URLError as e:
        print(f"Error {e}")


def gen_contest_cf_windows():
    contest_id = input("\033[93mContestID ->\033[0m ")
    root = f"D:\\Workspace\\Competitive-Programming\\Contests\\CodeForces"
    fecha_hora = datetime.now()
    anio = fecha_hora.strftime("%Y")
    root = root + f"\\{anio}"
    contest_route = os.path.join(root, contest_id)

    fecha_hora_actual = fecha_hora.strftime("%d/%m/%Y %H:%M:%S")
    print("Fecha y hora actual:", fecha_hora_actual)

    if os.path.exists(contest_route):
        print(f"\033[91mThe contest already exists 😞.\033[0m")
        return

    n = int(input("\033[93mHow many problems will you try to solve? ->\033[0m "))
    nameProblem = obtener_nombre_problema(contest_id)

    while True:
        option = int(
            input(
                "\033[93mWhat language will you solve with?\n1. cpp\n2. java\n3. python\n->\033[0m "
            )
        )
        extension = None
        if option == 1:
            extension = "cpp"
        elif option == 2:
            extension = "java"
        elif option == 3:
            extension = "py"
        else:
            print("\033[91mInvalid option. Try again.\033[0m")
            continue
        break

    os.makedirs(contest_route)

    print("\033[94mThese files were created:\n-----------------------------\033[0m")
    open(f"{contest_route}\\in1", "w")

    ubicacion_plantillas = f"D:\\Workspace\\Competitive-Programming\\Templates"
    tipos_de_plantillas = {
        "cpp": os.path.join(ubicacion_plantillas, "tem.cpp"),
        "java": os.path.join(ubicacion_plantillas, "tem.java"),
        "py": os.path.join(ubicacion_plantillas, "tem.py"),
    }

    autor = "josuerom"
    dia = fecha_hora.strftime("%d")
    mes = fecha_hora.strftime("%m")

    for i in range(n):
        invalid_chars = r'_<>:"/\|?*'
        file_title = "".join(
            c if c not in invalid_chars else "_" for c in nameProblem[i]
        )
        output_path = os.path.join(contest_route, f"{file_title}.{extension}")

        with open(tipos_de_plantillas[extension], "r", encoding="utf-8") as f:
            lines = f.readlines()

        lines = [
            line.replace("$%U%$", autor)
            .replace("$%D%$", dia)
            .replace("$%M%$", mes)
            .replace("$%Y%$", anio)
            .replace("$%file%$", file_title)
            for line in lines
        ]

        with open(output_path, "w", encoding="utf-8") as out_file:
            out_file.writelines(lines)

        print(f"{file_title}.{extension}")

    print("in1\n\033[94m-----------------------------\033[0m")
    print(f"\033[94mStarting contest with VSCode 😁😁...\033[0m", end="\n")

    subprocess.run(f"code {contest_route}", shell=True)
    subprocess.run("taskkill /f /im cmd.exe", shell=True)


if __name__ == "__main__":
    gen_contest_cf_windows()
