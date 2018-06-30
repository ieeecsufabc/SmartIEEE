x1 = int(input())

year = (x1)/365
year = int(year)
x2 = x1 - year*365

month = (x2)/30 
month = int(month)
x3 = x2 - month*30
day = x3

print(str(year)+" ano(s)")
print(str(month)+" mes(es)")
print(str(day)+" dia(s)")