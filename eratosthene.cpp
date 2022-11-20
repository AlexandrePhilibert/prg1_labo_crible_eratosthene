// -----------------------------------------------------------------------------------------------
// Fichier        : eratosthene.cpp
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-20
// But            : Fonctions responsables pour le calcul du crible d'Ératosthène.
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// -----------------------------------------------------------------------------------------------

#include <vector>
#include <cmath>    // log

using namespace std;

/**
 * Utilise l'algorithme du crible d'Ératosthène pour calculer les nombres premiers.
 * Créer un vecteur de booléens indiquant si le nombre à chaque position dans le vecteur
 * est un nombre premier de 0 -> taille - 1
 *
 * Algorithme repris de : https://fr.wikipedia.org/wiki/Crible_d%27%C3%89ratosth%C3%A8ne
 */
vector<bool> eratosthene(size_t taille) {
   vector<bool> tableauCrible = vector<bool>(taille, true);

   // Tous les nombres pairs sont mis à false.
   // L'itération débute à partir de la valeur 4, les nombres inférieurs étant gérées après.
   for (size_t i = 4; i < taille; i += 2) {
      tableauCrible.at(i) = false;
   }

   // Gestion des nombres 0 et 1.
   tableauCrible.at(0) = false;
   tableauCrible.at(1) = false;

   // Débute la boucle à 3, les nombres inférieurs ayant été traitées
   for (size_t i = 3; i * i <= taille; ++i) {
      if (tableauCrible.at(i)) {
         // Les multiples de i inférieurs à i*i ont déjà été gérés.
         for (size_t j = i*i; j < taille; j+=i) {
            tableauCrible.at(j) = false;
         }
      }
   }

   return tableauCrible;
}

vector<int> listeNombresPremiers(const vector<bool>& tableauCrible) {
   // Approximation du nombre de nombres premiers
   // Repris de : https://en.wikipedia.org/wiki/Prime-counting_function
   const size_t TAILLE = tableauCrible.size() / (int) log(tableauCrible.size());

   vector<int> tableauNbPremier = vector<int>();
   tableauNbPremier.reserve(TAILLE);

   // Ajout des nombres premiers dans le vecteur
   for (size_t i = 0; i < tableauCrible.size(); ++i){
      if (tableauCrible.at(i)){
         tableauNbPremier.push_back((int) i);
      }
   }

   return tableauNbPremier;
}
