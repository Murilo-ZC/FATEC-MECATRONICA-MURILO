def lerNumeroPositivo():
  continuar = True
  while continuar==True:
    numero = int(input("Informe um valor:"))
    continuar = numero < 0
  return numero

def somar_dois_numeros(numero1,numero2):
  return numero1+numero2

def exibir_saida_formatada(numero1, numero2, resultado):
  print("A soma de {} com {} é igual: {}".format(numero1, numero2, resultado))
  print("A soma de %i com %i é igual: %i" % (numero1, numero2, resultado))

primeiro_valor = lerNumeroPositivo()
segundo_valor = lerNumeroPositivo()
resposta = somar_dois_numeros(primeiro_valor, segundo_valor)
exibir_saida_formatada(primeiro_valor, segundo_valor, resposta)
