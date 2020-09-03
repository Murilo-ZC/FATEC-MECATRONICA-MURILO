#Para limpar a tela
from os import system
from math import sin, cos, radians
# from math import *
# import math


#Nossa calculadora

#Cria uma função
def mostrar_menu():
  system('clear')
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

def subtrair():
  numero1 = float(input('Numero 1:'))
  numero2 = float(input('Numero 2:'))
  resultado = numero1 - numero2
  print('Resultado da subtração:', resultado)

def seno():
  angulo = float(input("Angulo:"))
  print("Seno do angulo:", sin(radians(angulo)))

def potencia():
  base = float(input("Base:"))
  expoente = float(input("Expoente:"))
  resultado = base ** expoente
  print('Resultado da potencia:', resultado)


ligado = True

while ligado == True:
  mostrar_menu()
  opcao = input('Opcao:')
  if opcao == '0':
    ligado = False
  elif opcao == '+':
    somar()
  elif opcao == '-':
    subtrair()
  elif opcao == 'sen':
    seno()
  elif opcao == 'elevado':
    potencia()
  
  input('pressione enter para continuar...')

print('Até logo!')
