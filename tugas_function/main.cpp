#include <iostream>
using namespace std;

int minimumx(int berat[], int ukuran){
	int minimum = berat[0];
	for (int i = 1; i < ukuran; i++) {
		if (berat [i] < minimum) {
			minimum = berat[i];
		}
	}
	return minimum;
}

int main() {
	int const siswa = 5;
	int berat[siswa];
	cout << "Masukkan " << siswa << " data berat siswa X-PPLG(kg):" << endl;
	
	for (int i = 0; i < siswa; ++i) {
		cout << "Berat siswa ke-" << i +1 << ": ";
		cin >>berat[i];
	}
	
	int minimum =minimumx(berat,siswa);
	
	cout << endl;
	cout << "---    DATA SISWA   ---" << endl;
	for (int n = 0; n < siswa; ++n) {
		cout << "Berat Siswa ke-" << n + 1 << ": " << berat[n] << "kg" << endl;
	}
	cout << "Berat paling kecil siswa X-PPLG: " << minimum << "kg" <<endl;
	
	return 0;
}