#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    //ofstream outFile;
    //instead ofstream we can use ofstream
    fstream outFile;


    outFile.open("text.txt",ios::out);//here ios::out because we have created the object of fstream instead of ofstream

    if(outFile.is_open())
    {
        outFile<<"Hello there and fuck off!"<<endl;//Now we are writing into the file
        outFile<<123<<endl;//writing numbers in the file
        outFile.close();//we are closing the file
    }
    else
    {
        cout<<"Could not create file:"<<"text.txt"<<endl;//this is the else statement if our file is not open
    }

    return 0;
}
