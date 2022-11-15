// -----------------------------------------------------------------------------------------------
// Fichier        : saisie.cpp
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-01
// But            : Fonctions responsables de toute la saisie utilisateur, gestion
// 					  du flux, répétition ou fin du programme.
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// -----------------------------------------------------------------------------------------------

#include <string>
#include <iostream>
#include <limits>

using namespace std;

/**
 *
 * @param msgInvite
 * @param msgErreur
 * @param min
 * @param max
 * @return la valeur saisie par l'utilisateur
 */
int saisie(const string& msgInvite,
           const string& msgErreur,
           const int min,
           const int max
) {
   int  saisie;
   bool erreur;

   do {
      // saisie et vérification
      cout << msgInvite << " [" << min << " - " << max << "] : ";
      erreur = not(cin >> saisie) or saisie < min or saisie > max;

      // gestion du flux
      if (erreur) {
         cout << msgErreur << endl;
         cin.clear();
      }

      // vider buffer
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while(erreur);

   return saisie;
}