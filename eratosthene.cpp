// -----------------------------------------------------------------------------------------------
// Fichier        : eratosthene.cpp
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-01
// But            : Fonctions responsables pour le calcule de la crible erathosthene
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// -----------------------------------------------------------------------------------------------

/* ALGO de wikipedia
 * Fonction Eratosthène(Limite)
    L = tableau de booléen de taille Limite, initialisé à Vrai
    L[1] = Faux
    i=2
    Tant que i*i≤Limite
        Si L[i]
            Pour j de i*i à Limite par pas de i
            on peut commencer à i*i car tous les multiples de i inférieurs à i*i ont déjà été rayés
                L[j] = Faux
            Fin pour
        Fin si
        i=i+1
    Fin tant que
    Retourner L
Fin fonction
 */
