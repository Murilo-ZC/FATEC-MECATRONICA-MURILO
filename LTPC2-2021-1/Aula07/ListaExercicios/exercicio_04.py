# 4. Write a Python script to check whether a given key already exists in a dictionary. Go to the editor

#dicionário exemplo
dicionario = {"ola":1, "mundo": 2}

chave = input("informe uma chave:")

if chave in dicionario:
    print("Chave já existe!")
else:
    print("Nova chave!!")