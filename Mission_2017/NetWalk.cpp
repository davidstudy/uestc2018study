#include <iostream>
#include <vector>
using namespace std;

int cnt = 0 ;
int x1,y1 ;

int walk(int x,int y )
{
    if(x ==0 || y==0)
        return 1;
    return walk(x-1,y)+walk(x,y-1);
}

int NetWalk()
{
    cin >> x1 >> y1 ;
    cnt = walk(x1,y1);
    cout << cnt <<endl;
    return 0;
}
