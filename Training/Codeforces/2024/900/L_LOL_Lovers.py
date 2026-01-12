#  author: josuerom - created: 11/04/24 12:53:03

def solve():
   n = int(input())
   s = input()
   ans = [[s.count("L"), s.count("O")], [0, 0]]
   for i in range(n - 1):
      if s[i] == "L":
         ans[0][0] -= 1
         ans[1][0] += 1
      elif s[i] == "O":
         ans[0][1] -= 1
         ans[1][1] += 1
      if ans[0][0] != ans[1][0] and ans[0][1] != ans[1][1]:
         print(i + 1)
         return
   print("-1")

solve()
# Contar la cantidad de panes P y de cebollas O, y emepezar a buscar en donde está la diferencia
# del primero amigo con el otro [0][0] y [1][0] en la iteración burta de toda la lista