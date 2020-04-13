#include <iostream>
#include <string>     //metin karakter kütüphanesi
#include <stdio.h> // STANDART GÝRDÝ ÇIKTI KÜTÜPANESÝ
#include <stdlib.h>  // RANDOM SAYI KULLANMAK ÝÇÝN
#include <time.h>    // RANDOMDA SÜREKLÝ AYNI SAYI GELMEMESÝ ÝÇÝN
using namespace std;
void input(int a) //inputlar için alt fonksiyon
{
    if(a==1)
    cout<<"1 ile 5 arasi bir sayi giriniz:";//kullanýcý dan sayý isteme kodu
    if(a==2)
    cout<<"Geçersiz bir giriþ yaptýnýz.";
    if(a==3)
    cout<<"Mayýn Patladý. Üzgünüm Maalesef Kaybettiniz!\n"; //kullanýcý oyunu kazanmadýðýn da mayýn ve matrisi gösteren kodu bölümü
    if(a==4)
    cout<<"Tebrikler Kazandýnýz!\n"; //kullanýcý oyunu kazandýðýnda matrisi ekrana yazma kodu bölümü
}
int rastgeleSayi(int rastgele)
{
if(rastgele==1)
{
int j=0;
        j= rand()%5+1;
       
}
 
}

void array() //dizi,dizi üzerinde gezinde ve doldurma iþlemleri ve oyunu tekrar oynama durumu fonksiyonu
{
  do //oyunu tekrar oynama ve diðer iþlemlerin tekrarý için do while döngüsü kullandým.
  {
srand(time(0));//dizinin her seferinde farklý deðer alma kodu
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
do{       // her seferinde satýr altlamak için do while döngüsünü kullandým.
   input(1);  //kullanýcý dan sayý istemek için input fonksiyonun da mesaj çaðýrma
cin>>x;
   if((x<0,x>5)) //kullanýcý yanlýþ girdiðin de kullanýcý uyarma kodu
{  
    input(2); //kullanýcý yanlýþ deðer girdiðin de input fonksiyonun da mesaj çaðýrma
}
}while(x<0,x>5); //kullanýcý da sayý isteme döngüsü
 
  for( int j = 0; j<5; j++)
  {
  	
  }
if(oyunMat[i][x-1]=='X')
{
input(3);  //oyunu kazanmadýðýn da input fonksiyonun da mesaj çaðýrma
oyunMat[i][x-1] = 'P'; //mayýn patladýðýn da "P" yazma
win = 0;
break;
}
else
{    
oyunMat[i][x-1] = 'O';//kullanýcýnýn girdiði sayýya denk gelen sutüna O yazma komutu
   }
   if(i+2>0&&i+2<7){          //alt satýra geçme kodu
     cout<<i+2<<". satira gectiniz."<<endl;
}
   }
if(win)
        input(4);  //oyunu kazandýðýn da input fonksiyonun da mesaj çaðýrma
   for(int i=0;i<6;i++)
  {
for(int j=0;j<5;j++)
{
cout<<"\t"<<oyunMat[i][j];  //kazandýktan sonra yazýlan matris
}
cout<<"\n";
   }
    cout<<"Yeniden oynamak ister misiniz? (Evet için e/E, Hayýr için h/H giriniz):";
   cin>>cevap;
   if((cevap=='h')||(cevap=='H')){ //kullanýcý oyunu tekrar oynayýp oynamamak isteme durumunu kontrol etme
    break;
}
if((cevap=='e')||(cevap=='E')){ //kullanýcý oyunu tekrar oynayýp oynamamak isteme durumunu kontrol etme
    continue;
}  
}while(true);//oyunu tekrar oynamak istediðin de ve diðer iþlemleri do while döngüsüyle kontrol ettim.
}

int main(int argc, char** argv)
{
setlocale(LC_ALL, "Turkish"); //Türkçe karakterleri yazma kodu
   array();   //function call
      return 0;  //programý sonlandýrma
}
