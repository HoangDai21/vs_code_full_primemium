#include <iostream>
using namespace std;

float Fi(int n){
    if (n <= 2)
       return 1;
    else 
        return Fi(n - 1) + Fi(n - 2);
}
int main(){
    int n;
    cout << "nhap n: ";
    cin >> n;
    Fi(n);
    cout << "so fi la: "<<Fi(n);
    return 0;
}