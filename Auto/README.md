# AUTOMATIZACIONES CF & RPC

Para que las automatizaciones enfocadas en los concurso de `codeforces` funcionen, necesariamente debe instalar los paquetes con el comando: `pip install requests PyInstaller` nada más.


Con PyInstaller puedes convertir los programas .py en `.exe` o `.out` y agrega al Path: `D:\Workspace\Competitive-Programming\Auto\dist` en la cima de las variables de entorno para que los puedas invocar desde cualquier parte de sistema operativo Windows, Linux o MacOS.


Comandos de conversión para Windows:
```cmd
PyInstaller --onefile --name=autocf cfcontest_setup.py
PyInstaller --onefile --name=autorpc rpcround_setup.py
```


Comandos de conversión para Unix:
```cmd
pyinstaller --onefile --name=autocf cfcontest_setup.py
pyinstaller --onefile --name=autorpc rpcround_setup.py
```


En el directorio `dist` en contrará el archivo ejecutable para su añadidura al Path y su respectiva exclusión del Antivirus. Eso ha sido todo, hasta la próxima!