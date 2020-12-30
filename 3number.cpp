#include <iostream>

int main(){
	float a,b,c;
	std::cin >> a >> b >> c;
	if(a>=b && a>=c){
		std::cout << "a is greater" << std::endl;
	}
	else if(b>=a && b>=c){
		std::cout << "b is greater" << std::endl;
	}
	else{
		std::cout << "c is greater" << std::endl;
	}
	return 0;
}
