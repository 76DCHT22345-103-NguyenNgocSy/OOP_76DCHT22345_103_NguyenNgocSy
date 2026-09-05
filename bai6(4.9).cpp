#include <iostream>
#include <iomanip>
#include<string>
#include<vector>
using namespace std ; 
class sinhvien{
	private :
	string hoten ; 
	int ns ; 
	float diem[5] ;
	public :
		void nhap(){
			cout <<"nhap ten sinh vien :" ; 
			getline (cin,hoten) ;
			cout <<"nhap ns sinh vien ";
			cin>> ns; 
			cin.ignore();
			for (int i=0; i < 5 ; i ++){
			cout <<"nhap diem mon "<<i+1<<" : "<<endl;
			cin>>diem[i];
			cin.ignore();
			}
		}
		void xuat(){
			cout <<"ten :"<<hoten<<endl;
			cout <<"ns : "<<ns<<endl;
			for (int i = 0 ; i <5 ; i ++){
				cout <<"diem cua sinh vien : ";
				cout<<diem[i]<<endl;
			}
		}
//		void average(){
//			float dtb=0 ;
//			for (int i = 0 ; i < 5 ; i ++) {
//				dtb += diem[i];
//			}
//			dtb = dtb / 5; 
//			cout<<dtb;
//		}
		void thilai(){
			for (int i = 0 ; i < 5 ; i ++){
				if(diem[i]  < 5 ){
			cout <<"ten :"<<hoten;
			cout <<"ns : "<<ns; 
			cout <<"mon "<<i+1<<diem[i] <<endl;
				}
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
//	cout <<"diem trung binh cua sinh vien :";
//	sv.average();
	cout <<"SINH VIEN PHAI THI LAI "<<endl;
	for (int i = 0 ; i <s.size();i++){
		s[i].thilai();
	}
	return 0;
}
