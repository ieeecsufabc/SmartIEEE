def cal(s, l):
  tax = 0
  while l <= 2:
    tax = (s - v[l])*p[l] + tax
    s = v[l]
    l = l + 1
  print("R$", "%.2f" %tax)

v = [4500.00, 3000.00, 2000.00]
p = [0.28, 0.18, 0.08]

sal = float(input())

if sal <= v[2]:
  print("Isento")
elif sal > v[0]:
  cal(sal, 0)
elif sal > v[1]:
  cal(sal, 1)
elif sal > v[2]:
  cal(sal,2) 