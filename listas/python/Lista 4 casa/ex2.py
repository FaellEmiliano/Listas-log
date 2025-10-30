x =[]
y =[]

for c in range(9):
    x.append(int(input(f'Digiteo numero {c+1}: ')))

for c in range(9):
    if c<=4:
        y.append(x[c])
    else:
        y.append(x[4-c])

for c in range(9):
    print(f'[{y[c]}]',end=" ")
