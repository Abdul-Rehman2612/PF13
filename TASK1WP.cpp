#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream file;
    string text;
    text="The sun peeked over the horizon,\npainting the sky in shades of orange and pink.\n Birds chirped cheerfully,\nwelcoming the new day.\nSarah sat on her porch,\nsipping a cup of steaming coffee.\nShe took a deep breath,\nfilling her lungs with the crisp morning air,\nand smiled as the world woke up around her.\0";
    file.open("example.txt",ios::out);
    file<<text;
    file.close();
}