# #Operadores de divisao (/) e resto da divisao (%)
# divisao = 15 / 2
# resto = 15 % 2

# print('Divisao:', divisao)
# print('Resto:', resto)

#Ler um número para ver se ele é par ou impar
numero = int(input('Informe um numero:'))
#Calcula o resto da divisao do numero por 2
resto = numero % 2
#Olha para o valor do resto
if resto == 0:
  print(numero, 'é par!')
else:
  print(numero, 'é impar!')
