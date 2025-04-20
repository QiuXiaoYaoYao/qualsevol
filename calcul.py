a = int(input("Un número: "))
op = input("Un operador: ")
b = int(input("Un altre número: "))

if op == "+": 
    resultat = a+b
elif op == "-": 
    resultat = a-b
elif op == "*": 
    resultat = a*b
elif op == "/": 
    resultat = a/b
else: 
    print("No vàlid") 
    resultat = None
c = 4
print(resultat)