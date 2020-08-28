#include <iostream>
#include <string>
using namespace std;
/**
 * @file: main.cpp
 * @author: Liam Speakman
 * @date: August 28, 2020 
 * @brief: asks for name and age and gives personalized greeting.
 * 
 */
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