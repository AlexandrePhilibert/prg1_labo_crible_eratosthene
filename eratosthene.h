// -----------------------------------------------------------------------------------------------
// Fichier        : eratosthene.h
// Auteur(s)      : Sonnard Nicolas & Philibert Alexandre
// Date           : 2022-11-20
// But            : Fonctions responsables pour le calcul des nombres premiers à l'aide de la
//                  méthode du crible d'Ératosthène
// Modifications  : NIL
// Remarque(s)    :
// Compilateur    : g++ 11.2.0
// Standard C++   : C++ 20
// ----------------------------------------------------------------------------------------------

#ifndef LABO_CRIBLE_ERATOSTHENE_ERATOSTHENE_H
#define LABO_CRIBLE_ERATOSTHENE_ERATOSTHENE_H

#include <vector>

/**
 * @name eratosthene
 * @brief créer un vecteur de booléens de 0 -> taille, avec chaque position contenant false
 *        si le nombre à cette position est un nombre premier.
 * @param taille Le nombre d'éléments à considérer pour le calcul
 * @return vecteur de booléens représentant les nombres premiers
 */

std::vector<bool> eratosthene(size_t taille);

/**
 * @name listeNombresPremiers
 * @brief créer un vecteur de nombre premiers à partir d'un vecteur de booléens
 * @param tableauCrible vecteur de booléens représentant les nombres premiers
 * @return vecteur contenant la liste des nombres premiers
 */
std::vector<int> listeNombresPremiers(const std::vector<bool>& tableauCrible);

#endif //LABO_CRIBLE_ERATOSTHENE_ERATOSTHENE_H
