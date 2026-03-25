#include "core_mcu.hpp"

// Constructor: dipanggil saat objek dibuat dengan "new"
Core_MCU::Core_MCU(float _cpu_speed, int _memory, std::string _os, std::string _nama, int _volt) {
    cpu_speed = _cpu_speed;
    memory = _memory;
    os = _os;
    nama = _nama;
    volt = _volt;
    std::cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah dibuat" << std::endl;
}

// Destructor: dipanggil saat objek dihapus dengan "~"
Core_MCU::~Core_MCU() {
    std::cout << "[Core_MCU] : MCU utama yang bernama " << nama << " telah dihapus" << std::endl;
}

// Menampilkan spesifikasi MCU
void Core_MCU::showSpek() {
    std::cout << "[SPEK DEVICE] : [NAMA DEVICE] : " << nama 
              << " | [CPU CLOCK] : " << cpu_speed 
              << " | [MEMORY] : " << memory 
              << " | [OS] : " << os << std::endl;
}

// Menambah voltase MCU
void Core_MCU::nambah_volt(int _penambahan_voltase) {
    volt = volt + _penambahan_voltase;
    std::cout << "[Core_MCU] : MCU utama yang bernama " << nama 
              << " Telah ditambah voltasenya menjadi = " << volt << std::endl;
}

// Mengganti OS MCU
void Core_MCU::ganti_os(std::string _new_os) {
    os = _new_os;
    std::cout << "[Core_MCU] : MCU utama yang bernama " << nama 
              << " Telah diganti OS nya menjadi = " << os << std::endl;
}

// Mengembalikan nilai OS saat ini
std::string Core_MCU::get_os() {
    return os;
}
