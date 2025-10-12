nota1 = float(input("Digite a nota 1: "))
nota2 = float(input("Digite a nota 1: "))
nota3 = float(input("Digite a nota 1: "))
media = (nota1+nota2+nota3)/3

if media >=6:
    print(f'Aprovado, média: {media}')
else:
    print(f'Reprovado, média: {media}')