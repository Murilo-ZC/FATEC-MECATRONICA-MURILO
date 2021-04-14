def menu():
    print("Coleção de Figurinhas Bomba Patch 2021")
    print("1 - Ver coleção")
    print("2 - Adicionar figurinha")
    print("3 - Sair")

#figurinhas = codigo:quantidade
#Cria o dicionario vazio
figurinhas = {}

continuar = True

#Loop principal do programa
while continuar:
    menu()
    opcao = input("Escolha sua opcao:")
    if opcao == "1":
        print("Nossa Coleção:")
        for codigo in figurinhas.keys():
            print(f"Código: {codigo} - Quantidade: {figurinhas[codigo]}")
    elif opcao == "3":
        continuar = False
    elif opcao == "2":
        #Quando uma figurinha for adicionada, verificar se ela já existe
        codigo = input("Código da Figurinha: ")
        if codigo in figurinhas:
            figurinhas[codigo] = figurinhas[codigo] + 1
        else:
            figurinhas[codigo] = 1
    else:
        print("Opção inválida!")