#include <vector>
#include <string>
#include <iostream>

using namespace std;


void IDSort()
{
    string str;
    string str1 = "",str2 = "",str3 = "";

    while(getline(cin,str))
    {
        int cnt=0 ;
        int len = str.size();
        for(int i=0 ; i<len; i++)
        {
            if(str[i]!=' ')
            {
                ++cnt;
                cout<<str[i];
                if(i==len-1) break;
                if(cnt==6||cnt==14) cout<<" ";
            }
        }
        cout <<endl;
    }
}


void IDSort2()
{
    string str;
    while(getline(cin,str))
    {
       int len = str.size();
       if(len<=6)
           cout << str.substr(0,len)<<endl;
       else if(len<=14)
           cout << str.substr(0,6) << " " << str.substr(6,len-6) << endl;
       else if(len<=18)
            cout << str.substr(0,6) << " " << str.substr(6,8) << " " << str.substr(14,len) << endl;
    }
}


/*
int main()
{
    return 0;
}
*/
