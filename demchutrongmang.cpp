#include <iostream>
using namespace std;
int main(){
	char i=1;
	int dem = 0; int dk = 0;
 
	while (i != '*')
		cin >> i;
		if (i != '*'){
			dem++;
		}
		if(i == 'k' || i == 'K'){
			dk ++;
		}
	cout << "so ki tu: "<<dem<<endl;
	cout << "so chu k: "<<dk<<endl;
}