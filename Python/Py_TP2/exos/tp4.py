    
class Livre:
    """Classe définissant un livre caractérisé par :
    - son nom
    - son auteur
    - sa maison d'édition
    - son code barre
    """
    def __init__(self, nom:str, auteur:str, maison_edition:str, code_barre:str):
        self.nom = nom
        self.auteur = auteur
        self.maison_edition = maison_edition
        self.code_barre = code_barre

    def __str__(self):
        return f"""
        Nom : {self.nom}
        Auteur : {self.auteur}
        Maison d'édition : {self.maison_edition}
        Code barre : {self.code_barre}
        """

    def afficher(self):
        print(f"""
        Affichage du livre :
        Nom : {self.nom}
        Auteur : {self.auteur}
        Maison d'édition : {self.maison_edition}
        Code barre : {self.code_barre}
        """)

    def modifier(self, nom:str, auteur:str, maison_edition:str, code_barre:str):
        if nom:
            self.nom = nom
        if auteur:
            self.auteur = auteur
        if maison_edition:
            self.maison_edition = maison_edition
        if code_barre:
            self.code_barre = code_barre
    
    @classmethod
    def creation(cls):
        nom = input("Nom du livre : ")
        auteur = input("Auteur du livre : ")
        maison_edition = input("Maison d'édition : ")
        code = input("Code barre : ")
        return cls(nom, auteur, maison_edition, code)
