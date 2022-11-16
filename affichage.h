// -----------------------------------------------------------------------------------------------
// Fichier        : affichage.h
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-16
// But            : Fonctions responsables pour l'affichage
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// ----------------------------------------------------------------------------------------------

#ifndef LABO_CRIBLE_ERATOTSTHENE_AFFICHAGE_H
#define LABO_CRIBLE_ERATOTSTHENE_AFFICHAGE_H

#include <vector>

/**
 * Nombre d'éléments à afficher sur une ligne lors de l'affichage d'un tableau
 * Affiche le tableau sur une ligne lorsque NOMBRE_COLONNES = 0
 */
const int NOMBRE_COLONNES = 0;
/**
 * Le caractère à afficher par défaut en lieu et place d'un booléen `true`
 */
const char CHAR_VRAI = 'x';
/**
 * Le caractère à afficher par défaut en lieu et place d'un booléen `false`
 */
const char CHAR_FAUX = 'o';

/**
 * @name
 * @brief
 * @param vecteur
 * @param nombreColonnes
 * @return NIL
 */
void afficher(const std::vector<int>& vecteur, int nombreColonnes = NOMBRE_COLONNES);

/**
 * @name afficher
 * @brief
 * @param vecteur
 * @param charVrai
 * @param charFaux
 * @param nombreColonnes
 * @return NIL
 */
void afficher(const std::vector<bool>& vecteur,
              char charVrai = CHAR_VRAI,
              char charFaux = CHAR_FAUX,
              int nombreColonnes = NOMBRE_COLONNES);

#endif //LABO_CRIBLE_ERATOTSTHENE_AFFICHAGE_H
