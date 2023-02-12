from exos.tp1 import *
from exos.tp2 import *
from exos.tp3 import *
from exos.tp4 import *
from exos.tp5 import *
from exos.tp6 import *

def menu():
    while True:
        nb = int(input("""
    Bienvenue dans l'exercice 2 !
    
        1 - TP2.1 Calcul de Surface
        2 - TP2.2 Jeu des allumettes
        3 - TP2.3 Les Fichiers
        4 - TP2.4 Classe Livre
        5 - TP2.5 Classe Roman
        6 - TP2.6 Entrer fiche Roman
        0 - Exit/Quitter
        Veuillez choisir le TP que vous voulez essayer : """))
        if nb == 1:
            print("Vous avez choisi le TP2.1 ")
            calculSurface()
        elif nb == 2:
            print("Vous avez choisi le TP2.2 ")
            nom = input("Entrer votre nom : ")
            nbr = int(input("Choisir le nombre d'allumettes de depart : "))
            allumettes(nom, nbr)
        elif nb == 3:
            print("Vous avez choisi le TP2.3 ")
            createFiles()
        elif nb == 4:
            print("Vous avez choisi le TP2.4 ")
            # Création du livre   
            livre = Livre.creation()
            # Affichage du livre
            livre.afficher()
            print("Modification du livre : ")
            # Modification du livre
            livre.modifier("A la recherche du temps perdu", "Marcel Proust", "Gallimard", "9782070411892")
            # Affichage du livre
            livre.afficher()
        elif nb == 5:
            print("Vous avez choisi le TP2.5 ")
            # Création du roman
            roman = Roman.creation()
            # Affichage des informations du roman
            roman.afficher_roman()
            # Modification des informations du roman
            roman.modifier_roman("A la recherche du temps perdu", "Marcel Proust", "Gallimard", "9782070411892", "Roman", "Ce n'est pas simplement le récit de ces souvenirs : c'est une réflexion sur la littérature, la mémoire et le temps.")
            # Affichage des nouvelles informations du roman
            roman.afficher_roman()
        elif nb == 6:
            print("Vous avez choisi le TP2.6 ")
            ficheRoman()
        elif nb == 0:
            print("Vous avez choisi de quitter l'exercice ")
            break
        else:
            print("Merci de choisir un nombre compris dans la liste")
