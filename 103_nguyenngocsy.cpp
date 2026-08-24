#include <iostream>
#include <string>
#include <vector>
#include <iomanip> 

using namespace std;

class NhanVien {
private:
    string maNV;
    string hoTen;
    double luong;

public:
    NhanVien() {
        maNV = "";
        hoTen = "";
        luong = 0.0;
    }
    NhanVien(string ma, string ten, double l) {
        maNV = ma;
        hoTen = ten;
        luong = l;
    }

    static void inTieuDe() {
        cout << left 
             << setw(15) << "Ma NV" 
             << setw(25) << "Ho Ten" 
             << setw(15) << "Luong" << endl;
        cout << string(55, '-') << endl;
    }
    void xuatTheoCot() const {
        cout << left 
             << setw(15) << maNV 
             << setw(25) << hoTen 
             << fixed << setprecision(2) << setw(15) << luong << endl;
    }
};

int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    vector<NhanVien> dsNV; 

    for (int i = 0; i < n; i++) {
        string ma, ten;
        double luong;

        cout << "\n=== NHAP THONG TIN NHAN VIEN THU " << i + 1 << " ===" << endl;
        cout << "Nhap ma NV: ";
        cin >> ma;
        cin.ignore(); 
        cout << "Nhap ho ten: ";
        getline(cin, ten);
        cout << "Nhap luong: ";
        cin >> luong;
        NhanVien nv(ma, ten, luong);
        dsNV.push_back(nv);
    }
    cout << "\n================ BANGLUONG NHAN VIEN ================\n";
    NhanVien::inTieuDe();
    for (size_t i = 0; i < dsNV.size(); i++) {
        dsNV[i].xuatTheoCot();
    }

    return 0;
}
