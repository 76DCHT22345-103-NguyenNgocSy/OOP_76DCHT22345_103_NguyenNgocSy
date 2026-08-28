#include <iostream>
using namespace std;

class MaTran {
private:
    int soHang;
    int soCot;
    int a[100][100];

public:
    // Constructor m?c d?nh
    MaTran() {
        soHang = 0;
        soCot = 0;
    }

    // Constructor có tham s?
    MaTran(int m, int n) {
        soHang = m;
        soCot = n;
    }

    // Nh?p ma tr?n
    void nhap() {
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cin >> a[i][j];
            }
        }
    }

    // Xu?t ma tr?n
    void xuat() {
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Khai báo hàm b?n
    friend MaTran cong(MaTran A, MaTran B);
};

// Ð?nh nghia hàm b?n
MaTran cong(MaTran A, MaTran B) {
    MaTran C(A.soHang, A.soCot);

    for (int i = 0; i < A.soHang; i++) {
        for (int j = 0; j < A.soCot; j++) {
            C.a[i][j] = A.a[i][j] + B.a[i][j];
        }
    }

    return C;
}

int main() {
    int m, n;

    cout << "Nhap so hang: ";
    cin >> m;

    cout << "Nhap so cot: ";
    cin >> n;

    // Hai ma tr?n d?ng c?p
    MaTran A(m, n);
    MaTran B(m, n);

    cout << "Nhap ma tran A:\n";
    A.nhap();

    cout << "Nhap ma tran B:\n";
    B.nhap();

    // G?i hàm b?n d? c?ng
    MaTran C = cong(A, B);

    cout << "\nMa tran A:\n";
    A.xuat();

    cout << "\nMa tran B:\n";
    B.xuat();

    cout << "\nMa tran A + B:\n";
    C.xuat();

    return 0;
}
