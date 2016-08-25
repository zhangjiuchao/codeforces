#include<iostream>
using namespace std;

const int MAX_SIZE=300005;

int a[300005];

int main()
{
    int N,k;
    cin>>N>>k;
    for(int i=0;i<N;++i) cin>>a[i];
    int left=0,right=0;

    int start=0;
    for(int i=0;i<N;++i){
        if(a[i]==0){
            if(k>0){
                k--;
            }
            else{
                if((i-start) > (right-left)){
                    left=start;
                    right=i;
                }
                while(a[start])
                    ++start;
                ++start;
            }
        }
    }
    if(N-start > right-left){
        left=start;
        right=N;
    }
    cout<<right-left<<endl;
    int i=0;
    for(;i<left;++i)
        cout<<a[i]<<" ";
    for(;i<right;++i){
        if(a[i] == 0)
            a[i]=1;
        cout<<a[i]<<" ";
    }
    for(;i<N;++i)
        cout<<a[i]<<" ";
    cout<<endl;
}
