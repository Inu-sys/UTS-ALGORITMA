#include <iostream>
using namespace std;

float hitungIMT(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

string tentukanKategoriIMT(float imt) {
    if (imt < 18.4) {
        return "Berat Badan Kurang";
    } else if (imt >= 18.5 && imt < 24.9) {
        return "Berat Badan Ideal";
    } else if (imt >= 25.0 && imt < 29.9) {
        return "Berat Badan Lebih";
    } else if (imt >= 30 && imt < 39.9){
        return "Gemuk";
    } else if (imt >= 40){
        return "Sangat Gemuk";
    }
}

int main() {
    float berat, tinggi, imt;


    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (centi meter): ";
    cin >> tinggi;

    imt = hitungIMT(berat, tinggi);

    cout << "IMT Anda: " << imt << endl;
    cout << "Kategori: " << tentukanKategoriIMT(imt) << endl;

    return 0;
}
