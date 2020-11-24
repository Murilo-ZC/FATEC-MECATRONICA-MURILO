menor_preco = float('inf')
melhor_loja = ''

continuar = True

while continuar == True:
  preco = float(input("Preco:"))
  loja = input("Loja:")
  if preco < menor_preco:
    menor_preco = preco
    melhor_loja = loja
  continuar = input("Deseja continuar?").lower() == 's'

print("Melhor loja: %s com o preço R$%.2f" % (melhor_loja, menor_preco))
