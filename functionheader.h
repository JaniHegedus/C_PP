//
// Created by heged on 2022. 06. 09..
//

#include <iostream>

#ifndef C_PP_FUNCTIONHEADER_H
#define C_PP_FUNCTIONHEADER_H

using namespace std;

void newfunction(int arg)
{
    int info = arg;
    cout << "Inf�:" << info << endl << "Input: ";
    cin >> info;
    cout << "�j inf�:" << info << endl;
}
int calculator(string data)
{
    return data.length();
}

string responder(int honap)
{
    string answer = "";
    switch (honap)
    {
        case 1: case 2: case 12: answer = "T�l"; break;
        case 3: case 4: case 5: answer = "Tavasz"; break;
        case 6: case 7: case 8: answer = "Ny�r"; break;
        case 9: case 10: case 11: answer = "�sz"; break;
        default: answer="Invalid"; break;
    }
    return answer;
}
int numkarakter(string s)
{
    int db=0;
    for(char c: s)
    {
        if(c>='0'&&c<='9')
        {
            db++;
        }
    }
    return db;
}

#endif //C_PP_FUNCTIONHEADER_H
