#include <iostream>
#include<fstream>
using namespace std;

#pragma pack(push,1)// used for packing ie. avoid padding

struct Person
{
    char name[50];
    int age;
    double height;
};

#pragma pack(pop)

int main()
{
    Person someone={"Frodo",220,0.8};

    //Write binary file here
    ofstream outPutFile;

    outPutFile.open("test.bin",ios::binary);

    if(outPutFile.is_open())
    {
        outPutFile.write(reinterpret_cast<char*>(&someone),sizeof(Person));
        outPutFile.close();
    }
    else
    {
        cout<<"Could not create file test.bin"<<endl;
    }

    //Read binary file
    Person someoneElse={};
    ifstream inputFile;

    inputFile.open("test.bin",ios::binary);

    if(inputFile.is_open())
    {
        inputFile.read(reinterpret_cast<char*>(&someoneElse),sizeof(Person));
        inputFile.close();
    }
    else
    {
        cout<<"Could not read file test.bin"<<endl;
    }
    cout<<someoneElse.name<<","<<someoneElse.age<<","<<someoneElse.height<<endl;
    return 0;
}
