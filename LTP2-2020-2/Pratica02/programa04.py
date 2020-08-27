#Usuário fala dois números e nós calculamos a média deles
numero1 = float(input("Numero 1:"))
numero2 = int(input("Numero 2:"))
media = (numero1 + numero2) / 2
#O \n faz pular uma linha quando ele está no meio da string
print("o resultado \nda media:", media)

#Exibindo diversas variáveis em uma saída
print("A média de", numero1, "com", numero2, 'é igual a:', media)
print("A média de %.2f com %i é: %f" %(numero1, numero2, media))
print("A média de {} com {} é: {}".format(numero1, numero2, media))
