gastos = {}

continuar = True
while continuar == True:
  valor_do_gasto = float(input("Informe um valor:"))
  categoria = input("Informe um categoria:").lower()
  #Verifica se a categoria já existe no dicionario
  if categoria in gastos.keys():
    #Categoria já existe
    gastos[categoria] += valor_do_gasto
  else:
    #Uma nova categoria vaio ser cadastrada
    gastos[categoria] = valor_do_gasto
  print("Chaves:")
  print(gastos.keys())
  print("Valores:")
  print(gastos.values())
  continuar = input("Continuar?").lower() == 's'

#Passa por todas as categorias e exibe os gastos
for categoria in gastos.keys():
  print("Categoria:", categoria, "Valor:", gastos[categoria])
