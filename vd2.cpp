#include <iostream>
using namespace std;
 
int main (){
	int n = 1;
	float tb = 1.0;
	float dem = 0;
	float tong = 0;
	float am = 0;
	while ( n != 0){
		dem ++;	
		cout << "moi nhap 1 so thuc: ";cin >> n;
		tong += n;
		if (n<0){
			am ++;

		}
	}
	
	tb =(float)tong/dem;
	cout << "so thuc la : "<<dem <<endl; 
	cout << "trung binh cong cua cac so da nhap la: "<<tb<<endl;
	cout << "co "<<am<<" phan tu am ";
	return 0;
}