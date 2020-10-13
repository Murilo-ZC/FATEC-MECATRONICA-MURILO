quantidade = int(input("Quantidade:"))
contador = 0
quantidade_de_pares = 0
quantidade_de_impares = 0

while contador < quantidade:
  valor = int(input("Valor:"))
  if valor % 2 == 0:
    quantidade_de_pares = quantidade_de_pares + 1
  else:
    quantidade_de_impares = quantidade_de_impares + 1
  contador = contador + 1

print("Pares:", quantidade_de_pares)
print("Impares:", quantidade_de_impares)
