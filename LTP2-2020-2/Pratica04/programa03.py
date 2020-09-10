#Lista vazia com as temperaturas
# temperaturas = [23, 5, -6, 34]
temperaturas = []

print(temperaturas)

#Pede para o usuário digitar 5 temperaturas
contador = 0
while contador < 5:
  temperatura = float(input('Informe um temperatura:'))
  #Adiciona temperatura no final
  temperaturas.append(temperatura)
  #Só para ver o comportamento da lista entre as interações
  print(temperaturas)
  contador += 1 #contador = contador + 1

#Encontrar o maior Valor
maior = max(temperaturas)
print('Maior valor:', maior)

#Encontra o menor valor
menor = min(temperaturas)
print('Menor valor:', menor)

#Calcula o valor médio, pela somatória e a contagem de elementos
media = sum(temperaturas)/ len(temperaturas)
print('Temperatura média:', media)
#Controla o formato de exibição da media
print('Temperatura média: %.3f' % (media))

#Coloca a lista em ordem
temperaturas.sort()
print('Ordenação Crescente:')
print(temperaturas)

#Ordenação decrescente
temperaturas.sort(reverse=True)
print('Ordenação Decrescente:')
print(temperaturas)

