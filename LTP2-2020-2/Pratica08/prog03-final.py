personagens = {"dps": [] , "healer": [], "support": [], "tank": []}

quantidade_de_personagens = int(input("Quantidade de personagens:"))

contador = 0
while contador < quantidade_de_personagens:
  nome = input("Qual o nome do personagem:")
  classe = input("Qual a classe do personagem:").lower()
  #Verifica se a classe informada é válida
  if classe in personagens.keys():
    personagens[classe].append(nome)
    #Avança para o próximo registro
    contador += 1
  else:
    print("Classe de personagem invalida!")
  print(personagens)

print("Porcentagens Relativas:")
for categoria in personagens.keys():
  porcentagem = len(personagens[categoria])/quantidade_de_personagens
  print("Categoria:", categoria, " - ", porcentagem * 100)

print("Personagens:")
for categoria in personagens.keys():
  print("Classe de Personagem:", categoria.capitalize())
  for nome_de_personagem in personagens[categoria]:
    print(nome_de_personagem)
  print('-------')
