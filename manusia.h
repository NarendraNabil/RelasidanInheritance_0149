#include <string>
#include <iostream>
using namespace std;
#ifndef MANUSIA_H
#define MANUSIA_H
#include "jantung.h"

class manusia{
public:
    string name;
    jantung varJantung;

    manusia(string pName) : name(pName) {
        cout << name << " hidup\n";
    }
    ~manusia() {
        cout << name << " mati\n";
    }
};
#endif