#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int n;
	cin >> n;
	
	bool flag = true;
	
	for(int i = 2; i < sqrt(n); i++)
	{
	    if(n % i == 0){
	        cout << "It's not a Prime Number.";
	        flag = false;
	        break;
	    }
	}
	
	if(flag == true)
	    cout << "It's a prime Number.";
	    
	return 0;
}
