# 3. Write a Python script to concatenate following dictionaries to create a new one. Go to the editor
#
# Sample Dictionary :
# dic1={1:10, 2:20}
# dic2={3:30, 4:40}
# dic3={5:50,6:60}
# Expected Result : {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}

#Dicionários que já existem
dic1={1:10, 2:20}
dic2={3:30, 4:40}
dic3={5:50,6:60}

#Criar um dicionário vazio
dic4 = {}

#Mostra o dicionário novo
print(dic4)

#Concatena dois dicionários
dic4.update(dic1)
dic4.update(dic2)
dic4.update(dic3)

print(dic4)
