N1 , N2 , N3 , N4 = map(float, input().split())

MED = ((N1*2) + (N2*3) + (N3*4) + (N4*1))/10

print("Media: "+str("%.1f" %MED))

if MED < 5.0:
  print("Aluno reprovado.")
elif MED >= 7.0:
  print("Aluno aprovado.")
elif 5.0 <= MED < 7.0:
 print("Aluno em exame.") 
 N5 = float(input())
 print("Nota do exame: "+str(N5))
 Med = (MED+N5)/2 
 if Med >= 5.0:
   print("Aluno aprovado.")
   print("Media final: "+str("%.1f" %Med))
 elif Med < 5.0:
    print("Aluno reprovado.")
    print("Media final: "+str("%.1f" %Med))