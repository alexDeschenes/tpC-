//
// Created by Jean-Philippe Poulin de Courval on 2017-02-16.
//

#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "random.h"

double randomDouble(double min, double max, int decimal) {

    static bool initialized = false;

    if(!initialized) {
        srand (time(NULL));
        initialized = true;
    }

    if (max <= min)
        throw "Limites invalides.";

    double nonTruncatedValue = min + (double) (rand()) / (RAND_MAX/(max - min));
    return (int)round(nonTruncatedValue * pow(10, decimal)) / pow(10, decimal);
}
