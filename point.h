

#ifndef C_PP_POINT_H
#define C_PP_POINT_H

#define MAX_X 1024
#define MAX_Y 768

using namespace std;

class point
{
    int x;
    int y;
public:
    int setx(int adat);
    int sety(int adat);
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};

int point::setx(int adat)
{
    if (adat >= 0 && adat < MAX_X)
    {
        x = adat;
        return 0;
    }
    return -1;
}
int point::sety(int adat)
{
    if (adat >= 0 && adat < MAX_Y)
    {
        y = adat;
        return 0;
    }
    return -1;
}




#endif //C_PP_POINT_H
