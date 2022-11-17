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
const char CHAR_VRAI_DEFAUT = 'x';
/**
 * Le caractère à afficher par défaut en lieu et place d'un booléen `false`
 */
const char CHAR_FAUX_DEFAUT = 'o';

/**
 * @name afficher
 * @brief affiche un vecteur d'entiers sur un nombre de colonnes donné.
 * @param vecteur le vecteur d'entiers à afficher
 * @param nombreColonnes le nombre de colonnes sur le quel afficher les valeurs, si nombreColonnes = 0
 *                       affiche tout sur une ligne.
 * @return NIL
 */
void afficher(const std::vector<int>& vecteur, int nombreColonnes = NOMBRE_COLONNES);

/**
 * @name afficher
 * @brief affiche un vecteur de booléens sur un nombre de colonnes donné.
 *        remplace les valeurs booléennes par charVrai et charFaux respectivement
 * @param vecteur le vecteur à afficher
 * @param charVrai le caractère à afficher lorsque la valeur vaut true
 * @param charFaux le caractère à afficher lorsque la valeur vaut false
 * @param nombreColonnes le nombre de colonnes sur le quel afficher les valeurs, si nombreColonnes = 0
 *                       affiche tout sur une ligne.
 * @return NIL
 */
void afficher(const std::vector<bool>& vecteur,
              char charVrai = CHAR_VRAI_DEFAUT,
              char charFaux = CHAR_FAUX_DEFAUT,
              int nombreColonnes = NOMBRE_COLONNES);

#endif //LABO_CRIBLE_ERATOTSTHENE_AFFICHAGE_H
