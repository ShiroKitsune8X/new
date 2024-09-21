// увелечение и замена.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<math.h>
using namespace std;
void pomni(float &x){
	x = (x >= 0) ? 2 * x : -x;								// выполняеться проверку условия
	
}


int main()
{
	float x;
	cout << "enter number" << endl;
	cin >> x;
	pomni(x);						// выполняеться функция 
	cout << x << endl;				// выводит результат 
	return 0;
}
/*(x >= 0) ? cout<< 2* x:cout<< -x;*/							// если написать вот так то будеть выполнить 2 проврка и например если написать -2то выдаст 4
