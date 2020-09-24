#Revisão dos conceitos de lista
def exibirStatusLista(lista):
  valor_medio = sum(lista) / len(lista)
  maior_valor = max(lista)
  menor_valor = min(lista)
  lista.sort()
  print("valor médio:", valor_medio)
  print("maior valor:", maior_valor)
  print("menor valor:", menor_valor)
  print("lista ordenada:", lista)

def leituraLista(lista, quantidade):
  while len(lista) < quantidade:
    valor = float(input("Informe um valor:"))
    lista.append(valor)

#Programa principal
valores = []
quantidade = int(input("Informe uma quantidade:"))
leituraLista(valores, quantidade)
exibirStatusLista(valores)
