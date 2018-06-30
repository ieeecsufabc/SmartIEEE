x, y = map(int, input().split())

if x == y:
  print("O JOGO DUROU 24 HORA(S)")
elif x > y :
  x = 24 - x
  h = x + y
  print("O JOGO DUROU "+str(h)+" HORA(S)")
elif x < y:
  h = y - x
  print("O JOGO DUROU "+str(h)+" HORA(S)")