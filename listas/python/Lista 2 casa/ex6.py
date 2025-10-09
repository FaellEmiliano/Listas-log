import math
a = int(input("Digite A: "))
b = int(input("Digite B: "))
c = int(input("Digite C: "))

delta = pow(b,2) -4*a*c

if delta < 0:
    print("Nao tem resultado")
elif delta > 0:
    print(f'x1: {(-b +math.sqrt(delta))/(2*a)} x2: {(-b - math.sqrt(delta))/(2*a)}')
else:
    print(f'x: {-b/(2*a)}')