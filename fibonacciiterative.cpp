#include <iostream>
using namespace std;

int main(){
	int n,n1=0,n2=1,n3,i;
	//n1=0;
	//n2=1;
	cout << "Enter the number of elements of the array:-" << endl;
	cin >> n;
	cout << n1 << endl;
	cout << n2 << endl;
	for(i=2; i<=n; ++i){
		//cin >> n3;
		n3 = n1+n2;
		cout << n3 << endl;
		n1 = n2;
		n2 = n3;
	}
	return 0;
}
