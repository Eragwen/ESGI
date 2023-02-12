
def f(x):
    r = x*x
    return r

def calculSurface():
    """
    Calcul de l'integrale de la fonction y = x * x
    avec 3 <= x < 5 et p = 0.4, pour x dans [a,b]
    """
    a = int(input("Entrer a : "))
    b = int(input("Entrer b : "))
    p = float(input("Entrer p : "))
    print("""
    Calcul de l'integrale de la fonction y = x * x
    avec 3 <= x < 5 et p = 0.4, pour x dans [a,b] 
    """)

    s = a*a*p
    n = 1
    while (a + p * n < b):
        u0 = (a + p * n) * (a + p * n) * p
        s = u0 + s
        n = n + 1
    print("Resultat 1 : ",s)

    s = 0
    l = a
    while (l < b):
        s = l * l * p + s
        l = l + p
    print("Resultat 2 : ",s)

    s = 0
    l = b
    while (l - p >= a):
        s = p * (f(l) - f(l - p)) / 2 + s
        l = l - p
    print("Resultat 3 : ",s)
