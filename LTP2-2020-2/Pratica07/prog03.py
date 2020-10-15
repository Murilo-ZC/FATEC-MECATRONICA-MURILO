#Leitura dos dados
nome = input("Informe um nome:")
poder = input("Poder:")
historia_origem = input("Origem:")
universo = input("De qual universo?")

#Possibilidade 1
heroi = {"nome": nome, "poder":poder, "historia_origem":historia_origem, "universo" : universo}

print("Criado pelo Método 1:")
print(heroi)

#Possibilidade 2
heroi2 = {}
heroi2['nome'] = nome
heroi2['poder'] = poder
heroi2['historia_origem'] = historia_origem
heroi2['universo'] = universo

print("Criado pelo Método 2:")
print(heroi2)
