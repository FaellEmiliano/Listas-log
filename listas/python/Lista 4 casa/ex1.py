x =[]
y =[0]*9

for c in range(9):
    x.append(int(input(f'Digiteo numero {c+1}: ')))

y[0] = x[0]
y[1] = x[1]
y[2] = x[7]
y[3] = x[6]
y[4] = x[4]
y[5] = x[5]
y[6] = x[2]
y[7] = x[3]
y[8] = x[8]

for c in range(9):
    print(f'[{y[c]}]',end=" ")