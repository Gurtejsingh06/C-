#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
    
    int OrignalN = n;
	int sum = 0;
	while(n>0){
	    int last_digit = n % 10;
	    sum += pow(last_digit,3);
	    n /= 10; 
	}
	
	if(OrignalN == sum)
	    cout << "Armstrong Number" ;
	else
	    cout << "Not a Armstrong Number" ;
	return 0;
}
