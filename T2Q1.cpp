#include <iostream>
using namespace std;

unsigned int factorial(unsigned int num)
{
    int res = 1, i;
    for (i = 2; i <= num; i++)
        res *= i;
    return res;
}

int main(){
int x = 4;

cout << "\n Factorial of " << x << "= " << factorial(x);

return 0 ;

}