// -----------------------------------------------------------------------------------------------
// Fichier        : Labo_05_E.cpp
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-15
// But            :
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// -----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <vector>
#include "saisie.h"
#include "eratosthene.h"

using namespace std;

int main() {
   const string MSG_SAISIE = "nbre de valeurs";
   const string MSG_ERREUR = "/!\\ erreur de saisie ...";
   const int NOMBRE_VALEURS_MIN = 2;
   const int NOMBRE_VALEURS_MAX = 100;

   int nombreValeurs;

   // TODO: Message bienvenue

   nombreValeurs = saisie(
      MSG_SAISIE,
      MSG_ERREUR,
      NOMBRE_VALEURS_MIN,
      NOMBRE_VALEURS_MAX);

   vector<bool> tableauCrible = eratosthene(nombreValeurs);
   vector<int> listeNombrePremiers = listeNbPremier(tableauCrible);

   cout << "criblage du tableau" << endl;
   afficherTableauCrible(tableauCrible);
   cout << endl;

   // Affiche la liste des nombres premiers
   cout << "liste des nbres 1er" << endl;
   for (int nombre : listeNombrePremiers) {
      cout << nombre << " ";
   }
   cout << endl << endl;


   cout << "Pressez ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   return EXIT_SUCCESS;

}
