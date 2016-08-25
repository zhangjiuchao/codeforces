#include<bits/stdc++.h>
using namespace std;
vector<int> a;
vector<int> b;
int main()
{
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;++i){
        cin>>num;
        if(num)
            a.push_back(num);
    }
    for(int i=0;i<n;++i){
        cin>>num;
        if(num)
            b.push_back(num);
    }
    int i=0;
    for(;a[i]!=b[0];++i);

    int len=b.size();
    for(int j=0;j<len;++j){
        if(a[i]!=b[j]){
            cout<<"NO";
            return 0;
        }
        i=(i+1)%len;
    }
    cout<<"YES"<<endl;
    return 0;
}
