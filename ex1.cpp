#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

class SV {
	private:
	    string MaSV;
	    string Hoten;
	
	public:
	    // Constructor
	    SV() {}
	    // Destructor
	    ~SV() {}
	    void input();
	    void output();
};

// Ham nhap
void SV::input() {
    cout << "Nhap ma sinh vien: ";
    getline(cin, MaSV);
    cout << "Nhap ho ten sinh vien: ";
    getline(cin, Hoten);
}

// Ham xuat
void SV::output() {
    cout << "Ma sinh vien: " << MaSV << endl;
    cout << "Ho ten sinh vien: " << Hoten << endl;
}

class SVTMDT : public SV {
	private:
	    float diem;
	
	public:
	    // Constructor
	    SVTMDT(){}
	    // Destructor
	    ~SVTMDT() {}
	    // Override (ghi de`)
	    void input() {
	        SV::input();
	        cout << "Nhap diem kinh doanh online: ";
	        cin >> diem;
	        cin.ignore();
	    }
	    void output() {
	        SV::output();
	        cout << "Diem cua mon kinh doanh online: " << fixed << setprecision(2) << diem << endl;
	    }
		//Overload operator (ghi chong`)
	    bool operator < (SVTMDT &other) {
			return this->diem > other.diem;
		}
};

int main() {
//    SV x;
//    // 1
//    x.input();
//    // 2
//    cout << "\n-->Thong tin sinh vien vua nhap la:" << endl;
//    x.output();
//    // 3
//    int n;
//    cout << "\nNhap so sv HTTMDT: ";
//    cin >> n;
//    cin.ignore();
//
//    vector<SVTMDT> ds(n);
//    for (int i = 0; i < n; i++) {
//        cout << "\nNhap thong tin cho sinh vien thu " << i + 1 << ":" << endl;
//        ds[i].input();
//    }
//    // 4
//    cout << "\n-->Thong tin cua cac sinh vien nganh HTTMDT:" << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "\nSinh vien thu " << i + 1 << ": " << endl;
//        ds[i].output();
//    }
//    // 5
//    // for (int i = 0; i < n - 1; i++) {
//    //     int maxN = i;
//    //     for (int j = i + 1; j < n; j++) {
//    //         if (ds[j] < ds[maxN]) { // dung oper < 
//    //             maxN = j;
//    //         }
//    //     }
//    //     swap(ds[i], ds[maxN]); // swap
//    // }
//    sort(ds.begin(), ds.end());
//    cout << "\n-->Danh sach sinh vien HTTMDT sau khi sap xep theo diem giam dan:" << endl;
//    for (int i = 0; i < n; i++) {
//        cout << "\nSinh vien thu " << i + 1 << ": " << endl;
//        ds[i].output();
//    }
//    return 0;
	int n = 5;
//	n++;
	cout << n++;
}
