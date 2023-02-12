from exos.tp4 import Livre  

class Roman(Livre):
    """Classe définissant un Roman héritant de la classe Livre caractérisé par :
    - son nom
    - son auteur
    - sa maison d'édition
    - son code barre
    - son type de roman
    - sa description
    """
    def __init__(self, nom:str, auteur:str, maison_edition:str, code_barre:str, type_roman:str, description:str):
        super().__init__(nom, auteur, maison_edition, code_barre)
        self.type_roman = type_roman
        self.description = description

    def __str__(self):
        return f"""
        Affichage du roman :
        {super().__str__()}
        Type de roman : {self.type_roman}
        Description : {self.description}
        """

    def afficher_roman(self):
        print(self)

    def get_type_roman(self):
        return self.type_roman
    
    def get_description(self):
        return self.description
    
    def set_type_roman(self, type_roman):
        self.type_roman = type_roman
    
    def set_description(self, description):
        self.description = description

    def modifier_roman(self, nom:str, auteur:str, maison_edition:str, code_barre:str, type_roman:str, description:str):
        super().modifier(nom, auteur, maison_edition, code_barre)
        self.type_roman = type_roman
        self.description = description

    @classmethod
    def creation(cls):
        nom = input("Nom du roman : ")
        auteur = input("Auteur du roman : ")
        maison_edition = input("Maison d'édition : ")
        code = input("Code barre : ")
        type_roman = input("Type de roman : ")
        description = input("Description : ")
        return cls(nom, auteur, maison_edition, code, type_roman, description)