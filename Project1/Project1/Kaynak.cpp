#include <iostream>//k�t�phane
using namespace std;

int main() {
    int limit = 4000000;//limiti 4 milyon.
    int sum = 0;
    int a = 1, b = 2;//1 den ba�l�yor
    while (b <= limit) {
        if (b % 2 == 0)  //b�l�m�nden kalan 0 ise �ift say�lar�n topland��� k�s�m
            sum += b;
        int c = a + b;//fibonacci k�sm�
        a = b;
        b = c;
    }
    cout << sum << endl;
    return 0;
}

