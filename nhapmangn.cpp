#include <iostream>
#define max 100
using namespace std;

void nhapmang(int a[], int n){ 
     for(int i = 0; i < n ; i++){
    	 cout << "nhap mang a: ";
	    cin >> a[i];
    }
}
void sapxep(int a[],int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				tg = a[i];
				a[i]= a[j];
				a[j]=tg;
			}
		}
	}
}
int solew(int a[], int n){
	int sole = 0;
	for(int i = 0; i < n ; i++){
     if(a[i] %2 != 0){
    		sole++;	
    	}	
	}
	return sole; 
}
int tongsole(int a[],int n){
	float tong = 0;
	for(int i = 0; i < n; i++){
		if (a[i] != 0){
			tong += a[i];
		}
	}
	return tong;
}
int main(){
    int sole = 0;
    int tong = 0;
	int n;
    int a[max];
	float s;
	cout << "moi nhap n: ";
	cin >> n;
    nhapmang(a,n);
    sapxep(a,n);
    cout << "mang sau khi sap xep la: " ;
	for(int i = 0; i< n;i++){
    cout << a[i]<<" ";
	}
	cout << endl;
	cout << "so luong so le trong mang la : "<< solew(a,n) <<endl;
	cout << "trung binh cong so le trong mang la: "<< tongsole(a,n) / solew(a,n);
}