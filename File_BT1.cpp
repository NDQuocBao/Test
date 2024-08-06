#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int a, b;

	ofstream outFile;
	ifstream inFile;

	outFile.open("BT1.txt");

	if (outFile.is_open()) {
		cout << "Mo file thanh cong\n";
		
		cout << "Nhap a: "; cin >> a;
		outFile << a << endl;

		cout << "Nhap b: "; cin >> b;
		outFile << b << endl;

		outFile.close();
	}
	else {
		cout << "Khong mo duoc file\n";
	}

	inFile.open("BT1.txt");
	int kq;
	if (inFile.is_open()) {
		cout << "Mo file thanh cong\n";
		int c, d;
		inFile >> c;
		inFile >> d;
		cout << "\nc: " << c;
		cout << "\nd: " << d;
		kq = c + d;
		inFile.close();
	}
	outFile.open("BT1.txt");
	if(outFile.is_open()){
		cout << "Mo file thanh cong\n";
		outFile << kq << endl;
		outFile.close();
	}
	else {
		cout << "Khong mo duoc file\n";
	}
	system("pause");
	return 0;
}