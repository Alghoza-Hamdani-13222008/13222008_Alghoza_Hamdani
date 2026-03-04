#include <iostream>
#include <vector>

class TugasKalkulasi {  
private:  
    int id_tugas;  
    double nilai_A;  
    double nilai_B;  
    double hasil;

public:  
    // Constructor menginisialisasi angka yang akan dihitung  
    TugasKalkulasi(int id, double a, double b) {  
        id_tugas = id;  
        nilai_A = a;  
        nilai_B = b;  
        hasil = 0.0;  
    }

    // Method komputasi (Di sinilah proses paralel nantinya bekerja)  
    void kerjakan() {  
        hasil = nilai_A + nilai_B;
    }

    void tampilkanHasil() {  
        std::cout << "Tugas " << id_tugas << " | "   
                  << nilai_A << " + " << nilai_B   
                  << " = " << hasil << std::endl;  
    }  
};

int main() {  
    std::vector<TugasKalkulasi> antrean;

    for (int i = 1; i <= 100; i++){
        antrean.push_back(TugasKalkulasi(i, i * 2.5, i * 1.5));
    }

    // Proses massal (Sangat aman untuk diparalelkan)  
    for(int i = 0; i < antrean.size(); i++) {  
        antrean[i].kerjakan();  
        antrean[i].tampilkanHasil();  
    }

    return 0;  
}