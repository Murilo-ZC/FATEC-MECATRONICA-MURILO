#Estruturas de decisão
temperatura_limite = float(input("Informe uma temperatura limite:"))
temperatura_atual = float(input("Informe a temperatura atual:"))

if temperatura_atual > temperatura_limite:
  print("Temperatural atual está acima do limite!")

if temperatura_atual < temperatura_limite:
  print('Temperatura atual abaixo do limite!')

print('Obrigado por utilizar o sistema!')
