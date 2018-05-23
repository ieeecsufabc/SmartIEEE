A, B, C = map(float, input().split())

if (A + B> C) and (B + C > A) and (C + A > B) :
  pe = A + B + C 
  print("Perimetro = "+str("%.1f" %pe))
else :
  a = (A + B)*C/2
  print("Area = "+str("%.1f" %a))