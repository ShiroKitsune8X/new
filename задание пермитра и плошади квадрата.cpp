// задание пермитра и плошади квадрата.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
void kva(float side,float& perimeter,float& square){                // обьявление функцие
    perimeter = 4 * side;
    square = side * side;
}

int main()
{
    float side;                                                     //присвоение вывода
    cout << "enter the data" << endl;
    cin >> side;
    float square, perimeter;
    kva(side, perimeter, square);
    cout << " perimeter kva " << perimeter << endl;
    cout << " square kva " << square << endl;
   (perimeter > square) ? cout << " perimeter " : cout << "squre";       // выполняется проверка 
    return 0;
}

           /*   if (perimeter > square) {                               // выполняется проверка 
    cout << "perimeter more" << endl;

    }
    else if (square > perimeter) {
    cout << "square more" << endl;
    }
    else {
    cout << "=" << endl;
    } */  
