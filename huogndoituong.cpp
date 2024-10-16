//lop va doi tuong

#include <iostream>
using namespace std;

class Hcn{
	private:
		float chieu_dai;
		float chieu_rong;
		float chu_vi;
		float dien_tich;
	public:
		void nhaptt();
		void xuattt();
		void tinh();
		Hcn(){
			chieu_dai = 999;
			chieu_rong = 666;
		}
		Hcn(float n, float m){
			chieu_dai = n;
			chieu_rong = m;
		}
};
void Hcn::nhaptt(){
	cout << "nhap chieu dai: ";
	cin >> chieu_dai;
  	cout << "nhap chieu rong: ";
	cin >> chieu_rong;
}
void Hcn::xuattt(){
	cout << "chieu dai la: "<<chieu_dai << endl;
	cout << "chieu rong la: "<<chieu_rong << endl;
}
void Hcn::tinh(){
	cout << "Chu vi la: " << 2* (chieu_dai + chieu_rong) <<endl;
	cout << "Dien tich la: "<< chieu_dai * chieu_rong<<endl; 
}
int main(){
	Hcn a(2,4);
	//a.nhaptt();
	a.xuattt();
	a.tinh();
	Hcn b;
	b.xuattt();
	b.tinh();
}