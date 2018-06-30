x, y, z = map(float, input().split())

L = []
L.append(x)
L.append(y)
L.append(z)
L = sorted(L)

A = L[2]
B = L[1]
C = L[0]

if A >= B + C :
  print("NAO FORMA TRIANGULO")
else:
  if A**2 == (B**2 + C**2):
    print("TRIANGULO RETANGULO")
  elif A**2 > B**2 + C**2:
      print("TRIANGULO OBTUSANGULO")
      if A == B == C:
        print("TRIANGULO EQUILATERO")
      elif A == B or B == C or C == A:
        print("TRIANGULO ISOSCELES")
  elif A**2 < (B**2 + C**2):
    print("TRIANGULO ACUTANGULO")
    if A == B == C:
      print("TRIANGULO EQUILATERO")
    elif A == B or B == C or C == A:
      print("TRIANGULO ISOSCELES")