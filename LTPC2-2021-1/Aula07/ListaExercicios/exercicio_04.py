# 4. Write a Python script to check whether a given key already exists in a dictionary. Go to the editor

#Cria um dicionário inicial
meus_dados = {"1":10, "2":178, "3": 456789, "nome": "FATEC"}

chave = input("Informe a chave desejada:")

#Verifica se a chave existe no dicionário
if chave in meus_dados:     #if chave in meus_dados.keys():
    print("Chave já existe!")
    print("Valor atribuido a chave:", meus_dados[chave])
else:
    print("Nova chave!")