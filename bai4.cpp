#include <iostream>
using namespace std;

int main(){
    long long ans=0;
    int ix,jx,k;
    cin >> ix >> jx >> k;
    for (int i=ix;i<=ix+k-1;i++){
        for (int j=jx;j<=jx+k-1;j++){
            long long tmp=i*j;
            tmp%=20192020;
            ans+=tmp;
            ans%=20192020;
        }
    }
    cout << ans;
}
