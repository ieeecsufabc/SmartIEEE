x1 , y1 = map(float, input().split())
x2 , y2 = map(float, input().split())

A =((x1 - x2)**2 + (y1 - y2)**2)**(1/2)

print("%.4f" %A)