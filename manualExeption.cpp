#include <iostream>
using namespace std;

int main() {
    try{
        cout << "selamat belajar di prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch(int a) {
        //blok ini akan di eksekusi
        cout << "Pengecualian akan di eksekusi" << endl;
    }
    catch (...) {
        // jika selain integer maka blok ini akan di eksekusi
        cout << "Default pengecualin di eksekusi" << endl;
    }
    return 0;
}