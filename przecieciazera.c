#include <stdio.h>
 
#define MAX 10  //maksymalna wartosc//
#define MIN -10 //minimalna wartosc/
#define KONIEC 99
#define LP_MAX 14 //maksymalna liczba przeciec//
#define LP_MIN 8 //minimalna liczba przeciec//
 
int main()
{
 int lprzeciec = 0;      
 float akt=0;        //liczba aktualna//
 float pop=0;        //liczba poprzednia//
 int n=0;            //n-ta liczba z paczki//
 int lpaczek=0;
 
 while (akt != KONIEC) //warunek stopu programu//
    {
      scanf("%f",&akt);
      n++;
      if(akt != 0 && akt >= MIN && akt <= MAX) //sprawdzenie czy dane wejsciowe sa zgodne z zalozenymi wytycznymi//
	{
	  if(akt*pop < 0)
	    {
	      lprzeciec++;
	    }
	  pop=akt;
	}
  
      
      if(n==99 || akt == KONIEC) //warunek konca paczki//
	{
	  n=0;
	  pop=0;
	  lpaczek++;
	  
       
	  if(lprzeciec < LP_MIN || lprzeciec > LP_MAX) //sprawdzenie poprawnosci paczek przez ilosc przeciec w paczce//
      {
	printf("Liczba przeciec: %d, paczka nr %d niepoprawna\n",lprzeciec,lpaczek);
	lprzeciec=0;
      }
      else{
	printf("Liczba przeciec: %d, paczka nr %d poprawna\n",lprzeciec,lpaczek);
	lprzeciec=0;
      }
	}
      
    
    }
  printf("Koniec programu\n");
  
 
 return 0;
 
}

/*

Michal Dos
Temat :"Przeciecia zera"
data: 04.12.2021r.


TESTY:

1)Na poczatku sprawdzilem czy program poprawnie "czyta" podane wartosci o przeciwnych znakach. Aby to sprawdzic zmienilem wartosc konca paczka z n=99 na np. n=10 i wpisywalem z klawiatury losowo wartosci,po kilka dodatnich i kilka ujemnych. Program poprawnie interpretowal liczby z plusem/minusem i liczby po przecinku.  Ujemny iloczyn liczby poprzedniej i aktualnej poprawnie symulowal przeciecie zera.

2)Nastepnie przestestowalem program przy uzyciu plikow z danymi. Z plikow uprzednio usunalem liczby odnoszacych sie do czasu pomiaru, poniewaz  program do dzialania wymaga jedynie wartosci rzeczywistych zmierzonych. Wyniki testow wydaja sie poprawne, dla pierwszej paczki ponadto sprawdzilem zgodnosc liczac recznie ilosc przeciec w pliku z danymi.

wyniki dla danych nr 1 :

|paczka|ilosc przeciec|  poprawnosc  | 
-------------------------------------
|  1   |     11       |   poprawna   |
|  2   |      5       |  niepoprawna |
|  3   |     10       |   poprawna   |
|  4   |     12       |   poprawna   |
|  5   |     12       |   poprawna   |
|  6   |     12       |   poprawna   |
|  7   |     12       |   poprawna   |
|  8   |     13       |   poprawna   |
|  9   |     18       |  niepoprawna |
|  10  |     11       |   poprawna   |
|  11  |      1       |  niepoprawna |

wyniki dla danych nr 2:

|paczka|ilosc przeciec|  poprawnosc  | 
-------------------------------------
|  1   |     11       |   poprawna   |
|  2   |      5       |  niepoprawna |
|  3   |     10       |   poprawna   |
|  4   |     11       |   poprawna   |
|  5   |     11       |   poprawna   |
|  6   |     12       |   poprawna   |
|  7   |     12       |   poprawna   |
|  8   |     14       |   poprawna   |
|  9   |     18       |  niepoprawna |
|  10  |     12       |   poprawna   |
|  11  |      0       |  niepoprawna |

WNIOSKI:

Program wydaje sie poprawnie wyliczac przeciecia zera.

*/
