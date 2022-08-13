#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
    int	count=0;
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++) {
	    cin>>a[i];
	}
	for (int i = 0; i < n; i++) {
         int s=0, p=1;
         for (int j = i; j < n; j++) {
           s=s+a[j];
           p=p*a[j];
           if(s==p)
           count++;
         }
	}
	cout<<count<<endl;
	}
	return 0;
}

