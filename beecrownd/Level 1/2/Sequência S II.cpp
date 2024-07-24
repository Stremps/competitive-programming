#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float s, e, p;

    for(s = 0, e = p = 1; e <= 39; p*=2, e+=2){
        s+=e/p;
    }

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}