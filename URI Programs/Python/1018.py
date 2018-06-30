n = int(input())
print(n)
for m in [100, 50, 20, 10, 5, 2, 1]:
  print(int(n/m) , "nota(s) de R$", str(m) + ",00" )
  n = n%m