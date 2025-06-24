#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream archivo ("secuencia.txt");
    int date;
    for (int i = 1; i <=10; i++)
    {
        archivo >> date;
    }
    int datos[5000];
    int cont =0;
    archivo .close();
    ifstream archivo2("secuencia.txt");
    while (archivo2 >> date)
    {
        datos [cont]=datecont++
    }
    



    archivo2 .close();
    return 0;
}