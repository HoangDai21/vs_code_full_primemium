#include <iostream>
using namespace std;

class helo{
    private: 
        char ten[30];
        int tuoi;
        char msv[10];
        char love[10];
        char que_quan[20];
        public:
        void nhap(){
            cout << "nhap ten: ";
            fflush(stdin);
            cin.getline(ten,30); 
            cout << "nhap tuoi: ";
            cin >> tuoi;fflush(stdin);
            cout << "nhap lop: "; 
            cin.getline(love,10); 
            fflush(stdin);
            cout << "nhap ma sinh vien: "; 
            cin.getline(msv,10);fflush(stdin);
            cout << "nhap que quan: "; 
            cin.getline(que_quan,20);  fflush(stdin);
        }
        void xuat(){
            cout <<"=============================="<<endl;
            cout << "ten cua sinh vien la: "<<ten<<endl;
            cout << "tuoi la: "<<tuoi<<endl;
            cout << "lop la: "<<love<<endl;
            cout << "que quan la: "<<que_quan<<endl;
        }
        void nhapnsv(helo a[], int n){
            for( int i = 0; i < n; i++){
                fflush(stdin);
                a->nhap();
            }
        }
        void xuatnsv(helo a[], int n){
            for( int i = 0; i < n; i++){
                a->xuat();
            }
        }
};
int main(){
    int n;
    cout << "nhap n: ";
    cin >> n;
    helo a[n];
    a[n].nhapnsv(a,n);
    a[n].xuatnsv(a,n);
}