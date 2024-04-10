#include <iostream>
#include <math.h>
#define max 100
using namespace std;

bool kt(int n){
	if(n == 1)
    return false;
	for (int i=2; i*i <= n; i++){
		if (n% i ==0){
			return false;
		} 
	} 
	return true; 
} 
void sapxep(int a[], int n){
    for ( int i = 0; i< n; i++){
        for ( int j = i + 1; j < n ;j++ ){
            if (a[i]< a[j])
                swap (a[i],a[j]);
        }
    }
}
int main(){
    int a[max];
    int n;
  
    cout << "moi nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "nhap gia tri "<<i<<" cua mang: ";
        cin >> a[i];
    }    
    for (int i = 0; i<= n; i++){
		if (kt(a[i])){
			cout<<"so nguyen to la "<<a[i]<<endl; 
		} 
    }
}