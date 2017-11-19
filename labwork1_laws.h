#ifndef LABWORK1_LAWS_H
#define LABWORK1_LAWS_H

#include <QVector>

class LabWork1_Laws {

public:
    LabWork1_Laws();
    double random();
    double random_2();
    double genE();
    double genL();
    double genEE();

    QVector<double> rnd_main();
    QVector<double> rnd_main_2();
};

#endif // LABWORK1_LAWS_H
