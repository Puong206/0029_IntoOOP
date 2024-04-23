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