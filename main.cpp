#include <iostream>
#include <fstream>

using namespace std;

void emplName(){

    string Name,ID,salary;

    std::ofstream MyFile;

    cout << "Enter the Employee Name : ";
    cin >> Name;
    cout << "\n Enter the Employee ID number : ";
    cin >> ID;
    cout << " \n Enter the Employee's Current Salary : ";
    cin >> salary;

    MyFile.open("salary.txt", ios::app);
    MyFile << Name + " " << ID + " " << salary + " " << endl;
    MyFile.close();
    }

void emplID(){

    string Name[100];
    string ID[100];
    string salary[100];
    string IDr;
    int b;

    b = 0;

    ifstream ReadFile("salary.txt",ios::in);

    cout << "Enter ID : ";
    cin >> IDr;

    while ( !ReadFile.eof() ){

    ReadFile >> Name[b] >> ID[b] >> salary[b];
    b++;
    }

    for (int i = 0; i < b ; i++) {

     if ( IDr == ID[i]){

        cout << "\n The Employee you found is: " + Name[i] << endl;
        cout<< Name[i] + "'s ID is " + ID[i] + " and earns R" + salary[i] << endl;

    }

    }

    }

int main()
{
    int num;
    bool bAns;

    bAns = true;

    while ( bAns == true){
    ofstream MyFile;

    cout << "Welcome to Umnandi Consulting Employee System." << endl;
    cout << "         Please select an option" << endl;
    cout << "************************************************" << endl;
    cout << "1 Enter new Staff Details" << endl;
    cout << "2 Search ID" << endl;
    cout << "3 Exit Program" << endl;

    cin>> num;

    switch(num){

      case 1:

        emplName();
        cout << "************************************************" << endl;

      case 2:

        emplID();
        cout << "************************************************" << endl;

      case 3:

        return 0;
    }

    }

    return 0;

}


