import math
import matplotlib.pyplot as plt

def typesPredefinis():
    while True:
        char = input("rentrer un caractere : ")

        num = int(input("rentrer un entier : "))

        print(f"{char} vaut {ord(char)}")
        print(f"{num} vaut {chr(num)}")

        replay = input("Voulez-vous recommencer [oO] ? ")

        if replay.lower() != 'o':
            print("Merci a bientot")
            break
        elif replay.upper() != 'O':
            print("Merci a bientot")
            break

def calculSurface():
    a = int(input("Rentrer A (en m ) : "))
    b = int(input("Rentrer B (en m ) : "))
    c = int(input("Rentrer C (en m ) : "))

    surface = (a + b) * c * 0.5

    print(f"La surface du trapeze est de {surface} m")

    points = [[0, 0], [a/3, c], [(a+2)/3, c], [a, 0], [(a+2)/3, 0], [(a+2)/3, c], [(a+2)/3, 0], [a/3, 0], [a/3, c], [a/3, 0], [0, 0]]

    plt.plot(*zip(*points))
    plt.show()

def sommeFactoriel():
    sum = 0
    fact = 1
    while True:
        num = int(input("entrer un entier positif : "))
        if num < 1:
            print("Vous avez choisi un entier non positif")
            break
        else :
            for i in range(num):
                if i >= 1:
                    print(f"+ ", end='')
                sum += i+1
                print(f"{i+1} ", end='')
            print(f"= {sum}")
            for i in range(num):
                if i >= 1:
                    print(f"* ", end='')
                fact *= i+1
                print(f"{i+1} ", end='')
            print(f"= {fact}")
            replay = input("Voulez-vous recommencer [oO] ? ")

            if replay.lower() != 'o':
                print("Merci a bientot")
                break
            elif replay.upper() != 'O':
                print("Merci a bientot")
                break

def arbreNoel():
    hauteur = int(input("Hauteur de l'arbre : "))

    for i in range(hauteur):
        for j in range(hauteur-i+1):
            print('=', end='')
        for j in range(2*i+1):
            print('*', end='')
        for j in range(hauteur-i+1):
            print('=', end='')
        print()
    
    for i in range(2):
        print('=' * (hauteur-i+1) + '*' * (2*i+1) + '=' * (hauteur-i+1))

def maths():
    num = int(input("Saisissez un entier : "))
    ln = math.log(num)
    sin = math.sin(num)
    cos = math.cos(num)

    print(f"Le logarithme neperien de {num} est {ln}")
    print(f"Le sinus de {num} est {sin}")
    print(f"Le cosinus de {num} est {cos}")

def factoriel(n) -> int:
    return math.factorial(n)

def f1(x, n) -> float:
    return (x**n) / factoriel(n)

def Res(x, n) -> float:
    res = 0
    for n in range(1, n + 1):
        res += f1(x,n)
    return res

def U(n: int) -> float:
    if n == 0: return 1
    else: return U(n - 1) +1 / factoriel(n)
    
def V(n: int) -> float:
    return U(n) +1 / (n * factoriel(n))

def tierce():
    nb_partants = int(input("Combien y a-t-il de chevaux partants : "))
    nb_joues = int(input("Combien y a-t-il de chevaux joues : "))

    X = nb_partants /(nb_partants-nb_joues)

def menu():
    while True:
        nb = int(input("""
    Bienvenue dans l'exercice 1 !
    
        1 - TP1.1 Types predefinis
        2 - TP1.2 Calcul d'une surface
        3 - TP1.3 Somme & factoriel
        4 - TP1.4 Arbre de Noel
        5 - TP1.5 Math
        6 - TP1.6 Fonctions (factoriel() / f1() / Res())
        7 - TP1.7 Fonctions (U() / V())
        8 - TP1.8 Le Tierce
        0 - Exit/Quitter
        Veuillez choisir le TP que vous voulez essayer : """))
        if nb == 1:
            print("Vous avez choisi le TP1.1 ")
            typesPredefinis()
        elif nb == 2:
            print("Vous avez choisi le TP1.2 ")
            calculSurface()
        elif nb == 3:
            print("Vous avez choisi le TP1.3 ")
            sommeFactoriel()
        elif nb == 4:
            print("Vous avez choisi le TP1.4 ")
            arbreNoel()
        elif nb == 5:
            print("Vous avez choisi le TP1.5 ")
            maths()
        elif nb == 6:
            print("Vous avez choisi le TP1.6 ")
            N = int(input("Rentrez un entier : "))
            X = int(input("Rentrez un reel inferieur a 0 : "))
            while X >=0:
                print("Le reel rentre n'est pas inferieur a 0")
                X = int(input("Merci de rentrer un nombre correspondant a la demande : "))
            print("factoriel(n) = ", factoriel(N))
            print("f1(x, n) = ", f1(X, N))
            print("Res(x, n) = ", Res(X, N))
            print("math.exp(x) = ", math.exp(X))

        elif nb == 7:
            print("Vous avez choisi le TP1.7 ")
            n = int(input("Choisissez un entier : "))
            print(f"U({n}) = {U(n)}")
            print(f"V({n}) = {V(n)}")
        elif nb == 8:
            print("Vous avez choisi le TP1.8 ")
            tierce()
        elif nb == 0:
            print("Vous avez choisi de quitter l'exercice ")
            break
        else:
            print("Merci de choisir un nombre compris dans la liste")


if __name__ == "__main__":
    menu()