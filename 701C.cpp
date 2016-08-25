#include<iostream>
#include<cstdio>
using namespace std;

char flats[100005];
int n;
int times[58]={0};
int nType=0;
int main(void)
{
    cin>>n;
    char type;
    for(int i=0;i<n;++i){
        cin>>type;
        flats[i]=type;
        if(times[type-65] == 0){
            times[type-65]=1;
            nType++;
        }
    }


    int start=0;
    int len=100005;
    while(start<n-nType+1){
       int h[58]={0};
       h[flats[start]-65]=1;
       int t=1;
       int e=start+1;
       while(e<n && t<nType){
            if(flats[e] == flats[start])
                start++;
            else if(h[flats[e]-65] == 0){
                t++;
                h[flats[e]-65]=1;
            }
            ++e;
       }
       if(t==nType && e-start<len){
            len=e-start;
       }
       ++start;
    }

    cout<<len;
    return 0;
}
