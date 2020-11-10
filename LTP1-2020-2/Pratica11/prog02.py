def converterF(tempC):
    return ((9/5)*tempC) + 32
    
def converterK(tempC):
    return tempC + 273
    
temperatura_c = float(input("Informe um valor de temp:"))
print("Temp F:", converterF(temperatura_c))
print("Temp K:", converterK(temperatura_c))
