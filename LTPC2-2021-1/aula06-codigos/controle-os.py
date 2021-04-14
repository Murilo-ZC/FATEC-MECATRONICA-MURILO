def menu():
    print("---- Controle de OS ----")
    print("1 - Cadastrar nova OS")
    print("2 - Verificar todas as OS")
    print("3 - Filtrar por estado da OS")
    print("4 - Filtrar por tipo da OS")
    print("0 - Sair")

def ExibirOS(os):
    print(f"{os['numero']}\t{os['estado']}\t{os['tipo']}")

#Guarda todas as ordens de serviço
ordens = []

continuar = True
while continuar:
    menu()
    opcao = input("Escolha a opcao:")
    if opcao == "0":
        continuar = False
    elif opcao == "1":
        os = {}
        os["numero"] = input("Numero da OS:").upper()
        os["estado"] = input("Estado do Serviço da OS:").upper()
        os["tipo"] = input("Tipo da OS:").upper()
        #Adiciona a OS na lista de OS's
        ordens.append(os)
    elif opcao == "2":
        #Envia uma OS por vez para a função
        print("Dados das OS:")
        print("Código:\tEstado:\tTipo:")
        for ordem in ordens:
            ExibirOS(ordem)
    #Filtra pelo estado
    elif opcao == "3":
        estado = input("Qual o estado?").upper()
        #Envia uma OS por vez para a função
        print("Dados das OS:")
        print("Código:\tEstado:\tTipo:")
        for ordem in ordens:
            if ordem["estado"] == estado:
                ExibirOS(ordem)
