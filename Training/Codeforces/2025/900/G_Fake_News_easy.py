#  author: josuerom - created: 21/04/24 16:37:01
import re

def solve():
   s = "".join(re.findall(r"[heidi]", input()))
   a = ["a"]
   for i in s:
      if i == "h" and a[-1] != "h":
         a.append(i)
      if i == "e" and a[-1] != "e":
         a.append(i)
      if i == "i" and a[-1] != "i":
         a.append(i)
      if i == "d" and a[-1] != "d":
         a.append(i)
   s = "".join(a)
   for i in range(len(s)):
      if s[i] == "h":
         for j in range(i + 1, len(s)):
            if s[j] == "e":
               for k in range(j + 1, len(s)):
                  if s[k] == "i":
                     for l in range(k + 1, len(s)):
                        if s[l] == "d":
                           for p in range(l + 1, len(s)):
                              if s[p] == "i":
                                 print("YES")
                                 return
   print("NO")

solve()