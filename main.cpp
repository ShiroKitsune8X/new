#include <lostream>
#include <lomanip>
using namespace std;
int main()
{
    cout <<"1." << setw(10) << "Ivanov" << endl;
    cont <<"2." << setw(10) << left <<"Ivanov"<< endl;
    cout <<"3." << setw(10) << right << "Ivanov" << endl;
    return 0;
}
