// -----------------------------------------------------------------------------------------------
// Fichier        : eratosthene.h
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-16
// But            : Fonctions responsables pour le calcule de la crible erathosthene
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// ----------------------------------------------------------------------------------------------

#ifndef LABO_CRIBLE_ERATOTSTHENE_ERATOSTHENE_H
#define LABO_CRIBLE_ERATOTSTHENE_ERATOSTHENE_H

#include <vector>

/**
 * @name eratosthene
 * @brief genere le tableau crible d erastothene
 * @param taille Le nombre d'éléments à considérer pour le calcul
 * @return vecteur de booléens
 */

std::vector<bool> eratosthene(size_t taille);

/**
 * @name listeNombresPremiers
 * @brief créer un vecteur de nombre premiers à partir d'un vecteur de booléens
 * @param tableauCrible vecteur de booléens
 * @return vecteur contenant la liste des nombres premiers
 */
std::vector<int> listeNombresPremiers(const std::vector<bool>& tableauCrible);

#endif //LABO_CRIBLE_ERATOTSTHENE_ERATOSTHENE_H
