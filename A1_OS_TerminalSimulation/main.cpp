#include <iostream>
#include "MyTerminal.h"
using namespace std;//This is terminal of Linux commands invoked to work on normal Windows by C++.Be careful also don't enter the commands I already entered them in my code,just enter the files or directories and paths immediately.
int main()
{
    MyTerminal myClass;
    bool senintel=true;
    int choice;
    while(senintel)
    {
        cout<<endl<<"Please choose one of the following: "<<endl;
        cout<<"0)EXIT."<<endl;
        cout<<"1)clear: clear the screen."<<endl;
        cout<<"2)cd:    command."<<endl;
        cout<<"3)ls:    command."<<endl;
        cout<<"4)pwd:   command."<<endl;
        cout<<"5)cp:    command."<<endl;
        cout<<"6)mv:    command."<<endl;
        cout<<"7)rm:    command."<<endl;
        cout<<"8)mkdir: command."<<endl;
        cout<<"9)rmdir: command."<<endl;
        cout<<"10)man:  read a manual page."<<endl;
        cout<<"11)date: display the current date and time."<<endl;
        cout<<"12)echo: display a message on the screen."<<endl;
        cout<<"13)cat:  display files."<<endl;
        cout<<"14)uname: display the machine and operating system name."<<endl;
        cout<<"15)users: list the current login sessions on the system."<<endl;
        cout<<"16)who:   who is currently logged in."<<endl;
        cout<<"17)more and less."<<endl;
        cin>>choice;
        switch(choice)
        {
        case 0:
        {
            senintel=false;
            break;
        }
        case 1:
        {
            myClass.clearScreen();
            break;
        }
        case 2:
        {
            myClass.changeDirectory();
            break;
        }
        case 3:
        {
            myClass.List();
            break;
        }
        case 4:
        {
            myClass.printCurrentDirectory();
            break;
        }
        case 5:
        {
            myClass.Copy();
            break;
        }
        case 6:
        {
            myClass.Move();
            break;
        }
        case 7:
        {
            myClass.Remove();
            break;
        }
        case 8:
        {
            myClass.makeDirectory();
            break;
        }
        case 9:
        {
            myClass.removeDirectory();
            break;
        }
        case 10:
        {
            myClass.readManualPage();
            break;
        }
        case 11:
        {
            myClass.date();
            break;
        }
        case 12:
        {
            myClass.echo();
            break;
        }
        case 13:
        {
            myClass.cat();
            break;
        }
        case 14:
        {
            myClass.uname();
            break;
        }
        case 15:
        {
            myClass.users();
            break;
        }
        case 16:
        {
            myClass.who();
            break;
        }
        case 17:
        {
            myClass.more();
            break;
        }
        default:
        {
            cout<<"Incorrect input try again."<<endl;
            break;
        }
        }

    }
    return 0;
}
