#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	do{
	    int x;
	    cin>>x;
	    x>=30?cout<<"YES"<<endl:cout<<"NO"<<endl;
	    t--;
	}while(t!=0);
	return 0;
}
