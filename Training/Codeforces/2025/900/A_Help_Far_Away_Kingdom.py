#  author: josuerom - created: 11/04/24 11:10:24

def solve():
   pi, pd = input().split(".")
   if pi[-1] != "9" and pd[0] < "5":
      print(pi)
   elif pi[-1] != "9" and pd[0] >= "5":
      print(int(pi) + 1)
   else:
      print("GOTO Vasilisa.")

solve()
# si la parte de entera no termina en 9 y la parte decimal es menor que 0.5,
#  entonces al redondear hacia abajo debe conincider con la parte entera.
# si la parte entera no termina en 9, y la parte decimal es mayor o igual a 0.5
#  entonces al redondear hacia sumar una al redondeo
# si la parte entera termina en 9, imprimir "GOTO Vasilisa."