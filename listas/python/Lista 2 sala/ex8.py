n = []

for c in range(3):
    n.append(int(input("Digite um numero: ")))

for c in range(3):
    if n[c-1] % 2 == 0 and n[c-1] % 3 ==0:
        print(f'{n[c-1]} é divisivel por 2 e 3')