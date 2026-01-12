"""
   author:  josuerom
   created: 21/04/24 21:58:17
"""
import sys

def rli(): return list(map(int, sys.stdin.readline().split()))
def rls(): return list(map(str, sys.stdin.readline().split(r"\s+")))
def rlc(): return sys.stdin.readline().strip()
def rint(): return int(sys.stdin.readline())
def pl(ls): print(' '.join(map(str, ls)))
def plb(ls): print('\n'.join(map(str, ls)))

for _ in range(1):
   n, m = rli()
   if n % m == 0:
      print(f"{str(int(n / m))} " * m)
   else:
      a, b, l, r, flag = n // m, n // m + 1, 1, m - 1, True
      x, y = 0, 0
      while l <= r:
         if a * l + b * r == n:
            x, y = l, r
            flag = False
            break
         l += 1
         r -= 1
      if flag:
         l, r = 1, m - 1
         while l <= r:
            if a * r + b * l == n:
               x, y = r, l
               break
            l += 1
            r -= 1
      print(f"{str(a)} " * x, end="")
      print(f"{str(b)} " * y)