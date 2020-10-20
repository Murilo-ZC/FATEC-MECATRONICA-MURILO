nome = input("Informe seu nome:")
time_de_futebol = input("Informe seu time:")
quantidade = int(input("Informe quantos mundiais o seu time venceu:"))

print("Ola", nome)

if time_de_futebol == 'Palmeiras':
  print("Seu time não tem mundial")
else:
  print("Seu time:", time_de_futebol, "Venceu:", quantidade)
