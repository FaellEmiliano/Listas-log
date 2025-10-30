a = []
b = []
d = []
print("A: ")
for c in range(5):
    a.append(int(input(f"Digite o numero {c+1}: ")))

print("B: ")
for c in range(5):
    b.append(int(input(f"Digite o numero {c+1}: ")))

for c in range(10):
    if c<=4:
        d.append(a[c])
    else:
        d.append(b[c-5])

print("C: ")
for c in range(10):
    print(f'[{d[c]}]',end=" ")
