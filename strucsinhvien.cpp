#include <iostream>
#include <iomanip>
using namespace std;

struct ngaythang{
    int ngay;
    int thang;
    int nam;
};
struct sinhvien{
    char ten[30];
    int masv;
    char lop[10];
    ngaythang ntn;
};
void nhap(sinhvien a[], int n ){
    for (int i = 0; i < n; i++){
        cout << "sinh vien thu " << i + 1 << " la" << endl;
        cout << "nhap ten sinh vien : "; 
         fflush(stdin);
        cin.getline(a[i].ten,30); 

        cout << "nhap ma sinh vien : ";cin >> a[i].masv;
        fflush(stdin);
        cout << "nhap lop : ";cin.getline(a[i].lop,10);
        fflush(stdin);
        cout << "nhap ngay : ";cin >> a[i].ntn.ngay;
        cout << "nhap thang : ";cin >> a[i].ntn.thang;
        cout << "nhap nam : ";cin >> a[i].ntn.nam;
    }
}
void xuatdi(sinhvien a[],int n){
    for(int i = 0; i < n; i++){
        cout <<setw(10)<< "sinh vien thu : " << i << "la " << endl;
        cout <<setw(10)<< "ten sinh vien la : "<<a[i].ten<<endl;
        cout <<setw(10)<< "ma sinh vien la:  "<<a[i].masv<<endl;
        cout <<setw(10)<< "sinh vien lop : "<<a[i].lop<<endl;
        cout <<setw(10)<< "ngay sinh : "<<a[i].ntn.ngay<<endl;
        cout <<setw(10)<< "thang sinh : "<<a[i].ntn.thang<<endl;
        cout <<setw(10)<< "nam sinh : "<<a[i].ntn.nam<<endl;
    }
}
int main(){
    int n;
    cout << "nhap so luong sinh vien: ";cin >> n;
    sinhvien a[n];
    nhap(a,n);
    xuatdi(a,n);
    return 0;
}