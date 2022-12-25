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
