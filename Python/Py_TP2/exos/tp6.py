import tkinter as tk
from tkinter import ttk
from exos.tp5 import *

class FormulaireRoman(tk.Frame):
    """Classe qui permet de créer un formulaire pour saisir un roman"""
    def __init__(self, parent):
        super().__init__(parent)

        self.nom_label = tk.Label(self, text="Nom")
        self.nom_label.grid(row=0, column=0, sticky=tk.W)
        self.nom_entry = tk.Entry(self, width=30)
        self.nom_entry.grid(row=0, column=1)

        self.auteur_label = tk.Label(self, text="Auteur")
        self.auteur_label.grid(row=4, column=0, sticky=tk.W)
        self.auteur_entry = tk.Entry(self, width=30)
        self.auteur_entry.grid(row=4, column=1)

        self.maison_edition_label = tk.Label(self, text="Maison d'édition")
        self.maison_edition_label.grid(row=8, column=0, sticky=tk.W)
        self.maison_edition_entry = tk.Entry(self, width=30)
        self.maison_edition_entry.grid(row=8, column=1)

        self.code_barre_label = tk.Label(self, text="Code Barre")
        self.code_barre_label.grid(row=12, column=0, sticky=tk.W)
        self.code_barre_entry = tk.Entry(self, width=30)
        self.code_barre_entry.grid(row=12, column=1)

        self.type_label = tk.Label(self, text="Type Roman")
        self.type_label.grid(row=16, column=0, sticky=tk.W)
        self.type_roman_combobox = ttk.Combobox(self, width=27, values=["Roman historique", "Roman d'aventures", "Roman policier", "Science-fiction", "Fantasy"])
        self.type_roman_combobox.grid(row=16, column=1)

        self.desc_label = tk.Label(self, text="Description Roman")
        self.desc_label.grid(row=20, column=0, sticky=tk.W)
        self.desc_entry = tk.Entry(self, width=30)
        self.desc_entry.grid(row=20, column=1)

        self.bouton_sauvegarder = tk.Button(self, text="Sauver", command=self.sauvegarder_livre)
        self.bouton_sauvegarder.grid(row=24, column=0)
        self.bouton_fermer = tk.Button(self, text="Fermer", command=self.destroy)
        self.bouton_fermer.grid(row=24, column=1)

    def sauvegarder_livre(self):
        """Fonction qui sauvegarde les informations du roman"""
        nom = self.nom_entry.get()
        auteur = self.auteur_entry.get()
        maison_edition = self.maison_edition_entry.get()
        code_barre = self.code_barre_entry.get()
        type_roman = self.type_roman_combobox.get()
        description_roman = self.desc_entry.get()
        nouveau_roman = Roman(nom, auteur, maison_edition, code_barre, type_roman, description_roman)
        nouveau_roman.afficher_roman()
        # Enregistrer le livre dans une base de données ou un fichier, etc.

def ficheRoman():
    """Fonction qui affiche la fenêtre de saisie d'un roman"""
    window = tk.Tk()
    window.geometry('300x250')
    window.title("Entrer Roman")
    formulaire_livre = FormulaireRoman(window)
    formulaire_livre.pack()
    window.mainloop()
