a, b, c = map(float, input().split())

tri = (a*c)/2
cir = 3.14159*c**2
tra = (a+b)*c/2
qua = b**2
ret = a*b

print("TRIANGULO: " + str("%.3f" %tri))
print("CIRCULO: " + str("%.3f" %cir))
print("TRAPEZIO: " + str("%.3f" %tra))
print("QUADRADO: " + str("%.3f" %qua))
print("RETANGULO: " + str("%.3f" %ret))