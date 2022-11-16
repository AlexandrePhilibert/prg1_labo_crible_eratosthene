// -----------------------------------------------------------------------------------------------
// Fichier        : saisie.cpp
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-16
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
 *  @name saisie
 *  @brief Affiche un message de bienvenue et vérifie si la saisie utilisateur est comprise
 *         entre min et max. Retourne la valeur saisie par l'utilisateur si celle-ci
 *         est correcte, autrement affiche un message d'erreur.
 *  @param msgInvite message de bienvenue
 *  @param msgErreur message d'erreur (la saisie est en dehors de l'intervalle [min, max])
 *  @param min valeur minimum autorisée
 *  @param max valeur maximum autorisée
 *  @return la valeur saisie
 *
 *  Repris de la démo : https://github.com/gmbreguet/PRG1_DEMO/blob/40f1ef41f8f2ee1d8c1a1c7fc1cc562b88e620c8/04_Fonctions/04_nbreJoursMois.cpp#L45
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