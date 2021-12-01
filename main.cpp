#include <iostream>
using namespace std;

bool controllo(char &c) {
    if('A'<=c && c<='Z') {
        c += 'a' - 'A';
        return true;
    }
    else if('a'<=c && c<='z') {
        c -= 'a' - 'A';
        return true;
    }
    return false;
}

int main() {
    char x;
    cin>>x;
    if(controllo(x))
        cout<<x;
    else
        cout<<"errore";

    return 0;
}
