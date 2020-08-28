#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    
    string name;
    int age;

    cout << "Input name" << endl;
    cin >> name; 
    cout << "Hello " <<  name  << '!'<< endl;
    cout << "Input age" << endl;
    cin >> age; 
    cout << "You are " << age << " years old." << endl;

    return 0;
}