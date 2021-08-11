from machine import Pin
import time

#Configfura o LED Build in como saída
p2 = Pin(2, Pin.OUT)

#Roda um comportamento varias vezes
while True:    
    #Coloca o pino em nível alto
    p2.on()
    #Para o microcontrolador por 1 segundo
    time.sleep(1)
    #Pede para o microcontrolador desligar a saída
    p2.off()
    time.sleep(1)

