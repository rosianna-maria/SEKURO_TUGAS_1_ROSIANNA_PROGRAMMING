#include "mobil.hpp"
using namespace std;

mobil::mobil(int _kapasitas_mesin, string _name, string _merk, int _top_speed, string _bahan_bakar) {
    kapasitas_mesin = _kapasitas_mesin;
    name = _name;
    merk = _merk;
    top_speed = _top_speed;
    bahan_bakar = _bahan_bakar;
    cout << name << " keluar dari pabrik " << merk << " nih gaspol ah" << endl;
}

void mobil::jalan(int _jarak) {
    cout << "Mobil " << name << " sedang jalan sejauh " << _jarak << " kilometer" << endl;
}

void mobil::pamer_mesin() {
    if (kapasitas_mesin < 2000) {
        cout << "Yah " << name << " kagak bisa ngeraung CC mesinnya kurang" << endl;
    } else {
        cout << "WRAAAUR " << name << " meraung dengan kerennya" << endl;
    }
}

void mobil::cek_spesifikasi() {
    cout << "=== Spesifikasi Standar " << name << " ===" << endl;
    cout << "Merk: " << merk << " | Mesin: " << kapasitas_mesin << " CC" << endl;
    cout << "Top Speed: " << top_speed << " km/jam | BBM: " << bahan_bakar << endl;
}

mobil::~mobil() {
    cout << "BOOM " << name << " Dihancurin" << endl;
}

mobil_sport::mobil_sport(int _kapasitas_mesin, string _name, string _merk, int _top_speed, string _bahan_bakar)
    : mobil(_kapasitas_mesin, _name, _merk, _top_speed, _bahan_bakar) {
    turbo_aktif = false;
}

void mobil_sport::jalan(int _jarak) {
    cout << "Wuzzz! Sportscar " << name << " melesat sejauh " << _jarak << " km!" << endl;
}

void mobil_sport::cek_spesifikasi() {
    cout << "=== Spesifikasi High-Performance " << name << " ===" << endl;
    cout << "Merk: " << merk << " | Mesin: " << kapasitas_mesin << " CC" << endl;
    cout << "Kecepatan Maksimum: " << top_speed << " km/jam | BBM: " << bahan_bakar << endl;
    if (turbo_aktif == true) {
        cout << "Status Turbo: Aktif" << endl;
    } else {
        cout << "Status Turbo: Non-aktif" << endl;
    }
}

void mobil_sport::aktifkan_turbo() {
    turbo_aktif = true;
    cout << "Turbo diaktifkan! Power " << name << " meningkat drastis!" << endl;
}
