#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outFile;

    outFile.open("hello.txt");

    if (outFile.is_open())
    {
        outFile << "Hello";

        outFile.close();

        cout << "Data written to hello.txt successfully." << endl;
    }
    else
    {
        cout << "Unable to open file." << endl;
    }

    return 0;
}