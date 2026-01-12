#  author: josuerom - created: 11/04/24 14:09:23

def solve():
   n = int(input())
   li = list(map(int, input().split()))
   lo = sorted(li)
   print(f"{li.index(lo[-1]) + 1} {lo[-2]}")

solve()
"""
Ordenar y imprimir como primer valor el indice en donde está el valor máximo e
imprimir el otro valor en la posición [n - 2] o en python [-2]
"""