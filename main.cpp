#include <iostream>
#include <sys/utsname.h>
#include <string>
using namespace std;

//Minh Durbin
//Due date: 2/9/2020
void sysinfo()
{

    cout << "Lab1: part a " << endl;
    struct utsname data; //declare a struct variable
    uname(&data);//calling uname function with the pointer to the struct variable as a parameter
    cout << "System Name - " << data.sysname << endl;
    cout << "Nodename - " << data.nodename << endl;
    cout << "Release - " << data.release << endl;
    cout << "Version - " << data.version << endl;
    cout << "Machine - " << data.machine << endl;
}

int main() {
    //calling sysinfo() function
    sysinfo();
    return 0;
}