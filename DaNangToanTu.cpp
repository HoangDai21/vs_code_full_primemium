#include<iostream>
using namespace std;

class DaThucBac3
{
	private:
		int he_so_3;
		int he_so_2;
		int he_so_1;
		int he_so_0;
	
	public:
		DaThucBac3(int hs3 = 1, int hs2 = 1, int hs1 = 1, int hs0 = 1)
		{
			this->he_so_3 = hs3;
			this->he_so_2 = hs2;
			this->he_so_1 = hs1;
			this->he_so_0 = hs0; 
		}
		
		~DaThucBac3()
		{
		}
		
		friend istream& operator >> (istream &is, DaThucBac3 &dt)
		{
			cout<<"Nhap he so 3: ";
			cin>>dt.he_so_3;
			cout<<"Nhap he so 2: ";
			cin>>dt.he_so_2;
			cout<<"Nhap he so 1: ";
			cin>>dt.he_so_1;
			cout<<"Nhap he so 0: ";
			cin>>dt.he_so_0;
			return is;
		}
		
		friend ostream& operator << (ostream &os, DaThucBac3 &dt)
		{
			cout<<dt.he_so_3 <<"* x^3 + " <<dt.he_so_2 <<"* x^2 + " <<dt.he_so_1 <<"*x + " <<dt.he_so_0	<<endl;	
			return os;
		}
		
		DaThucBac3 operator + (DaThucBac3 dt1)
		{
			DaThucBac3 tong;
			tong.he_so_3 = this->he_so_3 + dt1.he_so_3;
			tong.he_so_2 = this->he_so_2 + dt1.he_so_2;
			tong.he_so_1 = this->he_so_1 + dt1.he_so_1;
			tong.he_so_0 = this->he_so_0 + dt1.he_so_0;
			return tong;
		}		
	
		DaThucBac3 operator - (DaThucBac3 dt1)
		{
			DaThucBac3 tong;
			tong.he_so_3 = this->he_so_3 - dt1.he_so_3;
			tong.he_so_2 = this->he_so_2 - dt1.he_so_2;
			tong.he_so_1 = this->he_so_1 - dt1.he_so_1;
			tong.he_so_0 = this->he_so_0 - dt1.he_so_0;
			return tong;
		}
		
};


int main()
{
	DaThucBac3 dt1;
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	cout<<"THONG TIN DA THUC THU 1: \n";
	cout<<dt1;
	
	DaThucBac3 dt2(3, -10, 18, -34);
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	cout<<"THONG TIN DA THUC THU 2: \n";
	cout<<dt2;
	
	DaThucBac3 dt3(5, 10, 15, 20);
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	cout<<"THONG TIN DA THUC THU 3: \n";
	cout<<dt3;
	
	DaThucBac3 dt4;
	
	DaThucBac3 tong2;
	tong2 = dt1 + dt2;
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	cout<<"TONG CUA DA THUC 1 VA 2: \n";
	cout<<tong2;

	
	DaThucBac3 tong3;
	//tong3 = (dt1.tinhTong(dt2)).tinhTong(dt3);
	tong3 = dt1 + dt2 + dt3;
	
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	cout<<"TONG CUA DA THUC 1, 2 VA 3: \n";
	cout<<dt3;
	
	dt4 = {-80, 45, -50, 25};
	// Tính đa thức dt1 - dt2 + dt3 - dt4
	DaThucBac3 tong4;
	tong4 = dt1 - dt2 + dt3 - dt4;
	
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	cout<<"DA THUC dt1 - dt2 + dt3 - dt4: \n";
	cout<<dt4;
	
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	DaThucBac3 dt5;
	cout<<"Nhap da thuc thu 5: \n";
	cin>>dt5;
	
	cout<<"\n\nIn Da thuc thu 5: ";
	cout<<dt5;
	
	
	return 0;
}











