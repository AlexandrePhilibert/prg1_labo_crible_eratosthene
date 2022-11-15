// -----------------------------------------------------------------------------------------------
// Fichier        : eratosthene.h
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-01
// But            : Fonctions responsables pour le calcule de la crible erathosthene
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// -----------------------------------------------------------------------------------------------

#ifndef LABO_CRIBLE_ERATOTSTHENE_ERATOSTHENE_H
#define LABO_CRIBLE_ERATOTSTHENE_ERATOSTHENE_H

#include <vector>

/**
 *
 * @brief genere le tableau crible d erastothene
 * @param taille
 * @return tableau crible eratosthene
 */

std::vector<bool> eratosthene(size_t taille);


/**
 *
 * @brief genere une liste des nombres premiers
 * @param tableauCrible
 * @return vecteur nb premier
 */
std::vector<int> listeNbPremier(std::vector<bool> tableauCrible);


/**
 *
 * @brief affiche le tableau crible
 * @name afficherTableauCrible
 * @param tableauCrible (entrant)
 */
void afficherTableauCrible(std::vector<bool> tableauCrible);

#endif //LABO_CRIBLE_ERATOTSTHENE_ERATOSTHENE_H
