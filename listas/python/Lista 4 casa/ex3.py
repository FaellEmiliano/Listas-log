x = []
for c in range(9):
    x.append(int(input(f'Digiteo numero {c+1}: ')))
y = x

y[0],y[1] = y[1],y[0]
y[7],y[8] = y[8],y[7]

for c in range(9):
    print(f'[{y[c]}]',end=" ")
