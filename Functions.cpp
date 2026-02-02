#include <iostream>
#include <string>
#include <limits> 

using namespace std;

struct StrInfo {
    string Name;
    string City;
    string Country;
    int Age, M_Salary, Y_Salary;
    char Gender;
    bool Married;
};

void ReadInfo(StrInfo &Info) {
    cout << "Enter Name: " << endl;
    getline(cin, Info.Name);

    cout << "Enter City: " << endl;
    getline(cin, Info.City);

    cout << "Enter Country: " << endl;
    getline(cin, Info.Country);

    cout << "Enter Age: " << endl;
    cin >> Info.Age;

    cout << "Enter Monthly Salary: " << endl;
    cin >> Info.M_Salary;

    cout << "Enter Yearly Salary: " << endl;
    cin >> Info.Y_Salary;

    cout << "Enter Gender: " << endl;
    cin >> Info.Gender;

    cout << "Enter Status (1 for Married / 0 for Single): " << endl;
    cin >> Info.Married;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
} 

void printInfo(StrInfo Info) {
    cout << "\n***********************\n";
    cout << "Name: " << Info.Name << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "City: " << Info.City << endl;
    cout << "Country: " << Info.Country << endl; 
    cout << "Monthly Salary: " << Info.M_Salary << endl;
    cout << "Yearly Salary: " << Info.Y_Salary << endl;
    cout << "Gender: " << Info.Gender << endl;
    cout << "Married: " << Info.Married << endl;
    cout << "***********************\n";
}

void ReadPersonsInfo(StrInfo Persons[15], int& Count) {
    cout << "How many persons?\n";
    cin >> Count;
    cin.ignore(); 

    for(int i = 0; i < Count; i++) {
        cout << "Please Enter Person's " << i + 1 << " Info: \n";
        ReadInfo(Persons[i]);
    }
}

void PrinPersonsInfo(StrInfo Persons[15], int Count) {
    for(int i = 0; i < Count; i++) {
        cout << "Person " << i + 1 << ":" << '\n';
        printInfo(Persons[i]);
    }
}

int main() {
    StrInfo Persons[15];
    int Count = 0;
    
    ReadPersonsInfo(Persons, Count);
    PrinPersonsInfo(Persons, Count);

    return 0;
}