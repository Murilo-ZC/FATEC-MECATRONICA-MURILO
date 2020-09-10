#Ler todos os nomes que o usuário digitar até que ele não 
#deseja mais continuar. Exibir todos os nomes da lista, em ordem
#alfabética

# #Cria uma lista vazia para os nomes
# nomes = []

# #Cria uma repeticao que pergunta se o usuario deseja continuar
# continuar = True

# while continuar == True:
#   nome = input('Informe um nome:')
#   #Coloca o nome no final da lista
#   nomes.append(nome)
#   #Exibe a parcial da lista com os nomes
#   print(nomes)
#   if input('Deseja continuar (s/n)?') == 's':
#     continuar = True
#   else:
#     continuar = False

#Como o código de cima já funciona, vamos considerar que a lista já possui
#nomes inseridos nela
nomes = ['Angelian Jolie', 'Melgipson', 'Bruce Willies', 'Nicolas Cage', 'Sasha Grey', 'Keanu Reaves']

#Coloca a lista de nomes em ordem
nomes.sort()
print(nomes)
#Procura um valor dentro da lista
nome = input('Quem você deseja procurar?')

if nome in nomes:
  print('Encontrei na posição:', nomes.index(nome))
else:
  print('Registro não encontrado')
