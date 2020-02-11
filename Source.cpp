#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;
    /*ofstream write("Refresher.txt");
    write << "997196478 StroLLer 25 134.78" << endl << "123123123 cake 55 2.78" << endl;*/
    ifstream myfile("Refresher.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";
}