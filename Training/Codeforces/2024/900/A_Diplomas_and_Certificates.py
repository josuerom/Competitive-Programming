#  author: josuerom - created: 21/04/24 12:14:04
def solve():
   n, k = map(int, input().split())
   m = n // 2
   d = m // (k + 1)
   c = d * k
   print(f"{d} {c} {n - d - c}")

solve()