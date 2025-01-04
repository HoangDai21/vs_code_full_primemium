#include <iostream>
using namespace std;

class TruongDaiHoc
{
private:
    int MaTruong;
    string TenTruong;
    string sochuyennganh;
    string solop;
    int  soSV;
public:
    TruongDaiHoc(int *MaTruong, string *TenTruong, string *sochuyennganh, string *solop, int *soSV){
        this -> MaTruong = MaTruong;
        this -> TenTruong = TenTruong;
        this -> sochuyennganh = sochuyennganh;
        this -> solop = solop;
        this -> soSV = soSV;
    };
    ~TruongDaiHoc();
    void Nhap();
    void Xuat();
};