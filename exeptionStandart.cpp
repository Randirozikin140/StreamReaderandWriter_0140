#include <iostream>
#include <exception>

//untuk obyek exeption yang akan di gunakan
#include <array>
//untuk obyek array yang akkan di gunakan
using namespace std;

int main() 
{
    cout << "Awal program" << endl; //penanda 1
    try {
        array<int, 3> data = { 10, 20, 30};
        //pesan array integer 3 elemen
        cout <<data.at(5) << endl;
        //memanggil array elemen ke-5 
    }
    catch (exception& e) {
        //penangkap menggunakan objek exeption
        cout << e.what() << endl;
        // akan di eksekusi karna array data hanya 3 elemen
    }
    cout << "baris program terakhir" << endl;
    //penanda 2:bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan
    return 0;
        

}