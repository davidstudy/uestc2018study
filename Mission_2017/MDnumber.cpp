#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//体重 分子分母题

void LoseWeight()
{
    int n,w;
    cin >> n >> w;
    int a,b,p,q;
    vector< vector<int> > vec(n);
    for(int i1=0 ; i1<n ; i1++)
        vec[i1].resize(4);
    int j=0;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a >> b >> p >> q;
        vec[j][0] = a;
        vec[j][1] = b;
        vec[j][2] = p;
        vec[j][3] = q;
        j++;
    }
    int total_y = 1;
    for(int i=0 ; i<n ;i++)
    {
        total_y *= vec[i][3];
    }
    int total_x = 0;
    int x_tmp = 0;
    for(int j=0 ; j<n ; j++)
    {
        x_tmp = (-vec[j][0]*(vec[j][2]*(total_y/vec[j][3])))+
               (vec[j][1]*((vec[j][3]-vec[j][2])*(total_y/vec[j][3])));
        total_x += x_tmp;
    }
    //总分子 总分母操作
    int winteg = (int)total_x/total_y;
    int last_x =(int)( total_x - winteg*total_y);//剩余分子大小
    int dif_tmp = 1;
    vector<int> diff;
    for(int i8=0 ; i8<n ; i8++)
    {
        diff.push_back(vec[i8][3]);
    }
    sort(diff.begin(),diff.end());
    for(int k1=n-1 ; k1>=0 ; k1--)
    {
        if(!(last_x%diff[k1]))
        {
            dif_tmp *= diff[k1];
            last_x /= diff[k1];
        }
    }
    int last_y = total_y/dif_tmp;
    cout << w+winteg << '+' << last_x << '/' << last_y <<endl;
}

/*
int main()
{
    return 0;
}
*/
