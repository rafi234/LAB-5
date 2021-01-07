 #include <iostream>
#include <fstream>
#include "Matrix/matrix.hpp"

using namespace std;

void my_exception(int i);

int main()
{
    Matrix A(7), B(7);
    A.CreateMatrix_1();
    B.CreateMatrix_2();

    cout << "Macierz A wyglada nastepujaco\n\n";
    A.print(); cout << "\n\n";
    cout << "Macierz B wyglada nastepujaco\n\n";
    B.print(); cout << "\n\n";

    Matrix C(7);
    cout << "Wykonujemy dzialanie A + B:\n\n";
    try{C = A + B; } catch(int er) { my_exception(er); }
    C.print(); cout << "\n\n";

    cout << "Wykonujemy dzialanie A - B:\n\n";
    try{ C = A - B; } catch(int er) { my_exception(er); }
    C.print(); cout << "\n\n";

    cout << "Wykonujemy dzialanie A * B:\n\n";
    try{ C = A * B; } catch(int er) { my_exception(er); }
    C.print(); cout << "\n\n";

     return 0;
}

void my_exception(int i)
{
     if (i == -1)
          cout << "\nWARNING: Nie mozna wykonac dzialania z powodu nie odpowiednich rozmiarow macierzy!\n"; 
     else if (i == -2)
          cout << "\nWARNING: Podana komurka nie istnieje w danej macierzy!\n";
     else if (i == -3){
          cout << "\nERROR: Blad alokacji pamieci!!!"; exit(-3);}
     else if (i == -4){
          cout << "\nERROR: Dostep do pliku zostal zabroniony!" << endl; exit(-4);}
}

