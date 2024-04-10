#include<iostream>
using namespace std;
struct da_thuc{
	int  a, b, c, d;
	da_thuc tong(da_thuc k){
		da_thuc tong;
		tong.a = this->a + k.a;
		tong.b = this->b + k.b;
		tong.c = this->c + k.c;
		tong.d = this->d + k.d;
		return tong;
	}
	void nhap(){
		cin >> a >> b >> c >> d;//++
	}
	void xuat(){
		cout << a << " / " << b << " / " << c << " / " << d;//++
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