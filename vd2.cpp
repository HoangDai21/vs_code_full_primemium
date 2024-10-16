#include <iostream>
using namespace std;
class Sinhvien{
	private:
		char ten[25];
		int tuoi;

	public:
	friend void jj(Sinhvien &a);
		Sinhvien(){
			cout << "tnnnfnndnns"<<endl;
		}
		Sinhvien(char ten[25], int tuoi = 20){
			nhaptt();
		}
		void nhaptt(){
			cout << "nhap ten: ";
			cin.getline(ten ,25);
			cout << "nhap tuoi: ";
			cin >> tuoi;
		}	
		void xuattt(){
			cout << "ten la: " << ten << endl;
			cout << "tuoi la: " << tuoi << endl;
		}
	int get(){
		return this ->tuoi;
	}
	int set(int n){
		return this ->tuoi = n;
	}
};
void jj(Sinhvien &a){
	cin >> a.tuoi;
}

int main(){
	Sinhvien a;
 	a.nhaptt();
 	a.get();
	a.xuattt();
	jj(a);
}