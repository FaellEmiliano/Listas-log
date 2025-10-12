tempo = int(input("Digite o tempo: "))
v_media = int(input("Digite a velocidade média: "))
distancia = tempo*v_media
print(f'A distância é de {distancia} metros')
l_usados = distancia/12
print(f'Foram usados {l_usados:.2f} litros')
