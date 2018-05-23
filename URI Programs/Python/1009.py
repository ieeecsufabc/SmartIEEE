name = input()
salary = float(input())
sell = float(input())

plus = (0.15*sell)

print("TOTAL = R$ " + str("%.2f" %(salary + plus)))