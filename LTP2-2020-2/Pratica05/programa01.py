#O usuário informa 2 listas, juntamos e exibimos na 3 lista
lista_1 = []
lista_2 = []
lista_3 = []
quantidade_na_lista_1 = int(input("Quantos valores na lista 1?"))

while len(lista_1) < quantidade_na_lista_1:
  valor = int(input('Valor:'))
  #Adicionar no final da lista
  lista_1.append(valor)
  print('Quantidade de itens na lista:', len(lista_1))
  print('Itens na lista:', lista_1)

quantidade_na_lista_2 = int(input('QUantos valores na lista 2?'))

while len(lista_2) < quantidade_na_lista_2:
  valor = int(input('Valor:'))
  lista_2.append(valor)
  print('Quantidade de itens na lista:', len(lista_2))
  print('Itens na lista:', lista_2)

#Junta a lista_1 com a lista_2
lista_3 = lista_1 + lista_2
print(lista_3)
