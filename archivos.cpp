#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int n;
    ofstream el_archivo ("salida.txt");
    el_archivo << "hola mundo" << endl;
    el_archivo << "Como estas?"<< endl;

    el_archivo .close();

    ofstream el_archivo2 ("salida.pedro", ios::app);

    for (int i = 1; i <= 10; i++)
    {
        el_archivo2 << i << endl;
    }
    
    el_archivo2 .close();



    return 0;
}