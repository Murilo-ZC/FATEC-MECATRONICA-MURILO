#Exercício 2 - verifica se 3 números são lados de um triangulo

lado1 = int(input('Lado 1:'))
lado2 = int(input('Lado 2:'))
lado3 = int(input('Lado 3:'))

#Forma1
if (lado1 > 0) and (lado2 > 0) and (lado3 > 0):
  if (lado1+lado2) > lado3 and (lado2+lado3) > lado1 and (lado1 + lado3) > lado2:
    print('Pode formar um trinagulo!')

#Forma2
if (lado1 > 0) and (lado2 > 0) and (lado3 > 0) and (lado1+lado2) > lado3 and (lado2+lado3) > lado1 and (lado1 + lado3) > lado2:
  print('Pode formar um trinagulo!')
