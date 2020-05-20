#include <iostream>
#include <fstream>

using namespace std;

    int t[1000];

    bool jest_liczba(int zmienna){

        for(int i = 0; i < 1000; i++){
            if( zmienna == t[i])
                return false;
            else return true;
    }

int main()

{
    ifstream wejscie;
    ofstream wyjscie;

    wejscie.open("wej.txt");
    wyjscie.open("wyj.json");

    int licznik = 0;

    if (wejscie.good()) {
        while(!wejscie.eof()){
            for(int i = 0; i < 1000; i++)
                wejscie >> t[i];}

            for(int i = 0; i >= licznik; i++){
                if( i == licznik ){
                    if(jest_liczba(licznik) == true)
                        t[licznik] = i;
                 wyjscie << " [  \n { \n "liczba" :" " << i;
                }
              licznik++; 
           }

        wejscie.close();
        wyjscie.close();

        return 0;

}
