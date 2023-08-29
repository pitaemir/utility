
#include "edflib.h"
#include "edflib.c"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


void gcc_edflib_compilation()
{
    system("gcc -Wall -Wextra -Wshadow -Wformat-nonliteral -Wformat-security -D_LARGEFILE64_SOURCE -D_LARGEFILE_SOURCE test_edflib.c edflib.c -lm -o test_edflib");
    cout << "lib compilation completed" << endl;
}

void test_edf_1()
{
    system("./test_edflib 'Lombar - Dia 22.12.01 as 15.23.37.edf' 1");
    cout << "test 1 called" << endl;
}

void test_edf_2()
{
    system("./test_edflib 'Lombar - Dia 22.12.01 as 15.23.37.edf' 2");
    cout << "test 2 called" << endl;
}

void test_edf_3()
{
    system(".\test_edflib 'Lombar - Dia 22.12.01 as 15.23.37.edf' 3");
    cout << "test 3 called" << endl;
}

void test_edf_4()
{
    system(".\test_edflib 'Lombar - Dia 22.12.01 as 15.23.37.edf' 4");
    cout << "test 4 called" << endl;
}

int main () {
    string ln;
    ifstream testFile ("Lombar.txt");
    ofstream of;


     while(true)
    {
        cout << "-------------------------------------------------------" << endl;
        cout << "1. run gcc -Wall -Wextra -Wshadow -Wformat-nonliteral -Wformat-security -D_LARGEFILE64_SOURCE -D_LARGEFILE_SOURCE test_edflib.c edflib.c -lm -o test_edflib" << endl;
        cout << "2. run ./test_edflib" << endl;
        cout << "-------------------------------------------------------" << endl;

        cout << "Enter an option: ";
        char opc;
        cin >> opc;
        if(opc == '1')
        {
            gcc_edflib_compilation();

            continue;
        }
        if(opc == '2')
        {
            test_edf_2();
            continue;
        }
        if(opc == '0')
        {
         
            break;
        }        
    }

    /*if (testFile.is_open()){

        while ( getline (testFile, ln) ){

            cout << ln << '\n';
        }
        testFile.close();
    } else cout << "File is not there on the given path";


*/
    
    return 0;
}