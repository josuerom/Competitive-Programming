"""
   author:  josuerom
   created: 08/05/24 16:10:00
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
a, ans = sorted(rli()), 0
_min, _max = a[0], a[n - 1]
if n < 3:
   print(ans)
   sys.exit()
for i in range(1, n - 1):
   if a[i] > _min and a[i] < _max: ans += 1
print(ans)