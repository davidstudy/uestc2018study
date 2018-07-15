#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<int> vec;
void FindSNumber(int n)
{
    int h = sqrt(n);
    int j;
    for(int i=3 ; i<=n ; i++)
    {
        for( j=2 ; j<h ; j++)
        {
            if(!(i%j))//Õû³ý
                break;
        }
        if(j>=h)
        {
            vec.push_back(i);
        }
    }
}

void SNumber()
{
    int n ;
    cin >> n ;
    FindSNumber(n);
    int len = vec.size();
    int sum = n;
    vector<int> tmp;
    vector< vector<int> > ans;
    for(int i=0 ; i<len ; i++)
    {
         for(int j=0 ; j<len ; j++)
         {
             if(sum == vec[i]+vec[j])
             {
                tmp.push_back(vec[i]);
                tmp.push_back(vec[j]);
             }
         }
         if(tmp.size()>0)
                ans.push_back(tmp);
         tmp.clear();
    }
    int answer = ans.size();
    cout << answer <<endl;
}

/*
int main()
{
    Fibonacci_Array();
}
*/
