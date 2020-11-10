def semiperimetro(a,b,c):
    return (a+b+c)/2
    
def area(a,b,c):
    s = semiperimetro(a,b,c)
    return (s*(s-a)*(s-b)*(s-c))**0.5
    
a = float(input("Lado A:"))
b = float(input("Lado B:"))
c = float(input("Lado C:"))
area_triangulo = area(a,b,c)

print(area_triangulo)
