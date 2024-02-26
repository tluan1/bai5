#include <iostream>
using namespace std;

int tinhtong(int so1, int so2) {
	return so1 + so2;
}
int tinhhieu(int so1, int so2) {
	return so1 - so2;
}
int tinhtich(int so1, int so2) {
	return so1 * so2;
}
float tinhthuong(int so1, int so2) {
	return (float) so1 / so2;
}

int main() {
	int so1, so2,ketqua;
	cout << "CHUONG TRINH TINH TONG 2 SO\n";
	cout << "Nhap so thu nhat:"; cin >> so1;
	cout << "Nhap so thu hai:"; cin >> so2;
	ketqua = tinhtong(so1, so2);
	ketqua = tinhhieu(so1, so2);
	ketqua = tinhtich(so1, so2);
	ketqua = tinhthuong(so1, so2);
	cout << so1 << " + " << so2 << " = " << tong << endl;
	cout << so1 << " - " << so2 << " = " << hieu << endl;
	cout << so1 << " * " << so2 << " = " << tich << endl;
	if (so2 != 0) {
		tinhthuong = (float)so1 / so2;
		cout << so1 << " /" << so2 << " =" << thuong << endl;
	}
	else {
		cout << "khong the chia " << so1 << " chia cho 0\n";
	}
	return 0;
}