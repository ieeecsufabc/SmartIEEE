cod1, qnt1, val1 = map(float, input().split())
cod2, qnt2, val2 = map(float, input().split())

pay = qnt1*val1 + qnt2*val2

print("VALOR A PAGAR: R$ " + str("%.2f" %pay))