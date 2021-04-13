def ler_entradas():
    posicao_inicial = float(input("Posicao Inicial:"))
    posicao_final = float(input("Posicao Final:"))
    instante_inicial = float(input("Instante Inicial:"))
    instante_final = float(input("Instante Final:"))
    return posicao_inicial, posicao_final, instante_inicial, instante_final

def calcular_velocidade_media(posicao_inicial, posicao_final, tempo_inicial, tempo_final):
    return (posicao_final-posicao_inicial)/(tempo_final-tempo_inicial)

p0,p1,t0,t1 = ler_entradas()
vm = calcular_velocidade_media(p0,p1,t0,t1)
print(f"O valor da velocidade media: {vm}")