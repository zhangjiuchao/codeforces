/****问题描述：
Limak is a little polar bear. He has n balls, the i-th ball has size ti.
Limak wants to give one ball to each of his three friends. Giving gifts isn't easy — there are two rules Limak must obey to make friends happy:

No two friends can get balls of the same size.
No two friends can get balls of sizes that differ by more than 2.


*****问题实质：判断给定数组中，是否含有三个连续的数
*/

#include<iostream>

using namespace std;

int size_balls[55]={0};
int hash_size[1005]={0};

int main()
{
    int n;
    cin>>n;

    int bsize;
    for(int i=1;i<=n;++i){
        cin>>bsize;
        size_balls[i]=bsize;
        hash_size[bsize]=1;
    }

    int cur=0;
    for(int i=1;i<=n;++i){
        cur=size_balls[i];
        if((hash_size[cur+1]==1) && (hash_size[cur+2]==1))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
