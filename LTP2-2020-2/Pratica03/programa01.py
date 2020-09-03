#Quanto utilizadao =, é uma ordem de atribuição
numero_secreto = 32

palpite = int(input('Informe um palpite:'))
#Quando utilizamos ==, estamos fazendo uma pergunta
if palpite == numero_secreto:
  print('Acertou!')
else:
  if palpite > numero_secreto:
    print('Chute um número menor!')
  else:
    print('Chute um número maior!')
