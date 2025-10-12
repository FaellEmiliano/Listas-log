import math
area_A = int(input("Digite a altura do azulejo: ")) * int(input("Digite a largura do azulejo: "))
area_P = int(input("Digite a altura da parede: ")) * int(input("Digite a largura da parede: "))
print(f'São necessários {math.ceil(area_P/area_A)} azulejos')