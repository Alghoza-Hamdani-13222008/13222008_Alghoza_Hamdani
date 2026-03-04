#include <iostream>
using namespace std;

class RekeningBank {
private:
    double saldo;
public:
    //Constructor
    RekeningBank(double saldoAwal) {
        saldo = saldoAwal;
        cout << "Rekening Saldo : Rp " << saldo << endl;
    }

    // Method Setor
    void setor(double setoran) {
        saldo += setoran; // Saldo ditambahkan
        cout << "Anda menyetorkan sebanyak Rp :" << setoran << endl;
        cout << "Saldo Sekarang : Rp " << saldo << endl;
    }
    // Method Tarik    
    void tarik(double nominal) {
        if (nominal > saldo) {
            // Jika nominal yang ditarik melebihi saldo
            cout << "Penarikan Gagal! Saldo tidak mencukupi." << endl;
        } else {
            // Jika saldo cukup
            saldo -= nominal; // Potong saldo
            cout << "Penarikan Berhasil." << endl;
            cout << "Sisa saldo: Rp " << saldo << endl;
        }

    }
};

int main() {
    //Mengisi Saldo Awal 100.000
    RekeningBank Rekening(100000);

    // Setor uang 50.000
    Rekening.setor(50000);

    // Tarik uang 20.000
    Rekening.tarik(20000);

    // Tarik uang 200.000 
    Rekening.tarik(200000);

    return 0;
}