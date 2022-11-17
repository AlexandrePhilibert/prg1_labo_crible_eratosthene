// -----------------------------------------------------------------------------------------------
// Fichier        : Labo_05_E.cpp
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-16
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
#include "affichage.h"

using namespace std;

int main() {
   const string MSG_SAISIE = "nbre de valeurs";
   const string MSG_ERREUR = "/!\\ erreur de saisie ...";
   const int NOMBRE_VALEURS_MIN = 2;
   const int NOMBRE_VALEURS_MAX = 100;
   const int NOMBRE_COLONNES_TABLEAU = 10;
   const char CHAR_VRAI = 'o';
   const char CHAR_FAUX = 'x';

   /**
    * Le nombre de valeurs à considérer pour le calcul des nombres premiers
    */
   int nombreValeurs;

   cout << "Ce programme utilise la méthode du crible d'Ératosthène "
        << "pour calculer les nombres premiers."
        << endl;

   nombreValeurs = saisie(
      MSG_SAISIE,
      MSG_ERREUR,
      NOMBRE_VALEURS_MIN,
      NOMBRE_VALEURS_MAX);

   // Calcul du tableau criblé et des nombres premiers
   vector<bool> tableauCrible = eratosthene(nombreValeurs);
   vector<int> nombresPremiers = listeNombresPremiers(tableauCrible);

   // Affiche le tableau criblé d'Ératosthène
   cout << "criblage du tableau" << endl;
   afficher(tableauCrible,CHAR_VRAI,CHAR_FAUX,NOMBRE_COLONNES_TABLEAU);
   cout << endl;

   // Affiche la liste des nombres premiers
   cout << "liste des nbres 1er" << endl;
   afficher(nombresPremiers, NOMBRE_COLONNES_TABLEAU);
   cout << endl << endl;

   cout << "Pressez ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   return EXIT_SUCCESS;
}
