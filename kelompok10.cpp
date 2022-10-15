#include<iostream>
using namespace std;

int total(int pinjam, int bunga){
	return pinjam + bunga;
}

int main(){
	int pinjam, bunga, bulan;
	char pilih, nama[20];
	
	cout<<"Kelompok 10\n\n";
	cout<<"Ibnu Muhtar\n";
	cout<<"Nurwahid Muslim\n";
	cout<<"Rio Sulendra\n\n";
	cout<<"-----------------\n";
	for (int i = 0; i < 7; i++ ){
        for(int x = 7; x > i; x--){
            cout<<" ";
        }for(int f = 1; f <= 2 * i - 1; f++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\nPiramida Finance\n\n";
    cout<<"-----------------\n\n";
	cout<<"Masukan Nama Anda : ";
	cin.getline(nama, 20);
	cout<<"\nApakah Anda Ingin Melakukan Pinjaman [y/t] : ";
	cin>>pilih;
	
	switch(pilih){
		case 'y':
		case 'Y':
			cout<<"\nMasukan Nominal Yang Ingin Anda Pinjam : Rp ";
			cin>>pinjam;
			cout<<"\nBunga 5% Per Bulan\n";
			cout<<"\nLama Pinjaman (Bulan) : ";
			cin>>bulan;
			bunga = bulan * (0.05 * pinjam);
			cout<<"\nBunga : Rp "<<bunga;
			cout<<"\n\nTotal Yang Harus Anda Bayar Dalam "<<bulan<<" Bulan Kedepan : Rp "<<total(pinjam, bunga);
			cout<<"\n\nApakah Anda Yakin [y/t] : ";
			cin>>pilih;
			switch(pilih){
			case 'y':
			case 'Y':
			cout<<"\n\nSelamat Anda Berhasil Melakukan Pinjaman Di Piramida Finance";
			switch(pilih){
				case 't':
				case 'T':
				break;
			}
		}
	}
	
	cout<<"\n\nTerima Kasih Telah Menggunakan Layanan Kami";
	
	return 0;
}
