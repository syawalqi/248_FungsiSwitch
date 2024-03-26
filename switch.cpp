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
     }
}