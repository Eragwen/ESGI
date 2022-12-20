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
            print(f"Merci a bientot")
            break
        elif replay.upper() != 'O':
            print(f"Merci a bientot")
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
    num = int(input("entrer un entier positif : "))

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

if __name__ == "__main__":
    maths()