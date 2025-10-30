a = []
b = []
for c in range(5):
    a.append(int(input(f"Digite o numero {c+1}: ")))

for c in range(4,-1,-1):
    b.append(a[c])

print("A: \n")
for c in range(5):
    print(f'[{a[c]}]')

print("B: \n")
for c in range(5):
    print(f'[{b[c]}]')