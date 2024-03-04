#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int odwr(int n)
{
    int odwrot = 0;
    while (n != 0) {
        odwrot = (odwrot * 10) + (n % 10);
        n /= 10;
    }
    return odwrot;
}

int main()
{
	ifstream in("kody.txt");
	int a;
	while(in >> a){
        int n = odwr(a);
        int odd = 0, even = 0, c = 1;
        while (n != 0) {
            if (c % 2 == 0)
                even += n % 10;
            else
                odd += n % 10;
            n /= 10;
            c++;
        }
    cout << even << " " << odd << endl;

    int sum = even+odd;
    int div = sum%10;
    int dalej = 10-div;

    cout << dalej << " ";
        switch (dalej) {
            case 0:
                cout << "10101110111010";
                break;
            case 1:
                cout << "11101010101110";
                break;
            case 2:
                cout << "10111010101110";
                break;
            case 3:
                cout << "11101110101010";
                break;
            case 4:
                cout << "10101110101110";
                break;
            case 5:
                cout << "11101011101010";
                break;
            case 6:
                cout << "10111011101010";
                break;
            case 7:
                cout << "10101011101110";
                break;
            case 8:
                cout << "11101010111010";
                break;
            case 9:
                cout << "10111010111010";
                break;

        }
    cout << endl;
    }

	return 0;
}
