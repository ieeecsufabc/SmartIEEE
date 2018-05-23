A , B , C = map(float, input().split())

F = (B**2) - (4*A*C)

if A != 0 and F > 0:
  R1 = (-B + (F)**(1/2)) / (2*A)
  R2 = (-B - (F)**(1/2)) / (2*A)
  print("R1 = "+str("%.5f" %R1))
  print("R2 = "+str("%.5f" %R2))
else:
  print("Impossivel calcular")