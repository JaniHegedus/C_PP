
#include <iostream>

#ifndef C_PP_DATE_H
#define C_PP_DATE_H

using namespace std;

struct date
{
    int day;
    char month[10];
    int year;
};

void feltolt(struct date*);
void feltolt(struct date* f)
{
    printf("�v:\t");
    scanf_s("%d", &f->year);
    printf("h�nap:\t");
    scanf_s("%s", f->month);
    printf("nap:\t");
    scanf_s("%d", &f->day);
}
void feltolto0()
{
    date d;
    printf("�v:\t");
    scanf_s(" %d", &d.year);
    printf("h�nap:\t");
    scanf_s("%s", &d.month);
    printf("nap:\t");
    scanf_s("%d", &d.day);
    printf("\n%d    - %s   - %d\n", d.year, d.month, d.day);
}
void feltolto1()
{
    date d;
    feltolt(&d);
    printf("\n%d    - %s   - %d\n", d.year, d.month, d.day);
}

int feltolto3(struct date*);

void for_feltolto()
{
    struct date tomb[10];
    int n, i;
    n = feltolto3(tomb);
    for (i = 0; i < n; i++)printf("\n%d - %s   - %d\n", tomb[i].year, tomb[i].month, tomb[i].day);
}

int feltolto3(struct date* f)
{
    int db = 0; printf("k rem az �vet: "); scanf_s("%d", &f->year);
    while (f->year)
    {
        printf("k�rem a h�napot: ");
        scanf_s("%s", f->month);
        printf("k�rem a napot: ");
        scanf_s("%d", &f->day);
        db++;
        f++;
        printf("k�rem az �vet: ");
        scanf_s("%d", &f->year);
    }
    return db;
}

#endif //C_PP_DATE_H
