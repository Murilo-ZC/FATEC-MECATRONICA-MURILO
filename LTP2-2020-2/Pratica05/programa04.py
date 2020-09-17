#Le uma lista e separa os valores impares dos pares
#Cria uma lista vazia
numeros = []

#Pergunta ao usuário quantos valoeres ele deseja informar
quantidade = int(input("Quantidade de valores que deseja informar:"))

#Le os núemros para a lista
while len(numeros) < quantidade:
  numero = int(input('Valor:'))
  numeros.append(numero)

print('Valores informados:')
print(numeros)

#Cria uma lista para guardar valores pares e outra para impares
pares = []
impares = []

#Passar por todos os itens da lista
for numero in numeros:
  if numero % 2 == 0:
    pares.append(numero)
  else:
    impares.append(numero)

if len(pares) > 0:
  print('Pares:', pares)
else:
  print('Nenhum numero par informado')

if len(impares) > 0:
  print('Impares:', impares)
else:
  print('Nenhum numero impar informado')
