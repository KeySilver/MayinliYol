#include <iostream>
#include <string>     //metin karakter k�t�phanesi
#include <stdio.h> // STANDART G�RD� �IKTI K�T�PANES�
#include <stdlib.h>  // RANDOM SAYI KULLANMAK ���N
#include <time.h>    // RANDOMDA S�REKL� AYNI SAYI GELMEMES� ���N
using namespace std;
void input(int a) //inputlar i�in alt fonksiyon
{
    if(a==1)
    cout<<"1 ile 5 arasi bir sayi giriniz:";//kullan�c� dan say� isteme kodu
    if(a==2)
    cout<<"Ge�ersiz bir giri� yapt�n�z.";
    if(a==3)
    cout<<"May�n Patlad�. �zg�n�m Maalesef Kaybettiniz!\n"; //kullan�c� oyunu kazanmad���n da may�n ve matrisi g�steren kodu b�l�m�
    if(a==4)
    cout<<"Tebrikler Kazand�n�z!\n"; //kullan�c� oyunu kazand���nda matrisi ekrana yazma kodu b�l�m�
}
int rastgeleSayi(int rastgele)
{
if(rastgele==1)
{
int j=0;
        j= rand()%5+1;
       
}
 
}

void array() //dizi,dizi �zerinde gezinde ve doldurma i�lemleri ve oyunu tekrar oynama durumu fonksiyonu
{
  do //oyunu tekrar oynama ve di�er i�lemlerin tekrar� i�in do while d�ng�s� kulland�m.
  {
srand(time(0));//dizinin her seferinde farkl� de�er alma kodu
char cevap,oyunMat[6][5]={};


for(int k = 0; k<6; k++)
{
	for(int t = 0; t<5; t++)
	{
		oyunMat[k][t] = 'T';
	} 
	oyunMat[k][rand() % 5] = 'X';
}

    int win = 1;
int x;
for(int i=0;i<6;i++)
{
do{       // her seferinde sat�r altlamak i�in do while d�ng�s�n� kulland�m.
   input(1);  //kullan�c� dan say� istemek i�in input fonksiyonun da mesaj �a��rma
cin>>x;
   if((x<0,x>5)) //kullan�c� yanl�� girdi�in de kullan�c� uyarma kodu
{  
    input(2); //kullan�c� yanl�� de�er girdi�in de input fonksiyonun da mesaj �a��rma
}
}while(x<0,x>5); //kullan�c� da say� isteme d�ng�s�
 
  for( int j = 0; j<5; j++)
  {
  	
  }
if(oyunMat[i][x-1]=='X')
{
input(3);  //oyunu kazanmad���n da input fonksiyonun da mesaj �a��rma
oyunMat[i][x-1] = 'P'; //may�n patlad���n da "P" yazma
win = 0;
break;
}
else
{    
oyunMat[i][x-1] = 'O';//kullan�c�n�n girdi�i say�ya denk gelen sut�na O yazma komutu
   }
   if(i+2>0&&i+2<7){          //alt sat�ra ge�me kodu
     cout<<i+2<<". satira gectiniz."<<endl;
}
   }
if(win)
        input(4);  //oyunu kazand���n da input fonksiyonun da mesaj �a��rma
   for(int i=0;i<6;i++)
  {
for(int j=0;j<5;j++)
{
cout<<"\t"<<oyunMat[i][j];  //kazand�ktan sonra yaz�lan matris
}
cout<<"\n";
   }
    cout<<"Yeniden oynamak ister misiniz? (Evet i�in e/E, Hay�r i�in h/H giriniz):";
   cin>>cevap;
   if((cevap=='h')||(cevap=='H')){ //kullan�c� oyunu tekrar oynay�p oynamamak isteme durumunu kontrol etme
    break;
}
if((cevap=='e')||(cevap=='E')){ //kullan�c� oyunu tekrar oynay�p oynamamak isteme durumunu kontrol etme
    continue;
}  
}while(true);//oyunu tekrar oynamak istedi�in de ve di�er i�lemleri do while d�ng�s�yle kontrol ettim.
}

int main(int argc, char** argv)
{
setlocale(LC_ALL, "Turkish"); //T�rk�e karakterleri yazma kodu
   array();   //function call
      return 0;  //program� sonland�rma
}
