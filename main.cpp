// Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include "functionheader.h"
#include "ember.h"
#include "rec.h"
#include "date.h"
#include "point.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "hun");
    

    printf("Helló Világ!\n");
    newfunction(2);
    cout << "Calculated length:" << calculator("Helló Világ!");
    point p1, p2;
    p1.setx(100);
    p1.sety(200);
    p2.setx(500);
    p2.sety(300);
    cout << p1.getx() << "  - " << p1.gety() << endl;
    cout << p2.getx() << "  - " << p2.gety() << endl;
    int honap=2;
    cout <<honap<<". hónap "<< responder(honap)<<"i hónap!"<<endl;
    string sor="Ebben a sorban 1 szám van.";
    cout<<sor<<" Számok száma: "<<numkarakter(sor)<<endl;
}

