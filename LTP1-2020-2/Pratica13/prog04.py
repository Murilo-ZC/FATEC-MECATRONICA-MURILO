valor_total = float(input("Informe o valor do produto:"))
quantidade_de_parcelas = int(input("Quantidade de parcelas:"))

if quantidade_de_parcelas == 1:
  valor_final = valor_total * 0.9
elif quantidade_de_parcelas == 2:
  valor_final = valor_total
elif quantidade_de_parcelas == 3:
  valor_final = valor_total * 1.05
else:
  valor_final = valor_total * 1.2

print("Valor final da compra: R$%.2f, em %i vezes!" % (valor_final, quantidade_de_parcelas))
