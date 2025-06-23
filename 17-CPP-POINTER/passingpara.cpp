#include <iostream>

using namespace std;

void square(int z)
{

    z = z * z;

    cout << z << endl;
}

void cube(int &n)
{

    n = n * n * n;
    cout << n << endl;
}

int main()
{
    // PASS BY VALUE
    
    int z = 10;

    square(z);

    cout << z << endl;

    // PASS BY REFEREFCNE

    int n = 3;
    int &ref = n;

    cube(ref);

    cout << n << endl;
    return 0;
}