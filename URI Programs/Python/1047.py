h1,m1,h2,m2 = map (int, input().split())

if h1 < h2:
  h = h2 - h1
else:
  h = 24 - h1 + h2
if m1 <= m2:
  m = m2 - m1
else:
  h = h -1
  m = 60 - m1 + m2

print("O JOGO DUROU", h, "HORA(S) E", m, "MINUTO(S)")