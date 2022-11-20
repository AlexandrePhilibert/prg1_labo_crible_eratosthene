// -----------------------------------------------------------------------------------------------
// Fichier        : affichage.cpp
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-20
// But            : Fonctions responsables pour l'affichage des valeurs d'un vecteur de booléens
//                  ou d'entiers.
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// -----------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

/**
 * largeur d'une cellule lors de l'affichage dans un tableau
 */
const int LARGEUR_CELLULE = 2;

void afficher(const vector<int>& vecteur, int nombreColonnes) {
   for (size_t i = 0; i < vecteur.size(); ++i) {
     cout << setw(LARGEUR_CELLULE) << vecteur[i] << " ";

     if (nombreColonnes != 0 && (i + 1) % nombreColonnes == 0) {
        cout << endl;
     }
   }
}

void afficher(const vector<bool>& vecteur, char charVrai, char charFaux, int nombreColonnes) {
   for (size_t i = 0; i < vecteur.size(); ++i) {
      cout << setw(LARGEUR_CELLULE) << (vecteur[i] ? charVrai: charFaux) << " ";

      if (nombreColonnes != 0 && (i + 1) % nombreColonnes == 0) {
         cout << endl;
      }
   }
}