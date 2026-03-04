#include <iostream>
#include <fstream>  
#include <vector>   

int main() {
    // Inisialisasi vector
    std::vector<double> sensor;

    // Pushback data awal
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    // Proses Kalibrasi
    for (int i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;
    }

    // Menyimpan ke File Eksternal
    std::ofstream fileKeluaran("hasil_kalibrasi.txt");

    // Memastikan file berhasil dibuka
    if (fileKeluaran.is_open()) {
        
        // Menulis Hasil ke File
        for (int i = 0; i < sensor.size(); i++) {
            fileKeluaran << sensor[i] << std::endl;
        }
        // Menutup file setelah selesai
        fileKeluaran.close();
        

    return 0;
}
}