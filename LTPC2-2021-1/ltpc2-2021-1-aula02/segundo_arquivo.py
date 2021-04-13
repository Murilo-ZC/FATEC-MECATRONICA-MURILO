#Programas que utilizam estruturas de decisão

placa_de_video_rtx3080 = 9789.0
placa_de_video_gtx1650 = 1468.0
placa_de_video_gt710 = 200.0
carteira = 100.0

if carteira > placa_de_video_rtx3080:
    print("Pode comprar o monstro!")
    print("Minecraft a 4k!!!")
elif carteira > placa_de_video_gtx1650:
    print("Compre a GTX!")
    print("Minecraft full hD!!")
elif carteira > placa_de_video_gt710:
    print("Compre a GT!")
    print("Da pra jogar(quase)")
else:
    print("Vai de integrada mesmo!")
print("Voltar para casa!")