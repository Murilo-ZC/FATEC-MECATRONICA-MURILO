#Estruturas de decisão
temperatura_limite = float(input("Informe uma temperatura limite:"))
temperatura_atual = float(input("Informe a temperatura atual:"))

if temperatura_atual > temperatura_limite:
  print("Temperatural atual está acima do limite!")
elif temperatura_atual < temperatura_limite:
  print('Temperatura atual abaixo do limite!')
else:
  print('Temperatura atual está no limite!')


print('Obrigado por utilizar o sistema!')
