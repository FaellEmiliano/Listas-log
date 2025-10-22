num = int(input("Digite um número: "))
if num > 50:
    print("Digite outro numero!")
mul = num
while 1:
    mul = mul*3
    if mul > 250:
        break
    else:
        print({mul})