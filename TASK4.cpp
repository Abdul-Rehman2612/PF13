#include<iostream>
#include<fstream>
using namespace std;

void getStudentDetails(string names[],int ages[],float matricMarks[],float fscMarks[],float ecatMarks[],int &count);
void saveToFile(string names[],int ages[],float matricMarks[],float fscMarks[],float ecatMarks[],int count,string fileName);

main()
{
    int count=0;
    string names[1000];
    int ages[1000];
    float matricMarks[1000];
    float fscMarks[1000];
    float ecatMarks[1000];

    getStudentDetails(names,ages,matricMarks,fscMarks,ecatMarks,count);

}
void getStudentDetails(string names[],int ages[],float matricMarks[],float fscMarks[],float ecatMarks[],int &count)
{
    string option="Yes";
    while(option!="No")
    {
        cout << "Enter student's name: ";
        cin>> names[count];
        cout << "Enter student's age: ";
        cin >> ages[count];
        cout << "Enter student's matric marks: ";
        cin >> matricMarks[count];
        cout << "Enter student's fsc marks: ";
        cin >> fscMarks[count];
        cout << "Enter student's ecat marks: ";
        cin >> ecatMarks[count];
        cout << "Enter No to stop or Yes to continue Enter: ";
        cin >> option;
        count++;
    }
}