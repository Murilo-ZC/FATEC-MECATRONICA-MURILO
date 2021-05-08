#2. Write a Python script to add a key to a dictionary.
#Sample Dictionary : {0: 10, 1: 20}
#Expected Result : {0: 10, 1: 20, 2: 30}

#Cria um dicionário
meuDicionario = {0: 10, 1: 20}

chave = input("Informe uma chave:")
valor = input("Informe um valor:")

#Adiciona chave/valor ao nosso dicionário
meuDicionario[chave] = valor

#Exibe o dicionário
print(meuDicionario)