#ifndef MYTERMINAL_H
#define MYTERMINAL_H


class MyTerminal
{
public:
    MyTerminal();
    ~MyTerminal();
    void clearScreen();
    void changeDirectory();
    void List();
    void printCurrentDirectory();
    void Copy();
    void Move();
    void Remove();
    void makeDirectory();
    void removeDirectory();
    void readManualPage();
    void date();
    void echo();
    void cat();
    void uname();
    void users();
    void who();
    void more();
};

#endif
