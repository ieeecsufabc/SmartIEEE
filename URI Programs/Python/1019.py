x1 = int(input())

hours = (x1)/3600
hours = int(hours)
x2 = x1 - hours*3600
mi = (x2)/60 
mi = int(mi)
x3 = x2 - mi*60
sec = x3

print(str(hours)+":"+str(mi)+":"+str(sec))