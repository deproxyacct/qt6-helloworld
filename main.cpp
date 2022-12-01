#include <QCoreApplication>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

#include <QTextStream>
#include <QDebug>

void do_cpp()
{
    std::string name;
    std::cout << "Please enter your name" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;
}

void do_qt()
{
    QTextStream qin(stdin);
    //QTextStream qout(stdout);
    QTextStream sampleOut(stdout);

    sampleOut << "Please enter your name." << Qt::endl;
    QString name = qin.readLine();
    sampleOut << "Hello there " << name << "!" << Qt::endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //do_cpp();
    do_qt();

    return a.exec();
}
