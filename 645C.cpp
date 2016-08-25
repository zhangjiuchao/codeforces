#include<bits/stdc++.h>
using namespace std;

const int MAXL=100000;
string room;

int find_lenth(int i,int j)
{
    int m,n;
    int temp=i+j;
    if(temp%2==0){
        m=temp/2;
        n=m;
    }
    else{
        m=temp/2;
        n=m+1;
    }

    bool flag1=true;
    bool flag2=true;
    while(flag1 && flag2){
        if(room[m]=='0')
            flag1=false;
        else
            --m;

        if(room[n]=='0')
            flag2=false;
        else
            ++n;
    }
    if(!flag1 && !flag2)
        return (j-m)>(n-i)?j-m:n-i;
    else if(!flag1)
        return j-m;
    else
        return n-i;
}

int main()
{
    int N,k;
    cin>>N>>k>>room;

    int i;
    for(i=0;i<N && room[i]=='1';++i);

    int start=i;
    int cur=1;
    int mindis=MAXL;
    ++i;
    for(;i<N;++i){
        if(room[i]=='0'){
            ++cur;
            if(cur==k+1){
                int dis=find_lenth(start,i);
                mindis=mindis>dis?dis:mindis;
                --cur;
                ++start;
                for(;start<N && room[start]=='1';++start);
            }
        }
    }

    cout<<mindis<<endl;
    return 0;
}
