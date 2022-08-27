#include "MyTerminal.h"
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <sys/stat.h>
#include<cstring>
using namespace std;

MyTerminal::MyTerminal()
{
}
void MyTerminal::clearScreen()
{
    system("CLS");
}
void MyTerminal::changeDirectory()//enter only the file name like this , "hello.txt".If you want to go back just enter .. without cd.I have already entered it in my code
{
    string newDirectory;
    cin.ignore();
    getline(cin,newDirectory);
    SetCurrentDirectory(newDirectory.c_str());//It can handle both absolute and relative paths.
    for(int i=0;i<newDirectory.length();i++)
    {
        if(isspace(newDirectory[i]))
            cout<<"Too many arguments error."<<endl;
    }
}
void MyTerminal::List()//it can take many arguments ,but if you don't want to pass arguments then press enter key
{
    string myFiles;
    string myInput="dir ";
    cin.ignore();
    getline(cin,myFiles);
    myInput+=myFiles;
    system(myInput.c_str());//Be careful in Windows -a=/A and -l=/L .

}
void MyTerminal::printCurrentDirectory()
{
    system("cd");
}
void MyTerminal::Copy()//enter only the file name like this , "hello.txt",if two files then, "hello.txt" "hello2.txt",so separate by space bar
{
    string myFiles;
    string myInput="copy ";
    cin.ignore();
    getline(cin,myFiles);
    myInput+=myFiles;
    system(myInput.c_str());
}
void MyTerminal::Move()//enter only the file name like this , "hello.txt",if two files then, "hello.txt" "hello2.txt",so separate by space bar
{
    string myFiles;
    string myInput="move ";
    cin.ignore();
    getline(cin,myFiles);
    myInput+=myFiles;
    const char*x=myInput.c_str();
    system(x);
}
void MyTerminal::Remove()//enter only the file name like this , "hello.txt"
{
    string myFiles;
    string myInput="del ";
    cin.ignore();
    getline(cin,myFiles);
    myInput+=myFiles;
    const char*x=myInput.c_str();
    system(x);
}
void MyTerminal::makeDirectory()//enter only the folder name like this , "hello.txt"
{
    string myFiles;
    string myInput="mkdir ";
    cin.ignore();
    cin>>myFiles;
    myInput+=myFiles;
    const char*x=myInput.c_str();
    system(x);
}
void MyTerminal::removeDirectory()//enter only the folder name like this , "hello.txt"
{
    string myFiles;
    string myInput="rmdir ";
    cin.ignore();
    cin>>myFiles;
    myInput+=myFiles;
    const char*x=myInput.c_str();
    system(x);
}
void MyTerminal::readManualPage()
{
    system("help");
}
void MyTerminal::date()
{
    system("date");
}
void MyTerminal::echo()//enter only the text  like this , "hello"
{
    string myFiles;
    string myInput="echo ";
    cin.ignore();
    getline(cin,myFiles);
    myInput+=myFiles;
    const char*x=myInput.c_str();
    system(x);
}
void MyTerminal::cat()//enter only the file name like this , "hello.txt"....If you want to use grep be careful in windows it is called findstr.
{
    string myFiles;
    string myInput="type ";
    cin.ignore();
    getline(cin,myFiles);
    myInput+=myFiles;
    const char*x=myInput.c_str();
    system(x);
}
void MyTerminal::uname()
{
    system("systeminfo");
}
void MyTerminal::users()
{
    system("net user");
}
void MyTerminal::who()
{
    system("whoami");
}
void MyTerminal::more()//enter only the file name like this , "hello.txt"
{
    string myFiles;
    string myInput="more ";
    cin.ignore();
    getline(cin,myFiles);
    myInput+=myFiles;
    const char*x=myInput.c_str();
    system(x);
}
MyTerminal::~MyTerminal()
{
}
