#Quanto utilizadao =, é uma ordem de atribuição
numero_secreto = 32
palpite = 0
while numero_secreto != palpite:
  palpite = int(input('Informe um palpite:'))
  #Quando utilizamos ==, estamos fazendo uma pergunta
  if palpite == numero_secreto:
    print('Acertou!')
  elif palpite > numero_secreto:
    print('Chute um número menor!')
  elif palpite < numero_secreto:
    print('Chute um número maior!')
  else:
    print('Caso padrão')
