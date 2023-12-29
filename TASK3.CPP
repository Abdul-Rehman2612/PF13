#include<iostream>
#include<fstream>
using namespace std;
int countLines(string f);
main()
{
    string fileName="The sun peeked over the horizonpainting the sky in shades of orange and pink.Birds chirped cheerfully,welcoming the new day.Sarah sat on her porch,sipping a cup of steaming coffee.She took a deep breath,filling her lungs with the crisp morning air,and smiled as the world woke up around her.\0";
    cout << "Total number of characters: " << countLines(fileName);
}
int countLines(string fileName)
{
    fstream file;
    file.open("example.txt",ios::out);
    file<<fileName;
    file.close();
    string txt;
    file.open("example.txt",ios::in);
    char letter='s';
    int count=0;
    int k=0;
    while(getline(file,txt))
    {
        int i=0;
        while(txt[i]!='\n')
        {
            if(txt[i]==letter || (txt[i]+32)==letter)
            {
                count++;
            }
            i++;
        }
    }
    return count;
}