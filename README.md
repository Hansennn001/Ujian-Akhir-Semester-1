# Ujian Akhir Semester 
<br> Mata Kuliah 	: Dasar Pemrograman
<br> Nama		: Alhan Husen
<br> NIM		: 1227050015
<br> Jurusan		: [Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum

Soal nomor satu ini adalah mengenai Array dua dimensi, Array dua dimensi adalah sebutan untuk array yang penomoran index-nya menggunakan 2 buah angka. Analogi yang sering dipakai seperti titik koordinat dalam diagram kartesius. Diagram kartesius merupakan diagram yang biasa kita pakai untuk membuat grafik. jadi sebuah array akan membentuk sebuah matriks dalam codingan tersebut. Dalam kasus ini, saya hanya mengubah bagian kolom untuk menjadi baris dan juga sebaliknya.

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

![uas1a](https://user-images.githubusercontent.com/120738510/209472283-35927e4a-d7bb-4cd2-a748-4ac4d51adee5.jpg)
