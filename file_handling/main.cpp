#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("myfile.dat");
    fout<<"Hello"<<endl;
    fout.close();
    return 0;
}
