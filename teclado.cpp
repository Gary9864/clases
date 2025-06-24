#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n,m,p;
    string palabra;

    ifstream el_archivo("entrada.txt");

    el_archivo >> palabra>>m>>p;

    el_archivo.close();

    cout <<palabra <<" "<<m <<" "<< p << endl; //endline o algo asi juan



    return 0;
}

