#include <vector>
#include <iostream>
using namespace std;

int fx(int a)
{
    int tmp = 0;
    int num = a;
    while(num)
    {
        tmp += (num%10);
        num /= 10;
    }
    return tmp;
}

int gx(int x) //十进制转二进制，统计1的个数
{
    int result=0;
    while(x){
        result++;
        x &= (x - 1);
    }
    return result;
}

void FindLuckyNumber()
{
    int a;
    cin >> a;
    int LuckyNum = 0;
    for(int i=1 ; i<=a ; i++)
    {
       if(gx(i) == fx(i))
         LuckyNum++;
    }
    cout << LuckyNum <<endl;
}

/*
//十进制化成二进制
int main()
{
int x,i;
scanf("%d",&x);
int cnt=0;
int t = x;
while(t)
{
    cnt++;
    t /= 2;
}
for(i=cnt;i>=0;i--) printf("%d",x>>i&1);
system("pause");
}
*/



/*
int main()
{
    return 0;
}
*/
