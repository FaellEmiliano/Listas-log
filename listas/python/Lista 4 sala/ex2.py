from math import factorial as fat

a = []
b = []
for c in range(6):
    a.append(int(input(f"Digite o numero {c+1}: ")))
    b.append(fat(a[c]))

print("A: \n")
for c in range(6):
    print(f'[{a[c]}]')

print("B: \n")
for c in range(6):
    print(f'[{b[c]}]')