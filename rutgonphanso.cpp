#include<iostream>
using namespace std;
float ucln(int a, int b){
        while(a != b){
            if ( a > b){
                a -= b;
            }
                b -= a;
    }
    return a;
}

struct da_thuc{
	int  a, b;
	da_thuc ps(da_thuc k){
		da_thuc ps;
		ps.a = this->a + k.a;
		ps.b = this->b + k.b;
		return ps.rutgon();
	}
	void nhap(){
		cin >> a >> b;//++
	}
	void xuat(){
		cout << a << " / " << b;//++
	}
    da_thuc rutgon(){
        da_thuc m;
        m.a= a/ucln(a,b);
        m.b= b/ucln(a,b);
        return m;
    }
};
int main(){
	da_thuc dt1,dt2,dt3;
	dt1.nhap();
	dt2.nhap();
	dt3 = dt1.ps(dt2);
	dt3.xuat();
	return 0;
}