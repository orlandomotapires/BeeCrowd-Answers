m = int(input())
n = int(input())
for c in range(m - 1, 0, -1):
  m *= c
for v in range(n - 1, 0, -1):
  n *= v
if m == 0:
  m = 1
elif n == 0:
  n = 1    
s = m + n
print(s)