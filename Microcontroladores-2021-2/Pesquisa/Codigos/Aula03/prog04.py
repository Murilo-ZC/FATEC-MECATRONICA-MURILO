import esp32
import time
from machine import RTC

#Configurações globais
rtc = RTC()
rtc.datetime((2021, 8, 11, 2, 10, 25, 0, 0)) # set a specific date and time



#Converte de F para C
def converte_temperatura(tempF):
    return (tempF-32)*5/9


print("Monitoramento de Sensores:")

while True:
    #Ler os sensores internos
    temperatura = esp32.raw_temperature()
    sensor_hall = esp32.hall_sensor()
    data_hora = rtc.datetime()
    #Exibe os valores dos sensores
    print('Temperatura: {} - {}'.
          format(converte_temperatura(temperatura),
                 data_hora))
    print('Hall:{} - {}'.
          format(sensor_hall, data_hora))
    time.sleep(2)
