#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // Ð? dùng setw can ch?nh c?t

using namespace std;

class NhanVien {
private:
    string maNV;
    string hoTen;
    double luong;

public:
    // 1. Constructor không d?i (Default constructor)
    NhanVien() {
        maNV = "";
        hoTen = "";
        luong = 0.0;
    }

    // 2. Constructor có d?i (Parameterized constructor)
    NhanVien(string ma, string ten, double l) {
        maNV = ma;
        hoTen = ten;
        luong = l;
    }

    // Tiêu d? b?ng
    static void inTieuDe() {
        cout << left 
             << setw(15) << "Ma NV" 
             << setw(25) << "Ho Ten" 
             << setw(15) << "Luong" << endl;
        cout << string(55, '-') << endl;
    }

    // Xu?t d? li?u theo d?ng hàng (dùng cho d?nh d?ng c?t)
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

    vector<NhanVien> dsNV; // S? d?ng C?u trúc d? li?u Vector (Cách 3)

    // ? MAIN: Nh?p n nhân viên s? d?ng constructor có d?i d? dua vào m?ng
    for (int i = 0; i < n; i++) {
        string ma, ten;
        double luong;

        cout << "\n=== NHAP THONG TIN NHAN VIEN THU " << i + 1 << " ===" << endl;
        cout << "Nhap ma NV: ";
        cin >> ma;
        cin.ignore(); // Xóa b? nh? d?m tru?c khi nh?p chu?i có kho?ng tr?ng
        cout << "Nhap ho ten: ";
        getline(cin, ten);
        cout << "Nhap luong: ";
        cin >> luong;

        // T?o d?i tu?ng b?ng Constructor có d?i và push_back vào vector
        NhanVien nv(ma, ten, luong);
        dsNV.push_back(nv);
    }

    // Xu?t d? li?u nhân viên theo d?ng c?t
    cout << "\n================ BANGLUONG NHAN VIEN ================\n";
    NhanVien::inTieuDe();
    for (size_t i = 0; i < dsNV.size(); i++) {
        dsNV[i].xuatTheoCot();
    }

    return 0;
}


