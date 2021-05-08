# 20. Write a Python program to print all unique values in a dictionary. Go to the editor
# Sample Data : [{"V":"S001"}, {"V": "S002"}, {"VI": "S001"}, {"VI": "S005"}, {"VII":"S005"}, {"V":"S009"},{"VIII":"S007"}]
# Expected Output : Unique Values: {'S005', 'S002', 'S007', 'S001', 'S009'}

dados = {"I":"S001","II": "S002","III": "S001","IV": "S005","V":"S005","VI":"S009","VII":"S007"}

saida = []

for valor in dados.values():
    if valor not in saida:
        saida.append(valor)

print(saida)