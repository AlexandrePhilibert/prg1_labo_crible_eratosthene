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

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/**
 * Largeur du tableau criblé lors de l'affichage
 * Affiche le tableau sur une ligne lorsque LARGEUR_TABLEAU = 0
 */
const int LARGEUR_TABLEAU = 10;

/**
 * @name eratosthene
 * @brief
 * @param taille la taille du tableau de crible retournée
 * @return un vecteur de booléens, true si le nombre est un nombre premier, sinon false
 */
vector<bool> eratosthene(size_t taille) {
   vector<bool> tableauCrible = vector<bool>(taille, true);

   for (size_t i = 4; i < taille; i += 2) {
      tableauCrible.at(i) = false;
   }

   tableauCrible.at(0) = false;
   tableauCrible.at(1) = false;

   for (size_t i = 3; i * i <= taille; ++i) {
      if (tableauCrible.at(i)) {
         for (size_t j = i*i; j < taille; j+=i) {
            tableauCrible.at(j) = false;
         }
      }
   }

   return tableauCrible;
}


vector<int> listeNbPremier(vector<bool> tableauCrible) {
   vector<int> tableauNbPremier = vector<int>();

   for (size_t i = 0; i < tableauCrible.size(); ++i){
      if (tableauCrible.at(i)){
         tableauNbPremier.push_back(i);
      }

      // TODO: fonction d'affichage pour tableau (LARGEUR_TABLEAU = 0 nowrap)
   }

   return tableauNbPremier;
}

void afficherTableauCrible(vector<bool> tableauCrible) {
   for (size_t i = 0; i < tableauCrible.size(); ++i) {
      cout << setw(2) << (tableauCrible[i] ? 'x' : 'o');

      // TODO: Warning
      if (LARGEUR_TABLEAU != 0 && (i + 1) % LARGEUR_TABLEAU == 0) {
         cout << endl;
      }
   }
}
