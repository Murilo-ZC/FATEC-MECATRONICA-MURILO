continuar = True
while continuar == True:
  nome = input("Informe seu nome:")
  if nome == 'Kuririn':
    continuar = False
  else:
    ki = int(input("Informe seu poder de luta:"))
    if ki > 8000:
      print("Mais forte que o Goku!")
    else:
      print("Procura o Vegeta e vai treinar!")
