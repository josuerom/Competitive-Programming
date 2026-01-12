#  author: josuerom - created: 11/04/24 13:51:10
def solve():
   n = int(input())
   s = input().split(" ")
   mp = dict()
   for i in s:
      if i in mp:
         mp[i] += 1
      else:
         mp[i] = 1
      if mp[i] > 2 and i != "0":
         print(-1)
         return
   ans = 0
   for k, v in mp.items():
      if k != "0" and v == 2:
         ans += 1
   print(ans)

solve()
"""
Contar la cantidad de parejas de números iguales con un map que en python es un "diccionario"
Si hay algún número que aparezca más de 2 veces -> -1
Si no hay ni una pareja, contador queda en -> 0
El número cero es el único que se puede repetir las veces que sea
"""