"""
   author:  josuerom
   created: 26/04/24 14:48:31
"""
import sys

def rstr(): return sys.stdin.readline()
def rint(): return int(rstr())
def rli():  return list(map(int, rstr().split()))
def rls():  return list(map(str, rstr().split(r"\s+")))
def rlc():  return list(rstr())
def pl(ls): print(' '.join(map(str, ls)))
def pb(ls): print('\n'.join(map(str, ls)))

n = rint()
s = rlc()
a, b = 0, 0
for i in range(len(s) - 1):
   if s[i] == "4" or s[i] == "7":
      a += int(s[i]) if i < n / 2 else 0
      b += int(s[i]) if i >= n / 2 else 0
   else:
      print("NO")
      break
else:
   print("YES" if a == b else "NO")