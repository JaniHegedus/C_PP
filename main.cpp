// Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include <locale.h>

#include "functionheader.h"
#include "ember.h"
#include "rec.h"
#include "date.h"
#include "point.h"

#define MAX_X 1024
#define MAX_Y 768

using namespace std;

int main() {

    setlocale(LC_ALL, "hun");
    

    printf("Hell� Vil�g!\n");
    newfunction(2);
    cout << "Calculated length:" << calculator("Hell� Vil�g!");
    point p1, p2;
    p1.setx(100);
    p1.sety(200);
    p2.setx(500);
    p2.sety(300);
    cout << p1.getx() << "  - " << p1.gety() << endl;
    cout << p2.getx() << "  - " << p2.gety() << endl;
    int honap=2;
    cout <<honap<<". h�nap "<< responder(honap)<<"i h�nap!"<<endl;
    string sor="Ebben a sorban 1 sz�m van.";
    cout<<sor<<" Sz�mok sz�ma: "<<numkarakter(sor)<<endl;
}

