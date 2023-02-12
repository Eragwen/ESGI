import random

def take_allumettes(allumettes_left):
    """
    Fonction pour choisir un nombre d'allumettes à enlever 
    de façon aléatoire entre 1 et 3 pour l'ordinateur.
    """
    max_take = min(allumettes_left, 3)
    return random.randint(1, max_take)

def allumettes():
    """
    Fonction pour jouer au jeu des allumettes 
    contre un ordinateur.
    """
    name = input("Entrer votre nom : ")
    allumettes = int(input("Choisir le nombre d'allumettes de départ : "))

    current_player = random.choice([name, "ordinateur"])
    print(f"{current_player} commence")

    while allumettes > 1:
        print("| " * allumettes, end='')
        if current_player == "ordinateur":
            taken = take_allumettes(allumettes)
            print(" Ordinateur enlève :", taken)
        else:
            taken = int(input(f" {name} enlève : (1-3)  "))
            while taken < 1 or taken > 3 or taken > allumettes:
                taken = int(input(f"Choix invalide. {name} enlève : (1-3) ? "))

        allumettes -= taken
        if allumettes == 1:
            print(f"""
            {name} a gagné :-)
            L'ordinateur a perdu :-(""" if current_player == name else f"""
            {name} a perdu :-(
            L'ordinateur a gagné :-(""")
            return
        elif allumettes <= 0:
            print(f"""
            {name} a perdu :-()
            L'ordinateur a gagné :-)""" if current_player == name else f"""
            {name} a gagné :-)
            L'ordinateur a perdu :-(""")
            return

        current_player = name if current_player == "ordinateur" else "ordinateur"
