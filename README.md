# Ujian Akhir Semester 
Mata Kuliah 	: Dasar Pemrograman
Nama		      : Alhan Husen
NIM		        :	1227050015
Jurusan		    : [Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Soal nomor satu ini adalah mengenai Array dua dimensi, Array dua dimensi adalah sebutan untuk array yang penomoran index-nya menggunakan 2 buah angka. Analogi yang sering dipakai seperti titik koordinat dalam diagram kartesius. Diagram kartesius merupakan diagram yang biasa kita pakai untuk membuat grafik. jadi sebuah array akan membentuk sebuah matriks dalam codingan tersebut.

## Source Code
#include <iostream>
using namespace std;

int main(){
  cout << "Nama : Alhan Husein\n"
  	   << "NIM  : 1227050015\n\n";
  int i, j, x, y, matriks[20][20], pemutaran[20][20];

  cout << "Masukkan baris matriks: ";
  cin >> x;
  cout << "Masukkan kolom matriks: ";
  cin >> y;
  cout << endl;

  cout << "Masukkan value matriks \n";
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      cout << "Value Baris " << i+1 << " Kolom " << j+1 << " = " ;
	  cin  >> matriks[i][j];
    }
  }
  cout << "\n";

  cout << "Matriks Sebelum Diubah : \n";
  for (i = 0; i < x; i++){
    for (j = 0; j < y; j++){
      cout << matriks[i][j] << "\t";
    }
    cout << endl;
  }
  
  
  for (i = 0; i < x; i++){
    for (j = 0; j < y; j++){
      pemutaran[j][i] = matriks[i][j];
    }
  }

  cout << "Hasil Pemutaran Matriks: \n";
  for (i = 0; i < y; i++){
    for (j = 0; j < x; j++){
      cout << pemutaran[i][j] << "\t";
    }
    cout << endl;
  }
}

## Output
  ![uas1a](https://user-images.githubusercontent.com/120738510/209471927-4e0b3dac-2a13-4acd-b951-a5aa95ed9461.jpg)
