# 30. Write a Python program to get the top three items in a shop. Go to the editor
# Sample data: {'item1': 45.50, 'item2':35, 'item3': 41.30, 'item4':55, 'item5': 24}
# Expected Output:
# item4 55
# item1 45.5
# item3 41.3
#Dicionário com dados de exemplo
items = {'item1': 45.50, 'item2':35, 'item3': 41.30, 'item4':55, 'item5': 24}

#Retira os itens com maior ocorrencia
#Cria uma lista para guardar as ocorrencias
maiores = []
#Repete o comportamento para achar os 3 maiores valores
for conta in range(3):
    #Passa por todas as chaves e todos os valores do dicionario
    for chave,valor in items.items():
        #Verifica se o valor atual é o de maior ocorrencia
        if valor == max(items.values()):
            #Guarda a chave do valor
            maior = chave
            #Interrompe a execução do laço for
            break
    #Adiciona o valor com maior ocorrencia
    maiores.append({maior:items.pop(maior)})

print(maiores)


