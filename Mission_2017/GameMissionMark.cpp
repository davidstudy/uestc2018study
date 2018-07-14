#include <iostream>
#include "GameMissionMark.h"
using namespace std;

void GameMissionMark()
{
    int a,b;
    unsigned int flag[1025] ={0};
    bool mark = false;
    cin >> a >> b;
    for(int i=1 ; i<=1024 ;i++)
    {
        if(a == i)
        {
            flag[i] = 1;
            mark = true ;
        }
    }
    if(!mark || b>1024)
        cout << -1 <<endl;
    else{
        if(flag[b]==1)
        cout << 1 <<endl;
        else
        cout << 0 <<endl;
    }
}
