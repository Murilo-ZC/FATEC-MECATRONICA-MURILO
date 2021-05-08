# 37. Write a Python program to replace dictionary values with their average.
#Cria um dicionário com alguns valores de teste
dados = {1:10, 2:20,  3:40, 5:50, 4:60, 6: 70, 7:80}

#Soma todos os valores do dicionário e já calcula a média
media = sum(dados.values())/len(dados.values())

#Passando pelos itens
for chave in dados.keys():
    dados[chave] = media

print(dados)
