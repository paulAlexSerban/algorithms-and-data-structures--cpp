#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age {0};
    double hourly_wage {23.50};
    
    cin >> name;
    cin >> age;
    
    cout << name << " " << age << " " << hourly_wage;

    return 0;
}