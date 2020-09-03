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


ligado = True

while ligado == True:
  mostrar_menu()
  opcao = input('Opcao:')
  if opcao == '0':
    ligado = False

print('Até logo!')
