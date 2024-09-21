// найти выражение.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int take(int x) {
    x = pow(x,3) - pow(x,2) + x - 1;                // функция задана
    return x;
 }

int main()
{
    int a, b, c, z;                         // обьявление переменых
   cout << "enter data" << endl;
   cin >> a >> b >> c;
  z= (take(2 * a) + take(b + c));           //решение  выражение 
   cout << " result " << z << endl;
   return 0;

    
}

