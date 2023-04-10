#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM = " << nim;
	cout << "\nNama = " << nama;
	}
};

class Matakuliah {
private:
	string kode;
	string namam;
	int sks;
public:
	void input() {
		cout << "masukan kode matakuliah : ";
		cin >> kode;
		cout << "masukan nama matakuliah : ";
		cin >> namam;
		cout << "Jumlah SKS : " \;
		cin >> sks;
	}
};
