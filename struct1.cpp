#include <iostream>
#include <iomanip>
using namespace std;

typedef struct{
    char masp[15];
    char tensp[30];
    int soluong;
    float dongia;
} sanpham;
void nhapds(sanpham a[],int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "\nNhap san pham thu " << i + 1 << endl;
        cout << "Ma san pham: ";
        cin.getline(a[i].masp,15);
        cout << "\nTen san pham: ";
        cin.getline(a[i].tensp,30);
        cout <<"\nSo luong san pham: ";cin >> a[i].soluong;
        cout << "\nDon gia san pham: ";cin >> a[i].dongia;
    }
}
void inds(sanpham a[], int n){
        cout << "\n\n--------- Danh Sach San Pham---------"<<endl;
        cout << setw(15) << "Ma san pha";
        cout << setw(30) << "Ten san pham";
        cout << setw(15) << "So luong";
        cout << setw(15) << "Don gia";
    for (int i = 0; i < n; i++){
        cout<<setw(15)<<a[i].masp; 
        cout<<setw(30)<<a[i].tensp; 
        cout<<setw(15)<<a[i].soluong; 
        cout<<setw(15)<<a[i].dongia<<endl;   
    }
}
void spgiaduoi2000(sanpham a[], int n){
    cout << "\n---Danh Sach San Pham Co Gia < 2000---" <<endl;
    cout << setw(15) << "Ma san pham: ";
    cout << setw(30) << "Ten san pham: ";
    cout << setw(15) << "So luong: ";
    cout << setw(15) << "Don gia: " <<endl;
    for(int i = 0; i < n; i++)
    if(a[i].dongia <= 2000){
        cout << setw(15) << a[i].masp;
        cout << setw(30) << a[i].tensp;
        cout << setw(15) << a[i].soluong;
        cout << setw(15) << a[i].dongia <<endl;
    }
}
int main(){
    int n;
    sanpham a[n];
    cout << "Nhap so san pham: ";cin >> n;
    nhapds(a,n);
    inds(a,n);
    spgiaduoi2000(a,n);
    return 0;

}