#  author: josuerom - created: 14/04/24 12:29:39
def solve():
   n = int(input())
   a, b = list(), list()
   while n > 0:
      l = list(map(str, input().split(" ")))
      print(l)
      sz = len(l)
      if sz == 3 and l[1] == "1":
         a.append(l[2])
      elif sz == 3 and l[1] == "2":
         b.append(l[2])
      elif sz == 2 and l[1] == "1" and len(a) > 0:
         print(a.pop(0))
      elif len(b) > 0:
         print(b.pop(-1))
      n -= 1

solve()