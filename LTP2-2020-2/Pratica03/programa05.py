#Nossa calculadora

#Cria uma função
def mostrar_menu():
  print('0 - Sair')
  print('+ - Somar')
  print('- - Subtrair')
  print('* - Multiplicar')
  print('/ - Dividir')
  print('sen - Seno')
  print('cos - Cosseno')
  print('elevado - Potência')
  print('raiz - Calcular a Raiz')

def somar():
  numero1 = float(input('Numero 1:'))
  numero2 = float(input('Numero 2:'))
  resultado = numero1 + numero2
  print('Resultado da soma:', resultado)


ligado = True

while ligado == True:
  mostrar_menu()
  opcao = input('Opcao:')
  if opcao == '0':
    ligado = False
  elif opcao == '+':
    somar()

print('Até logo!')
