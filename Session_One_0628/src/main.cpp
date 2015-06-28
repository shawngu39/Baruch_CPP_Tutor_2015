#include <iostream>
#include <stdlib.h> 
using namespace std;

void bar()
{
    cout << "This is the bar function" << endl;
}

int foo(const int left, const int right)
{
    for (int i = 0; i < left; ++i)
    {
        const int result = i * right;
        cout << result << endl;
    }

    if (left > 3)
        bar();
}

int main(int argc, char ** argv)
{
    for (int i = 0; i < argc; ++i)
    {
        cout << argv[i] << endl;
    }
    cout << "Hello World" << endl;
    const int left = atoi(argv[1]);
    const int right = atoi(argv[2]);

    foo(left, right);

    if (left <= 3)
        bar();
    
    return 0;
}
