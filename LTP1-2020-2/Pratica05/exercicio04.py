#Exercicio 4 - Calculadora 4 operacoes basicas
operacao = input('Informe a operacao desejada:')

if operacao == '+':
  valor1 = float(input('Valor 1:'))
  valor2 = float(input('Valor 2:'))
  resultado = valor1 + valor2
  print(resultado)
elif operacao == '-':
  valor1 = float(input('Valor 1:'))
  valor2 = float(input('Valor 2:'))
  resultado = valor1 - valor2
  print(resultado)
elif operacao == '*':
  valor1 = float(input('Valor 1:'))
  valor2 = float(input('Valor 2:'))
  resultado = valor1 * valor2
  print(resultado)
elif operacao == '/':
  valor1 = float(input('Valor 1:'))
  valor2 = float(input('Valor 2:'))
  if valor2 == 0:
    print('Tentativa de divisão por zero!')
  else:
    resultado = valor1 / valor2
    print(resultado)
else:
  print('Operacao inválida!')
