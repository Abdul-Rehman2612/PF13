#include<iostream>
#include<fstream>
using namespace std;
int countLines(string f);
main()
{
    string fileName="The sun peeked over the horizon,\npainting the sky in shades of orange and pink.\nBirds chirped cheerfully,\nwelcoming the new day.\nSarah sat on her porch,\nsipping a cup of steaming coffee.\nShe took a deep breath,\nfilling her lungs with the crisp morning air,\nand smiled as the world woke up around her.\0";
    cout << "Total number of lines: " << countLines(fileName);
}
int countLines(string fileName)
{
    fstream file;
    file.open("example.txt",ios::out);
    file<<fileName;
    file.close();
    string txt;
    file.open("example.txt",ios::in);
    int count=0;
    while(getline(file,txt))
    {
        count++;
    }
    return count;
}