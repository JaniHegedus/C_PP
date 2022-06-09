#include <iostream>
#include <stdio.h>
#include <locale.h>

#ifndef C_PP_EMBER_H
#define C_PP_EMBER_H


using namespace std;

struct ember
{
    char* nev;
    int eletkor;
    float testmagassag;
};

void feltoltt(struct ember*);
void feltoltt(struct ember* f)
{
    printf(" v:\t");
    scanf("%d", &f->nev);
    printf("h nap:\t");
    scanf("%s", f->eletkor);
    printf("nap:\t");
    scanf("%d", &f->testmagassag);
}



#endif //C_PP_EMBER_H
