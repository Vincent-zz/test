#include <iostream>
using namespace std;
int main(){
    cout << "Hello world!" << endl;
    int *p = new int [10];
    delete [] p;
    return 0;
}