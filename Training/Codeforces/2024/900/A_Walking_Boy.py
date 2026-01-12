#  author: josuerom - created: 21/04/24 15:48:13
def solve():
   n = int(input())
   a = list(map(int, input().split()))
   if (1440 - a[-1]) >= 240:
      print("YES")
      return
   ans = a[0] // 120 if a[0] >= 120 else 0
   for i in range(1, n):
      if a[i] - a[i - 1] >= 120:
         ans += (a[i] - a[i - 1]) // 120
   print("YES" if ans > 1 else "NO")

for _ in range(int(input())):
   solve()