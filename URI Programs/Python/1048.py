x = float(input())

if x < 400.00:
	p = 15
	new = x + (x*0.15)
elif x < 800.00:
	p = 12
	new = x + (x*0.12)
elif x < 1200.00:
	p = 10
	new = x + (x*0.10)
elif x < 2000.00:
	p = 7
	new = x + (x*0.07)
else:
	p = 4
	new = x + (x*0.04)
print("Novo salario: " + str("%.2f" %new) + "\n" + "Reajuste ganho: " + str("%.2f" (x*p/100)) + "\n" + "Em percentual: " + str(p))