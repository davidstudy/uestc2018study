#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void Fibonacci_Array()
{
   int a ;
   cin >> a;
   int i0 = 0 ;
   int i1 = 1;
   vector<int> vec;
   vec.push_back(i0);
   vec.push_back(i1);
   for(int i=2 ; i<50 ; i++)
   {
       int x = vec[i-1] + vec[i-2];
       vec.push_back(x);
       if(x>1000000 || x>a)
          break;
   }
   int len = vec.size();
   int p=abs(vec[len-1]-a);
   int q=abs(vec[len-2]-a);
   if(p>q)
     cout << q <<endl;
   else
     cout << p <<endl;
}

/*
int main()
{
    Fibonacci_Array();
}
*/
