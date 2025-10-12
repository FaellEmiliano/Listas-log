num = int(input("digite um numero de 1 a 5: "))

match num:
    case 1:
        print(f'Engenharia')
    case 2:
        print(f'Edificações')
    case 3:
        print(f'Sistemas elétricos')
    case 4:
        print(f'Turismo')
    case 5:
        print(f'Análise de Sistemas')
    case _:
        print(f'Inválido')