#Calculadora Personalizada
#1 - Soma
#2 - Subtração
#3 - Multiplicacao
#4 - Divisao
#5 - R = (V,I)
#6 - V = (r,I)
#7 - I = (V,R)
#8 - Req = serie
#9 - Req = paralelo
#10 - Potencia (R,I)

def exibir_menu():
  print("Menu Calculadora:")
  print("1 - Somar")
  print("2 - Subtrair")
  print("3 - Multiplicar")
  print("4 - Dividir")
  print('5 - R = (V,I)')
  print('6 - V = (r,I)')
  print('7 - I = (V,R)')
  print('8 - Req = serie')
  print('9 - Req = paralelo')
  print('10 - Potencia (R,I)')
  print("0 - Sair")

def somar(numero1, numero2):
  return numero1+numero2

def subtrair(numero1, numero2):
  return numero1-numero2

def multiplicar(numero1, numero2):
  return numero1*numero2

def dividir(numero1, numero2):
  if numero2 != 0:
    return numero1/numero2
  else:
    return "Divisão por zero!"

def ohm1(tensao, corrente):
  return dividir(tensao, corrente)

def ohm2(resistencia, corrente):
  return multiplicar(resistencia, corrente)

def ohm3(tensao, resistencia):
  return dividir(tensao, resistencia)

def potencia(resistencia, corrente):
  return resistencia * (corrente**2)

def serie(resistencia1, resistencia2):
  return somar(resistencia1, resistencia2)

def paralelo(resistencia1, resistencia2):
  return multiplicar(resistencia1, resistencia2)/somar(resistencia1, resistencia2)

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
  elif opcao == 3:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", multiplicar(n1,n2))
  elif opcao == 4:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", dividir(n1,n2))
  elif opcao == 5:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", ohm1(n1,n2))
  elif opcao == 6:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", ohm2(n1,n2))
  elif opcao == 7:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", ohm3(n1,n2))
  elif opcao == 8:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", serie(n1,n2))
  elif opcao == 9:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", paralelo(n1,n2))
  elif opcao == 10:
    n1 = float(input("Numero 1:"))
    n2 = float(input("Numero 2:"))
    print("Resultado:", potencia(n1,n2))
  elif opcao == 0:
    continuar = False
  else:
    print("Opcao Invalida!")
  input("Pressione enter para continuar")

