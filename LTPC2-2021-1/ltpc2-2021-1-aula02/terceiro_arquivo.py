senha = 564242
total_tentativas = 0

import random

chute = random.randint(0, 999999)

while senha != chute:
    total_tentativas = total_tentativas + 1
    chute = random.randint(0, 999999)
    print(f"Chute atual: {chute} - Tentativa: {total_tentativas}")

print("Quebrou a senha secreta!")