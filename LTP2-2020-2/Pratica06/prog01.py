#Revisão dos conceitos de lista
valores = []

quantidade = int(input("Informe uma quantidade:"))

while len(valores) < quantidade:
  valor = float(input("Informe um valor:"))
  valores.append(valor)

valor_medio = sum(valores) / len(valores)
maior_valor = max(valores)
menor_valor = min(valores)
valores.sort()

print("valor médio:", valor_medio)
print("maior valor:", maior_valor)
print("menor valor:", menor_valor)
print("lista ordenada:", valores)
