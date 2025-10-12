nota1 = float(input("Digite a nota 1: "))
nota2 = float(input("Digite a nota 2: "))
media = (nota1+nota2)/2

if media >=6:
    print(f'Aprovado, média: {media}')
else:
    exame = float(input("Digite a nota do exame: "))
    media = (media + exame)/2
    if media >= 5:
        print(f'Aprovado em exame, média: {media}')
    else:
        print(f'Reprovado, média: {media}')