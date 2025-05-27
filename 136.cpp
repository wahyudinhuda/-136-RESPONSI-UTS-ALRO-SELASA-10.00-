#include <iostream>
using namespace std;

int main(){
	string username, pasword, barang1;
	int barang;
	
	cout << "=========MENU LOGIN==========\n";
	cout << "Input username: ";
	cin >> username;
	cout << "Input pasword: ";
	cin >> pasword;
	
	if (username == "admin" && pasword == "136"){
		cout << "===================";
		cout << "\nLogin berhasil\n";
		cout << "===================";
	} else {
		cout << "===================";
		cout << "\nLogin gagal" << endl;
		cout << "===================";
	} 
	
	cout << "\nMasukkan jumlah barang: ";
	cin >> barang;
	
	if (barang >= 10){
		cout << "\n=====================\n";
		cout << "Barang tersedia";
		cout << "\n=====================\n";
	} else if (barang >= 2){
		cout << "\n=====================\n";
		cout << "Barang tersedia";
		cout << "\n=====================\n";
	} else {
		cout << "=====================\n";
		cout << "barang Tidak tersedia";
		cout << "\n=====================\n";
	}
	
		for (int i=1; i <= barang; i++){
			cout << "\nMasukkan barang ke- " << i << ": ";
			cin >> barang1;
	}
		cout << " ";
	
	int totalbelanja = barang * 10;
	cout << "\nNote: Tiap 1 barang = 10 ribu ";
	cout << "\ntotal belanja = " << totalbelanja << "ribu";
	if (totalbelanja > 100){
		totalbelanja = totalbelanja / 15;
		cout << "\n\ntotal belanja lebih dari 100 potongan 15% menjadi: " << totalbelanja << "ribu";
	} else {
		totalbelanja = totalbelanja;
		cout << "\nTidak ada diskon menjadi: " << totalbelanja << "ribu";
	}
	
	cout << "\n\nTampilkan Hasil Invoice: ";
	cout << "\nUsername: " << username;
	cout << "\nPasword: " << pasword;
	cout << "\n\nTotalBelanja : " << totalbelanja << "ribu";
	
	cout << "\n\nBanyaknya Pelanggan: " << barang << endl;
	
	cout << "\n\nRincian Pemasukan: " << endl;
	cout << "Banyak pelanggan: " << barang << endl;
	cout << "Total Pembelian: " << totalbelanja << "ribu" << endl;
	cout << "Data barang: ";
	for (int i=1; i <= barang; i++){
			cout <<" " << barang1;
	}
	cout << "\nData username dan pasword: " << username << " " << pasword << endl;
	
	return 0;
}
