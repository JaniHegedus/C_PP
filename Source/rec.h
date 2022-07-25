
#include <iostream>

#ifndef C_PP_REC_H
#define C_PP_REC_H

using namespace std;

struct rec
{
    int szam;
    rec* kovetkezo;
};

void helyfoglalasos()
{
    int adat; rec* uj, * elso = NULL, * aktualis;
    printf("Kérek egy számot: "); scanf_s("%d", &adat);
    while (adat)
    {
        uj = (rec*)malloc(sizeof(rec)); //T pusk nyszer t s, helyfoglal s
        if (!uj)
        {
            // Ha nincs c m (NULL), akkor nem siker lt a helyfoglal s
            printf("Nincs elég memória \n");
            system("pause");
        }
        uj->szam = adat;
        uj->kovetkezo = NULL;
        if (!elso) elso = uj;//Ha legelso elem
        else aktualis->kovetkezo = uj;
        aktualis = uj;
        printf("Kerek egy számot: "); scanf_s("%d", &adat);
    } //Adatki r s
    aktualis = elso;//Ez elso elem c me
    while (aktualis)
    {
        //A lista v g n NULL
        printf("%d\n", aktualis->szam);
        aktualis = aktualis->kovetkezo;
    }
}
void helykereses()
{
    int adat;
    rec* uj, * elso = NULL, * elozo, * aktualis;
    printf("Kerek egy számot: "); scanf_s("%d", &adat);
    while (adat)
    {
        uj = (rec*)malloc(sizeof(rec));
        if (!uj)
        {
            printf("Nincs elég   memória\n");   system("pause");
        }
        uj->szam = adat;
        elozo = NULL;
        aktualis = elso;
        while (aktualis && adat > aktualis->szam)
        {
            //Az  j  rt k hely nek megkeres se
            elozo = aktualis;
            aktualis = aktualis->kovetkezo;
        }
        if (!elozo) elso = uj;//Ha a lista elso eleme
        else elozo->kovetkezo = uj;
        uj->kovetkezo = aktualis;
        printf("Kerek egy számot: "); scanf_s("%d", &adat);
    } //Adatki r s
    aktualis = elso;
    while (aktualis)
    {
        printf("%d\n", aktualis->szam);
        aktualis = aktualis->kovetkezo;
    }
}
void rendezett_feltoltes()
{
    int adat;
    rec* uj, * elso = NULL, * elozo, * aktualis;//Rendezett felt lt s
    printf("Kerek egy számot: "); scanf_s("%d", &adat);
    while (adat)
    {
        uj = (rec*)malloc(sizeof(rec));
        if (!uj)
        {	//Ellenorz s
            printf("Nincs elég   memória\n");
            system("pause");
        }
        uj->szam = adat;
        elozo = NULL;
        aktualis = elso;
        while (aktualis && adat > aktualis->szam)
        {
            elozo = aktualis;
            aktualis = aktualis->kovetkezo;
        }
        if (!elozo) elso = uj;
        else elozo->kovetkezo = uj;
        uj->kovetkezo = aktualis;
        printf("Kerek egy számot: "); scanf_s("%d", &adat);
    } // Lista ki r s
    aktualis = elso;
    while (aktualis)
    {
        printf("%d\n", aktualis->szam);
        aktualis = aktualis->kovetkezo;
    }
    // Egy elem t rl se
    printf("K rem a törlend? azonosítót: ");
    scanf_s("%d", &adat);
    aktualis = elso;
    elozo = NULL;
    while (aktualis)
    {//Keres s a list ban
        if (adat == aktualis->szam)break;
        elozo = aktualis;
        aktualis = aktualis->kovetkezo;
    }
    if (!aktualis) printf("A keresett elem nem található   \n");
    else
    {//Megvan a keresett elem
        if (!elozo) elso = aktualis->kovetkezo; //Ha az elso elemet t r lt k
        else elozo->kovetkezo = aktualis->kovetkezo;
        free(aktualis);//A    t r   lt elem hely nek felszabad t sa
    } //  Az  j lista ki r s
    aktualis = elso;
    while (aktualis)
    {
        printf("%d\n", aktualis->szam);
        aktualis = aktualis->kovetkezo;
    }
}



#endif //C_PP_REC_H
