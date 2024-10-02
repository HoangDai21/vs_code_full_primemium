#include<iostream>
using namespace std;

class hdt2
    {
    private:
        float chieu_dai;
        float chieu_rong;                    
    public:
    
    };

int ttong(int n){
    int tong = 0 ;
        for(int i = 0; i < n; i ++)
        {
            tong = tong + i;
        }
        return tong;
}
int main(){
    int n;
    cout << "nhap n: ";
    cin >> n;
    cout<<ttong(n);
}