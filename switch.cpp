#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputdata(){
    cout << "Masukan bilangan pertama:";
    cin >> bilangan1;
    cout << "Masukan bilangan kedua:";
    cin >> bilangan2;
}

int penjumlahan ( int a, int b){
    return a + b;
}

int pengurangan ( int a, int b){
    return a - b;
}

int perkalian ( int a, int b){
    return a * b;
}

int pembagian ( int a, int b){
    return a / b;
}

int main(){
     
     int pilihan;
     
     do{
        cout << "kalkulator sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. pengurangan" << endl;
        cout << "3. perkalian" << endl;
        cout << "4. pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "====================" << endl;
        cout << "Masukan menu pilihan" << endl;
        cin >> pilihan;


        switch (pilihan){
            case 1:
            inputdata();
            cout << "hasil penjumlahan = " << penjumlahan(bilangan1, bilangan2) << endl;
            break;
            case 2:
            inputdata();
            cout << "hasil pengurangan = " << pengurangan(bilangan1, bilangan2) << endl;
            break;
            case 3:
            inputdata();
            cout << "hasil perkalian = " << perkalian(bilangan1, bilangan2) << endl;
            break;
            case 4:
            inputdata();
            cout << "hasil pembagian = " << pembagian(bilangan1, bilangan2) << endl;
            break;
            case 5:
            break;

            default:
            cout << "pilihan tidak ada" << endl;
        }
        
     }
     while (pilihan)
}