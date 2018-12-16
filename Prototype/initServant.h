#ifndef INITSERVANT_H_
#define INITSERVANT_H_
#include "Servant.h"

Servant Saber("Saber", 0, 1, 1000, 1500);
Servant Lancer("Lancer", 1, 1, 800, 2000);
const Servant ConstServant("ConstServant", 2, 1, 200, 200);

Servant enemy[3] = {
    Servant("EN-A", 0, 2, 400, 3000),
    Servant("EN-B", 0, 3, 600, 5000),
    Servant("EN-C", 0, 1, 300, 2000)
};

#endif