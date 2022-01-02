#include "base_math.hpp"
#include "advanced_math.hpp"

using namespace std;

int main()
{
    int a = 10U;
    int b = 5U;
    cout << a << " + " << b << " = " << BASE_MATH__Addition(a,b) << "\n";
    cout << CXX_VERSION << endl;

    cout << ADVANCED_MATH__Factoriel(5) << endl;
    return 0;
}