#include <iostream>
#include <iomanip>
#include<string>
#include<vector>
using namespace std ; 
class sinhvien{
	private :
	string hoten ; 
	int ns ; 
	float diem[4] ;
	public :
		void nhap(){
			cout <<"nhap ten sinh vien :" ; 
			getline (cin,hoten) ;
			cout <<"nhap ns sinh vien ";
			cin>> ns; 
			cin.ignore();
			for (int i=0; i < 4 ; i ++){
			cout <<"nhap diem mon "<<i+1<<" : "<<endl;
			cin>>diem[i];
			cin.ignore();
			}
		}
		void xuat(){
			cout <<"ten :"<<hoten<<endl;
			cout <<"ns : "<<ns<<endl;
			for (int i = 0 ; i <4 ; i ++){
				cout <<"diem cua sinh vien : ";
				cout<<diem[i]<<endl;
			}
		}
		void average(){
			float dtb=0 ;
			for (int i = 0 ; i < 4 ; i ++) {
				dtb += diem[i];
			}
			dtb = dtb / 4; 
			cout<<fixed<<setprecision(2)<<dtb<<endl;;
		}
	void totnghiep() {
    float dtb = 0;
    int kt = 1;

    for (int i = 0; i < 4; i++) {
        dtb += diem[i];

        if (diem[i] < 5) {
            kt = 0;
        }
    }

    dtb = dtb / 4;

    if (dtb >= 7 && kt == 1) {
        xuat();
    }
}
};


int main(int argc, char** argv) {
	int n ; 
	cout <<"nhap so sinh vien :" ; 
	cin>>n ; 
	cin.ignore();
	vector<sinhvien>s;
	sinhvien sv ; 
	for (int i = 0 ; i < n ; i ++){
		sv.nhap();
		s.push_back(sv);
	}
	for (int i = 0 ; i <s.size();i++){
		s[i].xuat();
	}
	for (int i = 0; i < s.size(); i++) {
    cout << "Sinh vien " << i + 1 << ": ";
    s[i].average();
}
 cout << " SINH VIEN DU DIEU KIEN TOT NGHIEP " << endl;
for (int i = 0; i < s.size(); i++) {
        s[i].totnghiep();
    }
	return 0;
}
