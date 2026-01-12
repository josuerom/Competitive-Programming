n = int(input())
a = sorted(map(int, input().split()))
l, r = 0, 2 * n - 1
while l < r:
   print(f"{a[l]} {a[r]}")
   l += 1
   r -= 1