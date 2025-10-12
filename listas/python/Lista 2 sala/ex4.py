l1 = int(input("Lado 1: "))
l2 = int(input("Lado 1: "))
l3 = int(input("Lado 3: "))

if l1<l2+l3 and l2<l2+l3 and l3<l1+l2:
    if l1==l2==l3:
        print("Equilatero")
    elif l1==l2 or l2==l3 or l1==l3:
        print("Isoceles")
    elif l1!=l2!=l3:
        print("Escaleno")
else:
    print("Nao e triangulo")