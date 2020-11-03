#Calculadora Personalizada
#1 - Soma
#2 - Subtração
#3 - Multiplicacao
#4 - Divisao

def exibir_menu():
  print("Menu Calculadora:")
  print("1 - Somar")
  print("2 - Subtrair")
  print("3 - Multiplicar")
  print("4 - Dividir")
  print("0 - Sair")

def somar(numero1, numero2):
  return numero1+numero2

def subtrair(numero1, numero2):
  return numero1-numero2

#Programa principal
import os
continuar = True
while continuar == True:
  os.system("clear") #No windows - cls
  exibir_menu()
  opcao = int(input("Opcao:"))
  if opcao == 1:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", somar(n1,n2))
  elif opcao == 2:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", subtrair(n1,n2))
  elif opcao == 0:
    continuar = False
  else:
    print("Opcao Invalida!")
  input("Pressione enter para continuar")

