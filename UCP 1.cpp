// UCP 1
// Latfiansya Dzikri (20230140198)
// 
// 1. Bubble Sort mengurutkan elemen dengan cara :
//	a. membandingkan elemen dari index 0 dengan elemen pada indeks 1 
//  b. apabila elemen pada indeks 1 lebih besar dari elemen indeks 0, maka kedua elemen tersebut akan saling bertukar tempat (i[1] ke i[0])
//  c. mengulang cara seperti "a" dan "b" pada indeks 1 dan 2,  2 dan 3,  3 dan 4, sampai indeks n-1
//  d. terdapat beberapa Pass, yang mana jumlah Pass pada Bubble sort == n-1
//  e. pada Pass pertama, elemen terbesar sudah menempati indeks semestinya (indeks ke n-1). dan pada Pass terakhir, elemen terkecil akan menempati indeks semestinya (indeks ke-0)
//
// 2. Shell sort mengurutkan elemen dengan cara seperti 'Insertion sort', namun terdapat perbedaan yaitu array akan di bagi menjadi beberapa blok. Cara sortirnya :
//	a. Pass 1 : menetapkan jarak(increment) antar elemen yang mau di sortir, misal tiap kelipatan 3 akan menjadi 1 bllok
//  b. menerapkan prosedur insertion sort pada tiap blok
//  c. Pass 2 : setelah semua blok telah berhasil disortir, maka akan disatukan kembali blok-blok tadi kedalam array, dan kembali melakukan pembagian indeks kedalam blok dengan kelipatan yang diperkecil. kalau Pass pertama kelipatan 3, berarti pada Pass ini, menjadi kelipatan 2
//  d. mengulang poin "c" hingga kelipatan menjadi 1, dan dilakukan penyortiran normal Insertion sort
//
// 3. Insertion sort, karena program hanya perlu bekerja selama elemen indeks yang di komparasikan bertemu dengan elemen yang lebih kecil. jadi program tidak harus melakukan perbandingan dan pemindahan elemen secara keseluruhan sehingga lebih efisien
//
// 4.

#include <iostream>
using namespace std;

int Dzikri[98];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 98)
			break;
		else {
			cout << "Array memiliki jumlah maksimal 98 elemen.\n";
		}
	}
	cout << endl;
	cout << "---------------------\n";
	cout << "Masukkan elemen array\n";
	cout << "---------------------\n";

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> Dzikri[i];
	}
}

void display() {
	cout << endl;
	cout << "--------------------------------\n";
	cout << "Elemen array yang telah tersusun\n";
	cout << "--------------------------------\n";

	for (int k = 0; k < n; k++){
		cout << "Data ke-" << (k + 1) << " : ";
		cout << Dzikri[k] << endl;
	}
	cout << endl;
}

void selectionSortArray() {
	int min_index;
	int temp;
	int i, j;
	for (j = 0; j <= n - 2; j++) {
		min_index = j;
		for (i = j + 1; i <= n - 1; i++) {
			if (Dzikri[i] < Dzikri[min_index]) {
				min_index = i;
			}
		}
		temp = Dzikri[j];
		Dzikri[j] = Dzikri[min_index];
		Dzikri[min_index] = temp;

	}
}

int main() {
	input();
	selectionSortArray();
	display();
}



