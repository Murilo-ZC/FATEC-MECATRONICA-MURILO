# 17. Write a Python program to remove duplicates from Dictionary.

dados = {1:1,2:1,3:2,4:2,5:2,6:3,7:4,8:4,9:5,10:6,11:7,12:4,13:1,14:8,15:9}

#Copia do dicionario
dados_copia = {}

for chave, valor in dados.items():
    if valor not in dados_copia.values():
        dados_copia[chave] = valor

print(dados)
print(dados_copia)