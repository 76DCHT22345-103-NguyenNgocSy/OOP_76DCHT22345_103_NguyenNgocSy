#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct NhanVien {
    string ten;
    int tuoi;

    void nhap() {
        cout << "Nhap ten: ";
        cin >> ten;
        cout << "Nhap tuoi: ";
        cin >> tuoi;
    }

    void xuat() const {
        cout << "Ten: " << ten << " | Tuoi: " << tuoi << endl;
    }
};

int main() {
    int n = 3; // Dem demo voi 3 nhan vien (co the doi thanh 10)

    // CACH 1: Dung mang tinh (Static Array)
    cout << "--- CACH 1: MANG TINH ---\n";
    NhanVien dsnv1[3];

    for (int i = 0; i < n; i++) {
        cout << "=== NHAP THONG TIN NHAN VIEN " << i + 1 << " ===\n";
        dsnv1[i].nhap();
    }

    cout << "\n=== XUAT THONG TIN MANG TINH ===\n";
    for (int i = 0; i < n; i++) {
        dsnv1[i].xuat();
    }

    // CACH 2: Dung con tro & Cap phat dong (Dynamic Array)
    cout << "\n--- CACH 2: CAP PHAT DONG (NEW / DELETE) ---\n";
    NhanVien *dsnv2 = new NhanVien[n]; // Cap phat vung nho Heap

    for (int i = 0; i < n; i++) {
        cout << "=== NHAP THONG TIN NHAN VIEN " << i + 1 << " ===\n";
        dsnv2[i].nhap();
    }

    cout << "\n=== XUAT THONG TIN MANG DONG ===\n";
    for (int i = 0; i < n; i++) {
        dsnv2[i].xuat();
    }

    delete[] dsnv2;

    // CACH 3: Dung std::vector (Con container STL)
    cout << "\n--- CACH 3: DUNG STD::VECTOR ---\n";
    vector<NhanVien> dsnv3;

    for (int i = 0; i < n; i++) {
        cout << "=== NHAP THONG TIN NHAN VIEN " << i + 1 << " ===\n";
        NhanVien nv;
        nv.nhap();
        dsnv3.push_back(nv); // Them vao cuoi vector
    }

    cout << "\n=== XUAT THONG TIN VECTOR ===\n";
    for (size_t i = 0; i < dsnv3.size(); i++) {
        dsnv3[i].xuat();
    }

    return 0;
}
