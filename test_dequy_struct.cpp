#include<iostream>
using namespace std;
struct da_thuc{
	float  a, b, c, d;
	da_thuc tong(da_thuc k){
		da_thuc tong;
		tong.a = this->a + 1 + (1/k.a);
		return tong;
	}
	void nhap(){
		cin >> a;//++
	}
	void xuat(){
		cout << a;//++
	}
};
int main(){
	da_thuc dt1,dt2,dt3;
	dt1.nhap();
	dt2.nhap();
	dt3 = dt1.tong(dt2);
	dt3.xuat();
	return 0;
}