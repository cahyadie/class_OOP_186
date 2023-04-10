#include <iostream>
using namespace std;

class Mahasiswa {
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
	string namaM;
	int sks;
public:
	void input() {
		cout << "masukan kode matakuliah : ";
		cin >> kode;
		cout << "masukan nama matakuliah : ";
		cin >> namaM;
		cout << "Jumlah SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "kode matakuliah : " << kode;
		cout << "nama matakuliah : " << namaM;
		cout << "SKS : " << sks;
	}
};

int main()
{
	Mahasiswa mhs1;
	Matakuliah mk;
}
