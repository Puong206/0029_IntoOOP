#include <iostream>
using namespace std;

class Mahasiswa {
	public: // akses modifier
		string nama;
		int umur;
		string jurusan;

		void output() {
			cout << "Nama : " << endl;
			cout << "Umur : " << endl;
			cout << "Jurusan : " << endl;
		}
};

class Matakuliah {
	private:
		string KodeMk;
		string NamaMk;
		int sks;
	public:
		void input() {
			cout << "Kode MK : ";
			cin >> KodeMk;
			cout << "Nama MK : ";
			cin >> NamaMk;
			cout << "SKS : ";
			cin >> sks;
		}

		void output() {
			cout << "Kode MK : " << KodeMk << endl;
			cout << "Nama MK : " << NamaMk << endl;
			cout << "SKS :" << sks << endl;
		}
};