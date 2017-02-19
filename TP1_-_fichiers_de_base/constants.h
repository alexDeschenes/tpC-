//
// Created by Jean-Philippe Poulin de Courval on 2017-02-15.
//

#ifndef TP1_CONSTANTS_H
#define TP1_CONSTANTS_H

#include <string>

using namespace std;

const int FISHERMEN_COUNT = 4;
const int MAX_CATCHES_PER_TOURNAMENT_COUNT = 5;
const int TOURNAMENT_COUNT = 5;
const int CATCH_MIN_LENGTH = 5;
const int CATCH_MAX_LENGTH = 30;

/*
 * Structure des données:
 *      - Nom du tournoi
 *      - Difficulté du tournoi: integer de 1 à 5 où 5 correspond au plus facile, 1 le plus difficile
 */
const string tournamentsInfo[TOURNAMENT_COUNT][2] =
        {
                {"Tournoi du pêcheur fou",     "2"},
                {"Tournoi ammène ta femme",    "1"},
                {"Tournoi des vieux garçons",  "3"},
                {"Tournoi des menteurs",       "5"},
                {"Tournoi du verre l'a mangé", "4"}
        };

/*
 * Structure des données:
 *      - Nom du pêcheur
 *      - Âge
 *      - Sexe
 */
const string fishermenInfo[FISHERMEN_COUNT][3] =
        {
                {"Bob Gratton",      "56", "M"},
                {"Yvan Des-Pontons", "70", "M"},
                {"Jean Meurdesoif",  "36", "M"},
                {"Agathe Powa",      "32", "F"}
        };

#endif //TP1_CONSTANTS_H
