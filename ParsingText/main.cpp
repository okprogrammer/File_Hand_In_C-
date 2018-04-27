#include <iostream>
#include<fstream>
using namespace std;

int main()
{
 ifstream input;
 input.open("stats.txt");//open the file
 if(!input.is_open())
 {
     return 1;
 }
 while(input)
 {
     string line;

     getline(input,line,':');//get line reads line by line and the 3rd
     //argument tells where to terminate the line

     int population;//we declare a integer population
     input>>population;

     //input.get();//get the next line character
     /* Extracts as many whitespace characters as possible from the current position in the input sequence.
     The extraction stops as soon as a non-whitespace character is found.
     These extracted whitespace characters are discarded.*/
       input>>ws;
    if(!input)//for removing next line character
    {
        break;
    }
     cout<<line<<"--"<<population<<endl;
 }

 input.close();
return 0;
}
