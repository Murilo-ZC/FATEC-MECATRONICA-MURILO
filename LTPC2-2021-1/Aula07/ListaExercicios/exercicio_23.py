# 23. Write a Python program to combine values in python list of dictionaries. Go to the editor
# Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300}, {'item': 'item1', 'amount': 750}]
# Expected Output: Counter({'item1': 1150, 'item2': 300})

dados = [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300}, {'item': 'item1', 'amount': 750}]

dados_totalizados = {}

for item in dados:
    if item["item"] in dados_totalizados.keys():
        dados_totalizados[item["item"]] += item["amount"]
    else:
        dados_totalizados[item["item"]] = item["amount"]

print(dados_totalizados)