#include<bits/stdc++.h>
using namespace std;

string b1,b2,e1,e2;

int main()
{
    cin>>b1>>b2>>e1>>e2;

    for(int i=1;i<=12;++i)
    {
        if(b1[0]=='X'){
            b1[0]=b1[1];
            b1[1]='X';
        }
        else if(b1[1]=='X'){
            b1[1]=b2[1];
            b2[1]='X';
        }
        else if(b2[1]=='X'){
            b2[1]=b2[0];
            b2[0]='X';
        }
        else if(b2[0]=='X'){
            b2[0]=b1[0];
            b1[0]='X';
        }

        if(b1==e1 && b2==e2){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
