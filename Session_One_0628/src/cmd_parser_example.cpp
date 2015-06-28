#include <iostream>
#include <string>

using namespace std;

int main(int argc, char ** argv)
{
    if (argc != 2)
    {
        cerr << "Expect exactly one argument" << endl;
        return -1;
    }

    cout << "first argument " << argv[0] << endl;
    cout << "second argument " << argv[1] << endl;
    
    const string file_name(argv[1]);

    cout << "The input file name is: " << file_name << endl;

    return 0;
}
