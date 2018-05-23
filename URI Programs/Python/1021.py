n = float(input())
print("NOTAS:")
for m in [100, 50, 20, 10, 5, 2]:
  print(int(n/m) , "nota(s) de R$", "%.2f" %m)
  n = n%m
print("MOEDAS:")
for m in [1, 0.50, 0.25, 0.10, 0.05, 0.009]:
  print(int(n/m) , "moeda(s) de R$", "%.2f" %m)
  n = n%m