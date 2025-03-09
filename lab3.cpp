#include<iostream>

using namespace std;

class Ts{
    private:
        string ten;
        int diemtoan;
        int diemvan;
    public:
        
        Ts(string ten = "", int diemtoan = 0, int diemvan = 0){
            this->ten = ten;
            this->diemtoan = diemtoan;
            this->diemvan = diemvan;
        }
        ~Ts(){}
        void nhap(){
            cin.ignore();
            cout << "Nhap ten: ";
            cin >>ten;
            cout << "Nhap diem toan: ";
            cin >> diemtoan;
            cout << "Nhap diem van: ";
            cin >> diemvan;
        }
        void xuat(){
            cout << "Ten: " << ten << endl;
            cout << "Diem toan: " << diemtoan << endl;
            cout << "Diem van: " << diemvan << endl;
        }
        void timkiemtheoten(Ts ts[], int n){
            string ten;
            cin >> ten;
            for(int i = 0; i < n; i++){
                if(ts[i].ten == ten){
                    ts[i].xuat();
                    ts[i].ten = "";
                    ts[i].diemtoan = 0;
                    ts[i].diemvan = 0;
                }
            }
        }
        void sapxeptheohoten(Ts ts[], int n){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    if(ts[i].ten > ts[j].ten){
                        Ts temp = ts[i];
                        ts[i] = ts[j];
                        ts[j] = temp;
                    }
                }
            }
        }
};


int main(){
    int n;
    cout << "Nhap so hoc sinh: ";cin >> n;
    Ts ts[10];
    for(int i = 0; i < n; i++){
        ts[i].nhap();
    }
    for(int i = 0; i < n; i++){
        ts[i].xuat();
    }
    cout << "Nhap ten hoc sinh can tim: ";
    ts[0].timkiemtheoten(ts, n);
    cout << "sap xep theo ten: " << endl;
    ts[0].sapxeptheohoten(ts, n);
    return 0;
}