#  author: josuerom - created: 11/04/24 10:40:53

def solve() -> bool:
   s = input()
   ans = list()
   ch, ce, cl, co = False, False, False, False
   for i in s:
      if i == "h" and not ch:
         ans.append(i)
         ch = True
      elif ch and i == "e" and not ce:
         ans.append(i)
         ce = True
      elif ch and ce and i == "l" and not cl:
         ans.append(i)
         cl = True
      elif ch and ce and cl and i == "l" and not co:
         ans.append(i)
         co = True
      elif ch and ce and cl and co and i == "o":
         ans.append(i)
         break
   s = "".join(ans)
   return s == "hello"

print("YES" if solve() else "NO")