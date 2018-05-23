x,y,z = map(int, input().split())
L = []

L.append(x)
L.append(y)
L.append(z)

for i in sorted(L):
  print(i)

print("")

for i in L:
  print(i)