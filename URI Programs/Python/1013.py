a, b, c = map(int, input().split())

hig1 = (a + b + abs(a-b))/2
hig2 = (a + c + abs(a-c))/2
hig3 = (b + c + abs(b-c))/2

if hig1 == hig2:
  print(str("%.0f" %hig1) + " eh o maior")
elif hig2 == hig3:
  print(str("%.0f" %hig2) + " eh o maior")
else:
  print(str("%.0f" %hig3) + " eh o maior")