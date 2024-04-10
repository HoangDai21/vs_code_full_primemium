#include <iostream>
using namespace std;

int check(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(sum % i == 0){
            sum += i;
        }
    }
    return sum;
}
bool truedamege(int n1, int n2){
    if(check(n1)== n2 && check(n2) == n1);
    return true;
}
int main(){
    int n1,n2;
    cout << "nhap so thu nhat: ";cin >> n1;
    cout << "nhap so thu hai: ";cin >> n2;
    if(truedamege(n1,n2)){
        cout << n1 << " va " <<n2 <<" la so ban be ";
    }
    else cout << n1 << " va "<< n2 << " khong la so ban be ";
    
}