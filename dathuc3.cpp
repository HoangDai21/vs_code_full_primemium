#include<iostream>
using namespace std;

class Dathuc{
    private:
        float a,b,c,d;
    public:
        Dathuc(float a = 0,float b = 0,float c = 0,float d = 0){
            this->a=a;
            this->b=b;
            this->c=c;
            this->d=d;
        } 
    void nhap(){
    cout << "nhap a: "; cin >> a;
    cout << "nhap b: "; cin >> b;
    cout << "nhap c: "; cin >> c;
    cout << "nhap d: "; cin >> d;
    }
    void xuat (){
        cout << a << "//" << b << "//" << c << "//" << d << endl;
    }
    Dathuc tong(Dathuc k){
		Dathuc tong;
		tong.a = this-> a + k.a;
		tong.b = this-> b + k.b;
		tong.c = this-> c + k.c;
		tong.d = this-> d + k.d;
		return tong;
	}
};
int main(){
    Dathuc dt1 ,dt2, dt3;
    dt1.nhap();
	dt2.nhap();
	dt3 = dt1.tong(dt2);
	dt3.xuat();
	return 0;
}