total_geral = 0
while True:
    salario_bruto = float(input("Digite o salário bruto (ou 0 para sair): "))
    if salario_bruto == 0:
        break
    horas_trabalhadas = float(input("Digite o número de horas trabalhadas no mês: "))
    if salario_bruto < 800:
        desconto = 0
    elif salario_bruto <= 1600:
        desconto = salario_bruto * (0.08 + 0.05)  
    else:
        desconto = salario_bruto * (0.15 + 0.07)  
    if horas_trabalhadas > 160:
        valor_hora = salario_bruto / 160
        horas_extras = horas_trabalhadas - 160
        adicional = valor_hora * 0.5 * horas_extras
    salario_liquido = salario_bruto - desconto + adicional
    total_geral += salario_liquido
    print(f"\n--- Resultado ---")
    print(f"Salário Bruto: R$ {salario_bruto:.2f}")
    print(f"Descontos: R$ {desconto:.2f}")
    print(f"Adicional: R$ {adicional:.2f}")
    print(f"Salário Líquido: R$ {salario_liquido:.2f}")
    print("-----------------\n")
print(f"Total geral dos salários líquidos: R$ {total_geral:.2f}")
