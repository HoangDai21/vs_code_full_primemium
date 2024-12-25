#include  <iostream>
using namespace std;

class Dathuc{
    private: 
        int a; /// he so 3210;
        int b;
        int c;
        int d;
    public:
        Dathuc (int hs3 = 5, int hs2 = 1, int hs1 = 1, int hs0 = 3){
            this ->a = hs3;
            this ->b = hs2;
            this ->c = hs1;
            this ->d = hs0;
        }
        ~Dathuc(){
        }
        void Inthongtin(){
            cout << a << "x^3 +" << b << "x^2 +" << c << "x +" << d <<endl;
        }
        Dathuc ttong (Dathuc a, Dathuc b){
            Dathuc tong;
                tong.a = a.a + b.a;
                tong.b = a.b + b.b;
                tong.c = a.c + b.c;
                tong.d = a.d + b.d;
        return tong;
        }

};
int main (){
    Dathuc a;
    a.Inthongtin();
    Dathuc b(2,3,4,6);
    b.Inthongtin();
    Dathuc tong, tong3dt,tong4;
    // tong = a + b;
    // tong = tong.ttong(a,b);
    // tong.Inthongtin();
    // tong3dt = a.ttong(tong,tong);
    // tong3dt.Inthongtin();
    // tong4 = a.ttong(tong3dt,tong3dt);
    // tong4.Inthongtin();
}