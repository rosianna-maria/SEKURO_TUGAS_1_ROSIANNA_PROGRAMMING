#include <iostream>
#include <vector>
#include <map>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x(n), c(n);
    for (int i = 0; i < n; i++) std::cin >> x[i];
    for (int i = 0; i < n; i++) std::cin >> c[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j+1]) {
                int tmpX = x[j];
                x[j] = x[j+1];
                x[j+1] = tmpX;
                int tmpC = c[j];
                c[j] = c[j+1];
                c[j+1] = tmpC;
            }
        }
    }
    std::map<int, bool> sudahAmbil;
    int hasil = 0;
    for (int i = 0; i < n; i++) {
        int kategori = c[i];
        if (sudahAmbil[kategori] == false) {
            sudahAmbil[kategori] = true;
            hasil++;
        }
    }
    std::cout << hasil << std::endl;
    return 0;
}
