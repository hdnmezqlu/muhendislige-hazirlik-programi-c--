#include <iostream>//kütüphane
using namespace std;

int main() {
    int limit = 4000000;//limiti 4 milyon.
    int sum = 0;
    int a = 1, b = 2;//1 den baþlýyor
    while (b <= limit) {
        if (b % 2 == 0)  //bölümünden kalan 0 ise çift sayýlarýn toplandýðý kýsým
            sum += b;
        int c = a + b;//fibonacci kýsmý
        a = b;
        b = c;
    }
    cout << sum << endl;
    return 0;
}

