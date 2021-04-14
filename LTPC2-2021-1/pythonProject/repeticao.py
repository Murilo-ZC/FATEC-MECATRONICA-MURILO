nome_secreto = "Murilo"
acertei = False

while acertei != True:
    palpite = input("Informe um nome:")
    acertei = nome_secreto == palpite

print("Fim!")