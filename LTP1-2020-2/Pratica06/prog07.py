#Estrutura de repetição
numero_secreto = 42

acertou = False
while acertou == False:
  chute = int(input("Informe seu chute:"))
  if chute > numero_secreto:
    print('Errrrrrou por alto!')
  elif chute < numero_secreto:
    print("Errrou po baixo!")
  else:
    acertou = True
    print("Acertou!!!")

print("Obrigado por jogar!")
