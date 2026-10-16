//Emerald_SinarNaswatySihaloho_TLS26
#include<iostream>
using namespace std;
char pesan[100],hasil[100];

int hitungPanjang(char teks[]){
    int panjang=0;
    while(teks[panjang]!='\0'){
        panjang++;
    }
    return panjang;
}

int main(){
    cout << "Masukkan pesan: ";
    cin>>pesan;
    int panjang=hitungPanjang(pesan);
    for(int i=0;i<panjang;i++){
        if(i==0){
            hasil[i]=pesan[i];
        }
        else{
            int nilaiSekarang=pesan[i]-'A'+1;
            int nilaiSebelumnya=pesan[i-1]-'A'+1;
            int nilaiBaru=nilaiSekarang+nilaiSebelumnya;
            nilaiBaru=(nilaiBaru-1)%26+1;
            char hurufBaru='A'+nilaiBaru-1;
            hasil[i]=hurufBaru;
        }
    }
    hasil[panjang]='\0';
    cout<<"Pesan setelah disandi: "<<hasil<<endl;
    return 0;
}
