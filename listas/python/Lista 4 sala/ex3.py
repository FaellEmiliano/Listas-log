a = []
b = []
d = []
print("A: ")
for c in range(5):
    a.append(int(input(f"Digite o numero {c+1}: ")))

print("B: ")
for c in range(5):
    b.append(int(input(f"Digite o numero {c+1}: ")))

for c in range(5):
    d.append(a[c]-b[c])

print("A: \n")
for c in range(5):
    print(f'[{a[c]}]',end=" ")

print("\n B: \n")
for c in range(5):
    print(f'[{b[c]}]',end=" ")

print("\n C: \n")
for c in range(5):
    print(f'[{d[c]}]',end=" ")