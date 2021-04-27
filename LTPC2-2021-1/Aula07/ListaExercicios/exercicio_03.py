# 3. Write a Python script to concatenate following dictionaries to create a new one. Go to the editor
#
# Sample Dictionary :
# dic1={1:10, 2:20}
# dic2={3:30, 4:40}
# dic3={5:50,6:60}
# Expected Result : {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}

#Declara os dicionários
dic1={1:10, 2:20}
dic2={3:30, 4:40}
dic3={5:50,6:60}

#Dicionário que vai receber os dados
dic4 = {}

#Para adicionar todos eles em conjunto
dic4.update(dic1)

#Apenas para verificar como está ficando o dic4
print(dic4)

#Adicionar os demais dicionários
dic4.update(dic2)
dic4.update(dic3)

#Exibe o resultado final
print("Resultado final:")
print(dic4)
