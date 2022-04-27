#include <iostream>
using namespace std;

class nilai{
  public:
    void input(int);
    void output(int);
  private:
    int i,k,max,min,rata,total,jumlah,dos,mat,n;
    char matkul[50];
};

void nilai::input(int jumlah){

	cout<<"Masukkan Jumlah Nilai yang Ingin di Inputkan : ";cin>>jumlah;

    int array[jumlah];
    

  cout << "Masukkan " << jumlah << " angka\n";
  for (int i = 0; i < jumlah; i ++) {
    cout << "Nilai absen ke-" <<(i+1) <<": ";
    cin >> array[i];
    total = total + array[i];
  }
	rata = total/jumlah;
	
	max=array[0];
  for(int i = 0; i < jumlah; i++) {
    if(array[i] >= max)  {
      max = array[i];
      
    }
  }
   min = array[0];
  for(int i = 0; i < jumlah; i++) {
    if (array[i] < min)  {
      min = array[i];
    }
  }
}

void nilai:: output(int batas){
	cout << "Nilai maksimum adalah " << max  << endl;
	cout << "Nilai minimum adalah " << min  << endl;
	cout << "Nilai total adalah " << total  << endl;
	cout << "Nilai rata-rata adalah " << rata  << endl;
	}



int main() {
  int batas,jumlah;
  string dosen,matkul;
  cout<<"Masukkan nama Dosen : ";cin>>dosen;
  cout<<"Masukkan Matkul : ";cin>>matkul;
	
  nilai x;
	x.input(batas);
	x.output(batas);
	return 0;
}
