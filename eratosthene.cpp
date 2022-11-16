// -----------------------------------------------------------------------------------------------
// Fichier        : eratosthene.cpp
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-16
// But            : Fonctions responsables pour le calcule de la crible erathosthene
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// -----------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

/**
 * @name eratosthene
 *
 * Utilise l'algorithme du crible d'Ératosthène pour calculer les nombres premiers.
 * Créer un vecteur de booléens indiquant si le nombre à chaque position dans le vecteur
 * est un nombre premier de 0 -> taille - 1
 *
 * @param taille la taille du tableau de crible retournée
 * @return un vecteur de booléens, true si le nombre est un nombre premier, sinon false
 *
 * Algorithme repris de : https://fr.wikipedia.org/wiki/Crible_d%27%C3%89ratosth%C3%A8ne
 */
vector<bool> eratosthene(size_t taille) {
   vector<bool> tableauCrible = vector<bool>(taille, true);

   // Toutes les valeurs paires à false.
   // L'itération débute à partir de la valeur 4, les valeurs inférieures étant gérées après.
   for (size_t i = 4; i < taille; i += 2) {
      tableauCrible.at(i) = false;
   }

   // Gestion des valeurs 0 et 1.
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


/**
 * @name listeNombresPremiers
 * @brief
 * @param tableauCrible
 * @return
 */
vector<int> listeNombresPremiers(const vector<bool>& tableauCrible) {
   vector<int> tableauNbPremier = vector<int>();

   for (size_t i = 0; i < tableauCrible.size(); ++i){
      if (tableauCrible.at(i)){
         tableauNbPremier.push_back(i);
      }
   }

   return tableauNbPremier;
}
