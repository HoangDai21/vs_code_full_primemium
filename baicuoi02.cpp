#include <iostream>
//#include <string>

using namespace std;

class quyenvo{
	private: 
		string loaivo;
		int sotrang;
		string kichthuoc;
	public:
		quyenvo(string loaivo =" ", int sotrang =0, string kichthuc =" "){
			this->loaivo = loaivo;
			this->sotrang = sotrang;
			this->kichthuoc = kichthuoc;
		}
		~quyenvo(){
		};
		void nhap(){
			cout << "nhap so loai vo: ";
			cin.ignore();
			getline(cin, loaivo);
			cout << "nhap so trang: ";
			cin >> sotrang;
			cout << "nhap kich thuoc: ";
			cin.ignore();
			getline(cin, kichthuoc);
			
		}
		void xuat(){
			cout << "so loai vo la: "<< loaivo <<endl;
			cout << "so trang la: "<< sotrang <<endl;
			cout << "kich thuoc la: "<< kichthuoc <<endl;
			
		}
		bool operator < (quyenvo &sotrangNew){
			return sotrang < sotrangNew.sotrang;
		}
		int tinhchiphi(){
			if(kichthuoc == "A5"){
				return sotrang * 100;
			} else if (kichthuoc == "B5"){
				return sotrang *150;
			} else if (kichthuoc == "A4"){
				return sotrang * 200;
			} else {
				return 0;
			}
		}
		
		int getsotrang(){
			return sotrang;
		}
	
};
void nhapdanhsach (quyenvo a[], int n ){
	for(int i = 0; i < n; i++){
		cout << "nhap thong tin quyen vo thu: "<< i+1 <<endl;
		a[i].nhap();
		cout << "-------------------"<<endl;
	}
	
}
void sapxeptangdantheosotrang(quyenvo a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}
void hienthisotranglonhon200(quyenvo a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i].getsotrang() > 200){
			cout << "quyen vo co so trang lon hon 200 la: "<< i+1 <<endl;
			a[i].xuat();
		}
	}
}
int main(){
	int n;
	cout << "nhap so luong quyen vo:ssd ";
	cin >> n;
	quyenvo a[n];
	nhapdanhsach(a, n);
	sapxeptangdantheosotrang(a, n);
	hienthisotranglonhon200(a, n);
	return 0;
}
