# 15. Write a Python program to get the maximum and minimum value in a dictionary.

dados = {1:2, 3:400, 5:6, 7:8, 9:10, 11:-9, 12:45, 2:100}

maior = max(dados.values())
menor = min(dados.values())

print("Maior valor:", maior)
print("Menor valor:", menor)