#include <iostream>

using namespace std;


bool czy_pierwsza(int n) //LICZBA PIERWSZA
{
	if(n<2)
		return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹

	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}

int suma_cyfr(long long n) //SUMA CYFR
{
	if(n>0)
		return n%10 + suma_cyfr(n/10);

	return 0;
}


int NWD(int a, int b) // NWD
{
    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowuj¹ wynik NWD(a,b)
}


int reverseDigits(int num) //ODWRACANIE LICZBY
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

//PALINDROM SPRAWDZAMY POPRZEZ POROWNANIE LICZBY ODWROCONEJ UZYWAJAC POWYZSZEGO KODU I LICZBY WEJSCIOWEJ



int firstDigit(int n)
{
    // Remove last digit from number
    // till only one digit is left
    while (n >= 10)
        n /= 10;

    // return the first digit
    return n;
}

// Find the last digit
int lastDigit(int n)
{
    // return the last digit
    return (n % 10);
}

//JESLI PIERWSZA = OSTATNIA TO SA TAKIE SAME !!!!!!!!!!!!!



long long int dowolny_na_dec (long long int a, int system=2)//do system wpisujemy dla: binarny(dwojkowy) - 2, osmekowy - 8, szesnastkowy - 16
{

    long long int w=0;
    long long int k=1;
    while(a)
    {
        w+=(a%10)*k;
        k*=system;
        a/=10;
    }
    return w;
}
long long int dec_na_dowolny (int a, int system=16)//do system wpisujemy dla: binarny(dwojkowy) - 2, osmekowy - 8, szesnastkowy - 16
{
    long long int w=0;
    long long int k=1;
    while(a)
    {
        w+=(a%system)*k;
        k*=10;
        a/=system;
    }
    return w;
}

//JAK CHCECIE NP Z 16 na binarny(2) to z 16 na dec z dec na 2 proste

int main()
{
    int a= 10111;
    cout << dowolny_na_dec(a);
    return 0;
}
