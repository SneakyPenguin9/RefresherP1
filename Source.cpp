#include <iostream>
#include <fstream>
#include <string>

using namespace std;

template < typename T > void bubble_sort(T a[], int n)
{
    int i, j;
    //t temp;
    T temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    string line;
    int x = 1;
    /*ofstream write("Refresher.txt");
    write << "997196478 StroLLer 25 134.78" << endl << "123123123 cake 55 2.78" << endl;*/
    ifstream myfile("Refresher.txt");
    switch (x) {
        case 1:
             if (myfile.is_open())
            {
                 while (getline(myfile, line))
                {
                     cout << line << '\n';
                   }
                myfile.close();
            }

             else cout << "Unable to open file";
             break;
        case 2:

    }

    int x = 2;
    switch (x)
    {
    case 1: printf("Choice is 1");
        break;
    case 2: printf("Choice is 2");
        break;
    case 3: printf("Choice is 3");
        break;
    default: printf("Choice other than 1, 2 and 3");
        break;
    }
}
