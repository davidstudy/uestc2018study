#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <map>

using namespace std;

void  IsLikeWords()
{
    string oristr;
    cin >> oristr ;
    int len = oristr.size();
    for(int i=1 ; i<len ; i++)
    {
        if(oristr[i-1] == oristr[i])
        {
            cout << "Dislikes" <<endl;
            return ;
        }
    }
    map<char,int>  mp;
    int x;
    int k;
    for(int j=0 ; j<len ; j++)
    {
        if( mp[oristr[j]] == 1) //出现过一次后
        {
            x = j;
            for( k=j+1 ; k<len ;k++)
            {
                 if( mp[oristr[k]] >= 2)//出现过两次后
                 {
                     if(oristr[x+1] == oristr[k+1])
                         {
                            cout << "Dislikes" <<endl;
                            return ;
                         }
                     continue;
                 }
                 mp[oristr[k]]++;
            }
            if(k == len)
               break;
        }
        mp[oristr[j]] ++;
    }
    cout << "Likes" <<endl;
}












/*
int main()
{
    return 0;
}
*/
