def MostrarDadosPessoa(pessoa):
    print(f"Nome: {pessoa['nome']}")
    print(f"CPF: {pessoa['cpf']}")
    print(f"IDADE: {pessoa.get('idade')}")
    print(f"Nivel de Super: {pessoa.get('super')}")

#Declaro um dicionário vazio
dados_pessoa = {}

#Adiciona um valor no dicionário
dados_pessoa["nome"] = "Vegeta"
dados_pessoa["cpf"] = "123.456.789-01"
dados_pessoa["idade"] = 43
#Sobre escreve o valor anterior
dados_pessoa["nome"] = "Goku"
MostrarDadosPessoa(dados_pessoa)

#Passar por todas as chaves do dicionário
for chave in dados_pessoa.keys():
    print(f"chave: {chave} - valor: {dados_pessoa[chave]}")