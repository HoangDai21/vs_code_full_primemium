#include <iostream>
using namespace std;

class CongDan{
	protected:
		int so_cccd;
		string hoten;
		int tuoi;
	public:
		CongDan(int so_cccd = 2103,string hoten = "ddddd",int tuoi = 212){
			this->so_cccd = so_cccd;
			this->hoten = hoten;
			this->tuoi = tuoi;
		}
		~CongDan(){
		}
		void nhap(){
			cout << "Nhap so can cuoc cong dan: ";
			cin >> so_cccd;
			cin.ignore();
			cout << "Nhap ho ten: ";
			getline(cin,hoten);
			cout << "Nhap tuoi: ";
			cin >> tuoi;
			cin.ignore();
		}
		void in(){
			cout << "SO CCCD la: " << so_cccd << endl;
			cout << "Ho ten la: " << hoten << endl;
			cout << "Tuoi la: " << tuoi << endl;
		}
		friend void IndanhsachtsCCCD(ThiSinh ts[],int n);
};
class ThiSinh : public CongDan{
	private: 
		float diem_toan;                                           
		float diem_van;
	public:
		void nhapthongtin(){
			CongDan::nhap();
			cout << "Nhap diem toan: ";
			cin >>diem_toan;
			cout << "Nhap diem van: ";
			cin >> diem_van;
			cin.ignore();
		}
		void inthongtin(){
			CongDan::in();
			cout << "Diem toan la: " << diem_toan << endl;
			cout << "Diem van la: " << diem_van << endl;
		}
		//ThiSinh(int so_cccd,string hoten,int tuoi,float diem_toan,float diem_van)
};
void Nhapdanhsachts(ThiSinh ts[], int n){
	for (int i = 0; i < n; i++){
		cout << "Nhap thong tin thi sinh thu: " << i+1 <<endl;
		ts[i].nhapthongtin();
	}
}
void Indanhsachts(ThiSinh ts[], int n){
	for(int i = 0; i < n; i++){
		cout << "Thi sinh thu "<< i+1 << " la: " <<endl;
		ts[i].inthongtin();
	}
}
void IndanhsachtsCCCD(ThiSinh ts[], int n){
	for(int i = 0 ; i < n; i++){
		if(ts[i].so_cccd< 1234)
			ts[i].inthongtin();
		else cout << "khong co thi sinh nao!"<<endl;
	}
}
int main(){
	CongDan a;
	ThiSinh ts[100];
	int n;
	cout << "nhap so luong thi sinh: ";cin >>n;
	a.in();
	//ThiSinh ts;
	// ts.nhap();
	// ts.in();
	
	cout << "...."<<endl;
	Nhapdanhsachts(ts,n);
	Indanhsachts(ts,n);
}