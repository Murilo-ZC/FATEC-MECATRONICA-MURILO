# 1. Write a Python script to sort (ascending and descending) a dictionary by value.
dados = {1:10, 2:-8, 3:90, 4:56, 5:30, 6:5, 7:10,8:25,9:42}

ordem_ascendente = sorted(dados.values())
ordem_descendente = sorted(dados.values(), reverse=True)
print(ordem_ascendente)
print(ordem_descendente)