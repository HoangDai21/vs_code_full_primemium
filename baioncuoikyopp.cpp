#include <iostream>
#include <string>
using namespace std;

// Định nghĩa lớp HOPDONGTHUENHA
class HOPDONGTHUENHA
{   
    private:
        string nguoithuenha;
        float dientich;
        float giathue;
    public:
        HOPDONGTHUENHA(string nguoithuenha = "", float dientich = 0, float giathue = 0)
        {
            this->nguoithuenha = nguoithuenha;
            this->dientich = dientich;
            this->giathue = giathue;
        }
        ~HOPDONGTHUENHA()
        {
        }
        void nhapthongtin()
        {
            cout << "nhap ten nguoi thue nha: ";
            cin.ignore();
            getline(cin, nguoithuenha);
            cout << "nhap dien tich nha: ";
            cin >> dientich;
            cout << "nhap gia thue nha: ";
            cin >> giathue;
        }
        void xuatthongtn(){
            cout << "ten nguoi thue nha: "<< nguoithuenha <<endl;
            cout << "dien tich nha: "<< dientich << " m^2" <<endl;
            cout << "gia thue nha: "<< giathue << " trieu dong" <<endl;

        }
        bool operator < (HOPDONGTHUENHA &a){
            return (dientich > a.dientich);
        }
        double tinhtien1nam(){
            return giathue * 12;
        }
        
};
void sapxeptheodientich(HOPDONGTHUENHA *a, int n){
       for(int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if(a[i] < a[j]){
                    swap(a[i], a[j]);
                }
            }
        }
    }
int main(){
    int n;
    cout << "nhap so luong hop dong thue nha: ";
    cin >> n;
    HOPDONGTHUENHA a[n];
    for (int i = 0; i < n; i++){
        cout << "nhap thong tin cho hop dong thu: " << i + 1<< endl;
        a[i].nhapthongtin();
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i].tinhtien1nam() > 10 )
        {
            cout << "hop dong thue nha co gia thue 1 nam lon hon 10 trieu la: " << i + 1 << endl;
            a[i].xuatthongtn();
        }
    }
    sapxeptheodientich(a, n);
    cout << "danh sach sau khi sap xep la: " <<endl;
    for(int i = 0; i < n; i++){
        a[i].xuatthongtn();
    }   
}