#include <iostream>
using namespace std;

int main(){
	int n,i,flag = 0;
	cout << "Enter the Number" <<endl;
	cin >> n;
	for(i=2 ;i<=n/2 ;++i){
		if(n % i == 0){
			flag = 1;
			break;
		}
	}
	if(n == 0){
		printf("Neither prime nor composite");
	}
	else{
		if(flag == 0){
			printf("%d is Prime",n);
		}
		else{
			printf("%d is Not Prime",n);
		}
	}
	return 0;
}
