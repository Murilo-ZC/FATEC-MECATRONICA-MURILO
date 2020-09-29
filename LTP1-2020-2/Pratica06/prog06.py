#Classificador de nível Gamer
#Mouse com RGB
#Teclado com RGB
#Monitor com RGB
#Mouse - Teclado - Monitor - Classificação
# sim     Sim       sim       Viciado
# nao     sim       nao       noia
# sim     nao       nao       quase normal
# nao     nao       nao       -50fps
#qualquer outro caso - não sabe responder!
mouse = input("Seu mouse tem RGB?")
teclado = input("Seu teclado tem RGB?")
monitor = input("Seu monitor tem RGB?")
# = é uma ordem de atribuição
#== é uma pergunta de igualdade
if mouse == 's' and teclado == 's' and monitor == 's':
  print('Viciado!')
#O elif é um else condicionado. Ele vai verificar sua pergunta se a pergunta anterior
#a ele, de um if ou outro elif, for falsa. Só executa seu bloco se a pergunta for verdadeira
elif mouse == 'n' and teclado == 's' and monitor == 'n':
  print('noia')
elif mouse == 's' and teclado == 'n' and monitor == 'n':
  print('quase normal')
elif mouse == 'n' and teclado == 'n' and monitor == 'n':
  print('-50fps')
else:
  print('Sem classificação')
