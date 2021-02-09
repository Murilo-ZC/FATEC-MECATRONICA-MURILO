#Entrada de dados do usuário

nome = input("Informe o seu nome:")
nascimento = int(input("Informe o ano de nascimento:"))
ano_atual = 2021
idade = ano_atual - nascimento

#Goku tem em 2021: 50 anos
print(f"{nome} tem em {ano_atual}: {idade} anos")