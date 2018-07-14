#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void helpYi()
{
  int num;
  cin >> num;
  int x;
  vector< vector <int> > vec;
  vector<int> tmp;
  for(int i = 0 ; i<2 ; i++)
  {
    for(int j=0 ; j<num ; j++)
    {
        cin >> x;
        tmp.push_back(x);
    }
    vec.push_back(tmp);
    tmp.clear();
  }
  vector<int> sum;
  for(int j=0 ; j<num ; j++)
  {
      sum.push_back(vec[0][j]+vec[1][j]);
  }
  sort(sum.begin(),sum.end());
  cout << sum[0]-2 <<endl;
}




/*
int main()
{

    return 0;
}
*/
