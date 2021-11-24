#include <iostream>
using namespace std;
int main(){
    cout << "Hello world!" << endl;
    int *p = new int [10];
    *(p + 1) = 666;
    delete [] p;
    char *s[6];
    s[0] = new char [10];
    delete [] s[0];
    cout << "Hello world again!" << endl;
    return 0;
}