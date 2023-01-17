import math
import matplotlib.pyplot as plt
from tkinter import *

def typesPredefinis():
    while True:
        char = input("rentrer un caractere : ")
        num = int(input("rentrer un entier : "))
        # ord () retourne le nombre correspondant au caractere rentre par l'utilisateur
        # chr () retourne le caractere correspondant au nombre rentre par l'utilisateur
        # le f permet de rentrer des variables directement dans le print
        print(f"{char} vaut {ord(char)}")
        print(f"{num} vaut {chr(num)}")

        replay = input("Voulez-vous recommencer [oO] ? ")
        # Condition pour savoir si l'utilisateur souhaite refaire ce TP
        # lower() et upper() permettent de tester par rapport a la taille du caractere rentre par l'utilisateur, Majuscule et Minuscule
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

    surface = int((a + b) * c * 0.5)
    # calculer la surface d'un trapeze
    print(f"La surface du trapeze est de {surface} m")
    # etablissement de differents points pour creer graphiquement le trapeze precedement creer avec la surface
    points = [[0, 0], [a/3, c], [(a+2)/3, c], [a, 0], [(a+2)/3, 0], [(a+2)/3, c], [(a+2)/3, 0], [a/3, 0], [a/3, c], [a/3, 0], [0, 0]]
    # plt permet de configurer et afficher graphiquement par rapport a des points configures
    plt.plot(*zip(*points))
    plt.show()

def sommeFactoriel():
    # Initialisation des variables sum et fact
    sum = 0
    fact = 1
    # Debut d'une boucle infinie
    while True: 
        # Demande a l'utilisateur de rentrer un entier positif
        num = int(input("entrer un entier positif : "))
        # Si l'entier n'est pas positif sortir de la boucle
        if num < 1:
            print("Vous avez choisi un entier non positif")
            break
        else :
            # Sinon Traverser deux boucles
            # La premiere va parcourir les nombres jusqu'a celui choisi 
            # Pour en calculer la somme
            for i in range(num):
                # Affiche un + avant chaque nombre exepter le premier
                if i >= 1:
                    print(f"+ ", end='')
                # Pour calculer la somme, ajoute chaque nouveau nombre et l'additionne
                sum += i+1
                # Affiche chaque nombre
                print(f"{i+1} ", end='')
            # Affiche le resultat
            print(f"= {sum}")
            # La deuxieme va parcourir les nombres jusqu'a celui choisi 
            # Pour en calculer factoriel
            for i in range(num):
                # Affiche un * avant chaque nombre exepter le premier
                if i >= 1:
                    print(f"* ", end='')
                # Pour calculer factoriel, ajoute chaque nouveau nombre et le multiplie
                fact *= i+1
                # Affiche chaque nombre
                print(f"{i+1} ", end='')
            # Affiche le resultat
            print(f"= {fact}")
            # Demande a l'utilisateur si il souhaite recommencer
            replay = input("Voulez-vous recommencer [oO] ? ")
            # Si le resultat est minuscule mais pas egal a o
            # Sort du programme
            if replay.lower() != 'o':
                print("Merci a bientot")
                break
            # Si le resultat est majuscule mais pas egal a O
            # Sort du programme
            elif replay.upper() != 'O':
                print("Merci a bientot")
                break

def arbreNoel():
    # Demande a l'utilisateur un entier correspondant 
    # a la hauteur de l'arbre souhaite
    hauteur = int(input("Hauteur de l'arbre : "))
    # Boucle pour afficher chaque ligne
    for i in range(hauteur):
        # Boucle pour afficher chaque '=' a gauche de l'arbre
        for j in range(hauteur-i+1):
            print('=', end='')
        # Boucle pour afficher chaque '*' pour l'arbre
        for j in range(2*i+1):
            print('*', end='')
        # Boucle pour afficher chaque '=' a droite de l'arbre
        for j in range(hauteur-i+1):
            print('=', end='')
        # Pour passer a la ligne suivante
        print()
    # Boucle pour afficher la base de l'arbre
    for i in range(2):
        print('=' * (hauteur-i+1) + '*' * (2*i+1) + '=' * (hauteur-i+1))

# Demande un entier a l'utilisateur 
# Pour en calculer le logarithme neperien 
# Le sinus, le cosinus. 
# Puis affiche chaque resultat
def maths():
    num = int(input("Saisissez un entier : "))
    ln = math.log(num)
    sin = math.sin(num)
    cos = math.cos(num)

    print(f"Le logarithme neperien de {num} est {ln}")
    print(f"Le sinus de {num} est {sin}")
    print(f"Le cosinus de {num} est {cos}")
# Retourne le factoriel de l'entier passe en parametre
def factoriel(n: int):
    return math.factorial(n)

# Retourne un resultat, par rapport a un nombre flottant et un entier 
def f1(x: float, n: int):
    return (x**n) / factoriel(n)

# Retourne la somme des resultats de f1 pour n allant de 1 a n inclus 
def Res(x: float, n:int):
    res = 0
    for n in range(1, n + 1):
        res += f1(x,n)
    return res

# Retourne 1 si n egal 0. 
# Sinon le resultat de la suite U divise par la factoriel de n
def U(n: int) -> float:
    if n == 0: return 1
    else: return U(n - 1) +1 / factoriel(n)
# Sinon le resultat de la suite U divise par la factoriel de n qui est multiplie par n
def V(n: int) -> float:
    return U(n) +1 / (n * factoriel(n))

def tierce():
    # Demande de rentrer deux entiers 
    n = int(input("Combien y a-t-il de chevaux partants : "))
    p = int(input("Combien y a-t-il de chevaux joues : "))
    # X pour calculer la probabilite de gagner 
    # en prenant en compte l'ordre des chevaux joues 
    # Y pour calculer la probabilite de gagner 
    # sans prendre en compte l'ordre
    X = factoriel(n) /factoriel(n-p)
    Y = factoriel(n) / (factoriel(p)*factoriel(n-p))
    # Affiche les deux probabilites
    print(f"""
- Dans l'ordre : une chance sur {X} de gagner
- Dans le desordre : une chance sur {Y} de gagner
    """)

def menu():
    # TEST DE TK (pour faire un menu)
    # root = Tk()
    # bar_menu = Menu(root)
    # root.config(menu=bar_menu)
    # file_menu = Menu(bar_menu)
    # var_label = StringVar()
    # label = Label(root, textvariable=var_label).pack()
    # var_label.set("Quitter")
    # bouton=Button(root, textvariable="quitter", command=root.destroy)
    # bouton.pack()
    # bar_menu.add_cascade(label="TP1", menu=file_menu)
    # file_menu.add_command(label="TP1.1 Types predefinis", command=lambda: typesPredefinis())
    # file_menu.add_command(label="TP1.2 Calcul d'une surface", command=lambda: calculSurface())
    # file_menu.add_command(label="TP1.3 Somme & factoriel", command=lambda: sommeFactoriel())
    # file_menu.add_command(label="TP1.4 Arbre de Noel", command=lambda: arbreNoel())
    # file_menu.add_command(label="TP1.5 Math", command=lambda: maths())
    # file_menu.add_command(label="TP1.6 Fonctions (factoriel() / f1() / Res())", command=lambda: typesPredefinis())
    # file_menu.add_command(label="TP1.7 Fonctions (U() / V())", command=lambda: typesPredefinis())
    # file_menu.add_command(label="TP1.8 Le Tierce", command=lambda: tierce())
    # root.mainloop()

    # Boucle infinie pour afficher le menu et 
    # laisser l'utilisateur se deplacer
    while True:
        # Demande a l'utilisateur de rentrer un entier pour le TP
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
        # En fonction du nombre rentrer les differents TP se lancent
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
            X = int(input("Rentrez un reel superieur a 0 mais inferieur a 1 : "))
            while X >=0 and X <= 1:
                print("Le reel rentre n'est pas compris entre 0 et 1")
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

# Pour que l'exe commence sur le menu
if __name__ == "__main__":
    menu()