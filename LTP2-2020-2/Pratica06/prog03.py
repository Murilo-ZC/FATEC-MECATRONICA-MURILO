#Lista de listas - Tabela
#Pede para o usuário informar uma quantidade de produtos e depois faz
#a leitura dessa quantidae, lendo nome e valor de cada item

lista_de_compras = []

quantidade = int(input("Informe a quantidade:"))

while len(lista_de_compras) < quantidade:
  nome = input("Nome do produto:")
  preco = float(input("Preço:"))
  lista_de_compras.append([nome, preco])
  print(lista_de_compras)
