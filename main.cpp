#include <iostream>

using namespace std;

int main()
{
  /*  int x;

    cin >> x;

    if(x%2==0)
        cout << "par";
    else
        cout << "impar";

    if(x%2)
        cout << "impar2";
    else
        cout << "par2";

    if(!(x%2))
        cout << "par3";
    else
        cout << "impar3";
*/

    //RECIBE 2 CARACTERES E IMPRIMA LA SUMA DE LOS NUMEROS
/*
    char a, b;
    int sum1, sum2;
    cin >> a >> b;
    sum1 = static_cast<int>(a);
    sum2 = static_cast<int>(b);
    cout << (sum1 - 48) + (sum2 - 48) << endl;

    //convierte min en may


    char c;
    cin >> c;
    c = static_cast<char>(c - 32);
    cout << c << endl;

    //may a min

    char d;
    cin >> d;
    d = static_cast<char>(d + 32);
    cout << d << endl;
*/
    //identifica si es num o letra

    char e;
    int temp;
    cin >> e;
    temp = static_cast<int>(e);
    if((temp >= 48)&&(temp <= 57))
        cout << "es un numero\n";
    else if((temp >= 65)&&(temp <= 122))
        cout << "es letra\n";
    else
        cout << "no es ni numero ni letra\n";





    }


