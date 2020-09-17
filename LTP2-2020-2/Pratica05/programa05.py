#Criar um log de temperaturas
#Ler N temperaturas
#Calcular a temperatura media
#Encontrar todas as temperaturas acima da media
#Encontrar a maior temperatura
#Encontrar a menor temperatura
temperaturas = []

quantidade = int(input('Quantidade:'))

while len(temperaturas) < quantidade:
  temperatura = float(input('Informe temp.:'))
  temperaturas.append(temperatura)

#Calcula o valor da temperatura media
media = sum(temperaturas) / len(temperaturas)
#Cria uma lista vazia para guardar as temperaturas acima da media
temp_acima_da_media = []
for temperatura in temperaturas:
  if temperatura > media:
    temp_acima_da_media.append(temperatura)

maior = max(temperaturas)
menor = min(temperaturas)

print('Temperaturas Informadas:')
print(temperaturas)
print('Temp. Media:', media)
print('Temps acima da media:', temp_acima_da_media)
print('Temp. Maxima:', maior)
print('Temp. Minima:', menor)

