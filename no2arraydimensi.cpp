#include <cstdlib>
#include <iostream>

using namespace std;
class array{
      private:
              char data[10][10],e[50];
              int a,b,c;
      public:
             void inputan();
             void proses();
             void keluar();
};

void array::inputan(){
     cout<<"masukan baris :";
     cin>>a;
     cout<<"masukan kolom : " ;
     cin>>b;
    
     for(int i=0;i<a;i++){
             for(int j=0;j<b;j++){
                     cout<<"masukan data array ke-["<<i<<"],["<<j<<"] : ";
                     cin>>data[i][j];}}
}

void array::proses(){
    int k=0;
     for(int i=0;i<a;i++){
             for(int j=0;j<b;j++){
                     e[k]=data[i][j];k=k+1;
                     }
     }
}

void array::keluar(){
     cout<<"data awal yang dimasukan :"<<endl;
     for(int i=0;i<a;i++){cout<<"[";
     for(int j=0;j<b;j++){
             cout<<data[i][j];}cout<<"]"<<endl;}
            
     cout<<"data yang sudah dipindah : "<<endl<<"[";
     for(int i=0;i<(a*b);i++){
             cout<<e[i];
             }cout<<"]";cout<<endl;
             }
int main(int argc, char *argv[])
{
    array x;
    x.inputan();
    x.proses();
    x.keluar();
    system("PAUSE");
    return EXIT_SUCCESS;
}
