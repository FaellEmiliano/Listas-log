a = []
b = []

for c in range(3):
    a.append(int(input(f"Digite o número {c+1}: ")))

for c in range(2):
    b.append(int(input(f"Digite o número {c+1}: ")))

d = a + b

for c in range(len(d)):
    print(f'[{d[c]}]',end=" ")