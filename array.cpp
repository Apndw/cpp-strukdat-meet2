#include <iostream>

using namespace std;

string brand[6][2];

void tambah_brand() {
  int length = sizeof(brand) / sizeof(*brand);

  cin.ignore();

  for (int i = 0; i < length; i++) {
    cout << "Masukan id brand ke " << i + 1 << " : ";
    cin >> brand[i][0];

    cout << "Masukan nama brand ke " << i + 1 << " : ";
    getline(cin, brand[i][1]);
  }
}

void tampilkan_brand() {
  if (brand[0][1] == "") {
    cout << "Data brand masih kosong, silahkan isi terlebih dahulu" << endl;
    return;
  }

  int length = sizeof(brand) / sizeof(*brand);

  for (int i = 0; i < length; i++) {
    cout << "Nama brand ke " << i + 1 << " adalah " << brand[i][1] << " dengan id " << brand[i][0] << endl;
  }
}

int main() {
  bool isRunning = true;
  int choice;

  do {
    cout << "Menu Kendaraan" << endl;
    cout << "==================" << endl;
    cout << "1. Masukan data brand" << endl;
    cout << "2. Tampilkan brand mobil" << endl;
    cout << "3. Keluar" << endl;
    cout << "==================" << endl;
    cout << "Masukan pilihan anda : ";
    cin >> choice;

    switch (choice) {
      case 1:
        tambah_brand();
        break;
      case 2:
        tampilkan_brand();
        break;
      case 3:
        isRunning = false;
        break;
      default:
        cout << "Pilihan tidak valid" << endl;
        break;
    }
  } while (isRunning);

  return 0;
}

