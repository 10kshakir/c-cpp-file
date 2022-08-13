#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int ar[n];

        for (int i = 0; i < n; ++i) {
            cin>>ar[i];

        }
        sort(ar,ar+n);
        int c = 0;
        for (int i = 1; i < n; ++i) {
            if (ar[i]>ar[0]){
                c++;
            }
        }
        cout<<c<<endl;
    }

}
