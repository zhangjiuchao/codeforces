#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int h1,h2;
    cin>>h1>>h2;
    int a,b;
    cin>>a>>b;

    if(8*a >= h2-h1){
            cout<<0<<endl;
            return 0;
    }
    if(a<=b){
        cout<<-1<<endl;
        return 0;
    }
    int days=1;
    h1=h1+8*a-12*b;
    while(1){
        h1+=12*a;
        if(h1>=h2){
            cout<<days<<endl;
            return 0;
        }
        days++;
        h1-=12*b;
    }
    return 0;
}
