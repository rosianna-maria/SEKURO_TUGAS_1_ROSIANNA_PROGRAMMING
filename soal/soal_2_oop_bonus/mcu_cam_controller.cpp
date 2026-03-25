#include "mcu_cam_controller.hpp"
using namespace std;

int mcu_cam_controller::count_detected_obj = 0;

mcu_cam_controller::mcu_cam_controller(float cpu_speed, int memory, string os, string nama, int volt, string obj_detected)
    : MCU(cpu_speed, memory, os, nama, volt), obj_detected(obj_detected) {
    count_detected_obj++;
    cout << "[KONSTRUKTOR CAM] : Komponen kamera untuk " << name << " siap digunakan." << endl;
}

mcu_cam_controller::~mcu_cam_controller() {
    cout << "[DESTRUKTOR] : Objek " << name << " telah dihapus dari memori." << endl;
}

void mcu_cam_controller::showSpek() {
    cout << "[SPEK MCU_CAM] : " << name
         << " | [CPU] : " << cpu_speed << " GHz"
         << " | [RAM] : " << memory << " MB"
         << " | [OS] : " << os
         << " | [Volt] : " << volt << "V"
         << " | [Last Obj] : " << obj_detected
         << " | [Total Detect] : " << count_detected_obj << endl;
}

void mcu_cam_controller::detect_other_object(string other, bool moving) {
    obj_detected = other;
    count_detected_obj++;
    string status = moving ? "Bergerak/Aktif" : "Diam/Statis";
    cout << "[CAM SYSTEM] : Terdeteksi " << other << " (Status: " << status << ")" << endl;
}

void mcu_cam_controller::nambah_volt(int penambahan_voltase) {
    MCU::nambah_volt(penambahan_voltase);
}

void mcu_cam_controller::ganti_os(string new_os) {
    MCU::ganti_os(new_os);
}
