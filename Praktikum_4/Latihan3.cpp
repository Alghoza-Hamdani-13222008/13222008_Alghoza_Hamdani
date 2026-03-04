#include <iostream>
#include <vector>

int main() {  
    std::vector<int> data = {10, 20, 30, 40};  
    
    // Simulasi: Jika 4 Core berebut mengubah variabel 'total' bersamaan  
    for(int i = 0; i < data.size(); i++) {  
        int total = 0; // <-- TARGET BENTROKAN (DATA RACE)
        total = total + data[i];   
    }

    std::cout << "Total Akumulasi: " << total << std::endl;  
    return 0;  
}