#include <iostream>
#include <string>
using namespace std;

class Mhs {
private :
	string stack_array[5];
	int top;

public :
	Mhs() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "Stack Full" << endl;
			return "";
		}

		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << "Tambahkan Mahasiswa" << endl;

		return element;
	}

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl;
			top--;
		}

		cout << "\nThe poped element is: " << stack_array[top] << endl;
		top--;
	}
};

const int MAX_MAHASISWA = ;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

void tambahMahasiswa();

void tampilkanSemuaMahasiswa();

void algorithmacariMahasiswaByNIM();

void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1: {
			cout << "\nEnter an element : ";
			string element;
			getline(cin, element);
			Mhs push(element);
			break;
		}
		case 2:
			if (Mhs empty())
			{
				cout << "\nStack is empty" << endl;
				break;
			}
		case 3
			//isi disini
			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

//2. Stack 
//3.stack : menyimpan data dengan ditumpuk, penyimpanan menggunakan Last In First Out (LIFO)
//  queue : menyimpan data dengan antrian, penyimpanan menggunakan First In First Out (FIFO)
//4. menggunakan stack pada saat ingin menyimpan data dengan cara ditumpuk
//5. kedalaman 5, preorder (dilihat dari atas ke bawah)

