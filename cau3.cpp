#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+5];
    vector<int>v;
    int mx=-1000000000;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    for (int i=n;i>=1;i--){
        if (a[i]>mx){
            mx=a[i];
            v.push_back(a[i]);
        }
    }
    cout << v.size() << endl;
    for (int i=v.size()-1;i>=0;i--){
        cout << v[i] << " ";
    }
}
