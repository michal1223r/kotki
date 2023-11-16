#include <iostream>

using namespace std;


int wiek;

int main() {


    cout << "Podaj wiek" << endl;
    cin >> wiek;

    if(wiek > 18){
        if(wiek > 35){
            cout << "Mozesz zostac przezydentem";
        }else{
        cout << "Nie mozesz zostac prezydentem(nie masz conajmniej 35 lat)";
        }
    }else{
        cout << "Nie mozesz zostac prezydentem(nie jesteś pełnoletni)";
    }

    return 0;
}

