#2. Write a Python script to add a key to a dictionary.
#Sample Dictionary : {0: 10, 1: 20}
#Expected Result : {0: 10, 1: 20, 2: 30}

dicionario = {}
chave = input("Informe uma chave:")
valor = input("Informe um valor:")
dicionario[chave] = valor
print(dicionario)