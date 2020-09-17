#Le uma lista e mostra todos os números pares (positivos) dela
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

#Passa por toda a lista, vendo quem é par
for numero in numeros:
  if (numero > 0) and (numero % 2 == 0):
    print(numero)
