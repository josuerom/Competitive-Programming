"""
   author:  josuerom
   created: 08/05/24 13:19:48
"""
import sys

def rstr(): return sys.stdin.readline()
def rint(): return int(rstr())
def rli():  return list(map(int, rstr().split()))
def rls():  return list(map(str, rstr().split(r"\s+")))
def rlc():  return list(rstr())
def pl(ls): print(' '.join(map(str, ls)))
def pb(ls): print('\n'.join(map(str, ls)))

for _ in range(rint()):
   n, k = map(int, rstr().split())
   a = rli()
   if k in a:
      print("YES")
   else:
      print("NO")