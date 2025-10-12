n = []

for c in range(3):
    n.append(int(input("Digite um número: ")))

n.sort()
print(f'Maior: {n[2]}\nmeio: {n[1]}\nmenor: {n[0]}')