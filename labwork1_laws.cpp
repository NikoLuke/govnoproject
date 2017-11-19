#include "labwork1_laws.h"
#include <QDebug>
#include <ctime>
#include <iostream>

LabWork1_Laws::LabWork1_Laws() {

}

double LabWork1_Laws::random() {
    return (double) (rand() % 1000) / 1000;
}

//double LabWork1_Laws::random_2() {
//    return (double) (rand() % 100) / 1000000;
//}

double LabWork1_Laws::genE() {
    double a[5];
    for (int i = 0; i < 5; i++) {
        a[i] = random();
        //cout << "a = " << a[i] << endl;
    }
    double e = a[3];
    //cout << "e = " << e << endl;
    return e;
}

double LabWork1_Laws::genEE() {
    double a[5];
    for (int i = 0; i < 5; i++) {
        a[i] = random();
        //cout << "a = " << a[i] << endl;
    }
    double e = a[2];
    //cout << "e = " << e << endl;
    return e;
}

//double LabWork1_Laws::genL() {
//    double b[5];
//    for (int i = 0; i < 5; i++) {
//        b[i] = random_2();
//        //cout << "b = " << b[i] << endl;
//    }
//    double l = b[3];
//    //cout << "l = " << l << endl;
//    return l;
//}

QVector<double> LabWork1_Laws::rnd_main() {
    //временные промежутки
    double T = 11000;
    double dt = (T/12);
    double array[13];
    int k = 0;
    for (double j = 0; j <= T; j = j + dt) {
        array[k] = j;
        //cout << array[k] << endl;
        k++;
    }

    double t;
    QVector<double> count(13);
    for(int k = 0; k < count.size(); k++) {
        count[k] = 0;
    }

    srand(time(NULL));
    for (int j = 0; j < 100; j++) {
        t = - ( 1 / 0.0003 ) * log ( genE() );
        t = uint64_t(t) % 11000;
        for (int i = 0; i <= 12; i++) {
            if (i == 12) break;
            if ( t >= array[i]  &&  t <= array[i + 1] ) {
                count[i + 1] = count[i + 1] + 1;           
                break;
            }
        }
    }

    for (int i = 1; i <= 12; i++) {
//        qDebug() << count[i];
    }

    return count;
}

QVector<double> LabWork1_Laws::rnd_main_2() {
    //временные промежутки
    double T = 11000;
    double dt = (T/12);
    double array[13];
    int k = 0;
    for (double j = 0; j <= T; j = j + dt) {
        array[k] = j;
        //cout << array[k] << endl;
        k++;
    }

    double t;
    QVector<double> count(13);
    for(int k = 0; k < count.size(); k++) {
        count[k] = 0;
    }

    srand(time(NULL));
    for (int j = 0; j < 100; j++) {
        t = - ( 1 / 0.0003 ) * log ( genEE() );
        t = uint64_t(t) % 11000;
        for (int i = 0; i <= 12; i++) {
            if (i == 12) break;
            if ( t >= array[i]  &&  t <= array[i + 1] ) {
                count[i + 1] = count[i + 1] + 1;
                break;
            }
        }
    }

    for (int i = 1; i <= 12; i++) {
//        qDebug() << count[i];
    }

    return count;
}



