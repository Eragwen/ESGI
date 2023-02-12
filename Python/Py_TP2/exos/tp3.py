
def createFiles():
    """
    Script qui demande à l'utilisateur de rentrer deux entiers,
    puis qui les stocke dans un fichier binaire et un fichier texte.
    Et enfin qui les affiche.
    """

    x = int(input("Veuillez rentrer l'entier numero 1 : "))
    y = int(input("Veuillez rentrer l'entier numero 2 : "))
    
    with open("BDD.bin", "wb") as file:
        file.write(x.to_bytes(4, 'big'))
        file.write(y.to_bytes(4, 'big'))
    
    with open("BDD.bin", "rb") as file:
        x_bin = int.from_bytes(file.read(4), 'big')
        y_bin = int.from_bytes(file.read(4), 'big')

    with open("BDD.txt", "w") as file:
        file.write(str(x) + "\n")
        file.write(str(y) + "\n")
    
    with open("BDD.txt", "r") as file:
        x_txt = int(file.readline().strip())
        y_txt = int(file.readline().strip())

    file.close()
    print(f"""
    Donnees dans BDD.bin : {x_bin} | {y_bin}
    Donnees dans BDD.txt : {x_txt} | {y_txt}
    """)