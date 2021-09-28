from machine import Pin
import time

#Configfura o LED Build in como saída
p2 = Pin(2, Pin.OUT)

#Coloca o pino em nível baixo
p2.on()
#Para o microcontrolador por 1 segundo
time.sleep(1)
#Pede para o microcontrolador desligar a saída
p2.off()
