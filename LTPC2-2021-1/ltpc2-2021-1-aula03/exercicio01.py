
def calcula_posicao_final(velocidade, posicao_inicial, tempo):
    return velocidade*tempo + posicao_inicial

def ler_entradas():
    velocidade = float(input("Informe a velocidade:"))
    posicao_inicial = float(input("Informe uma posição:"))
    tempo = float(input("Informe um instante de tempo:"))
    return velocidade, posicao_inicial, tempo

velocidade, posicao_inicial, tempo = ler_entradas()
posicao_final = calcula_posicao_final(velocidade, posicao_inicial, tempo)
print(f"No instante de tempo {tempo}, com a velocidade {velocidade}, o usuário estará em: {posicao_final}")