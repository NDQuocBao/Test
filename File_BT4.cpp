#include<iostream>
#include<fstream>
using namespace std;

void input(char*&a)
{
    a = new char[20];
    cout << "Nhap chuoi ki tu: ";
    cin >> a;
}

int main()
{
    char *a;
    input(a);
    ofstream outFile;
    outFile.open("BT4.txt");
    if(outFile.is_open())
    {
        cout << "File da mo\n";
        int n = sizeof(a) / sizeof(a[0]);
        char *b = new char[20];
        for (int i = 0; i < n;i++)
        {
            if(islower(a[i]))
                a[i] = toupper(a[i]);
            b[i] = a[i];
        }
        outFile << b;
        delete[] b;
        outFile.close();
    }
    cout << "Ghi File thanh cong\n";
    delete[] a;
    system("pause");
    return 0;
}