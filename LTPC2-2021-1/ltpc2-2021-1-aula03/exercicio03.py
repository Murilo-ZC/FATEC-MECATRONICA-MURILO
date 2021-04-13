def calcular_imposto(salario):
    if salario <= 1903.98:
        imposto = 0
    elif salario <= 2826.65:
        imposto = salario * 0.075 - 142.80
    elif salario <= 3751.05:
        imposto = salario * 0.15 - 354.80
    elif salario <= 4664.68:
        imposto = salario * 0.225 - 636.13
    else:
        imposto = salario * 0.275 - 869.36
    return imposto

salario_base = float(input("Informe Salario:"))
print(f"para o valor de R${salario_base}, o imposto devido : R${calcular_imposto(salario_base)}")