# 5. Write a Python program to iterate over dictionaries using for loops.

dados = {"CEP":"11101-101", "logradouro":"Rua Justino Paixão", "cidade": "Santo André"}

print("Exibe todos os dados de uma vez:", dados)

#Iteração sobre os dados. Possibilita utilizar cada elemento individualmente
#Forma 1:
# for chave,valor in dados.items():
#     print("Chave da vez:", chave)
#     print("Valor da vez:", valor)
#     print("Acessando elementos combinado:", dados[chave])
#     print("--------------------------")

#Forma 2:
# for chave in dados:
#     print("Chave da vez:", chave)
#     print("Valor da vez:", dados[chave])
#     print("------------------------------")

#Forma 3: Passando por todos os valores
for valor in dados.values():
    print("Valor da vez:", valor)
    print("-----------------------")