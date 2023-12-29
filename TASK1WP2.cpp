#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream file;
    string text;
    file.open("example.txt",ios::in);
    file>>text;
    file.close();
    cout << text;
}