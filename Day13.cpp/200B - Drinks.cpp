#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	long double res=0;
	for(int i=0;i<n;i++){
	    long double p;
	    cin>>p;
	    res+=p;
	}
	cout<<res/n;
	return 0;
}
