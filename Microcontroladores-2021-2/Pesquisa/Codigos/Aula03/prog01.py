from machine import Pin

#Configfura o LED Build in como saída
p2 = Pin(2, Pin.OUT)

#Coloca o pino em nível baixo
p2.on()