#include <fstream>
#include <iostream>

using namespace std;

const int baris = 6;
const int kolom = 2;
const string fileName = "mobil.txt";

void inputData(string mobil[baris][kolom]) {
  cout << "Masukan data : " << endl;

  for (int i = 0; i < baris; i++) {
    cout << "Data " << i + 1 << " : " << endl;
    cout << "Masukan id : ";
    cin >> mobil[i][0];
    cout << "Masukan brand : ";
    cin >> mobil[i][1];
  }
}

void saveToFile(string mobil[baris][kolom]) {
  ofstream file(fileName);

  for (int i = 0; i < baris; i++) {
    file << mobil[i][0] << " " << mobil[i][1] << endl;
  }

  file.close();

  cout << "Data berhasil di simpan ke dalam file " << fileName << endl;
}

void readFromFile(string mobil[baris][kolom]) {
  ifstream file(fileName);

  for (int i = 0; i < baris; i++) {
    file >> mobil[i][0];
    file >> mobil[i][1];
  }

  file.close();

  cout << "Data berhasil di baca dari file " << fileName << endl;
}

int main() {
  string mobil[baris][kolom];
  bool isRunning = true;
  int choice;

  do {
    cout << "Latihan stream file" << endl;
    cout << "=====================" << endl;
    cout << "1. Masukan data" << endl;
    cout << "2. Simpan data" << endl;
    cout << "3. Tampilkan data" << endl;
    cout << "4. Keluar" << endl;
    cout << "=====================" << endl;
    cout << "Masukan pilihan anda : ";
    cin >> choice;

    switch (choice) {
      case 1:
        inputData(mobil);
        break;
      case 2:
        saveToFile(mobil);
        break;
      case 3:
        readFromFile(mobil);
        break;
      case 4:
        isRunning = false;
        break;
      default:
        cout << "Pilihan tidak valid" << endl;
        break;
    }
  } while (isRunning);

  return 0;
}

