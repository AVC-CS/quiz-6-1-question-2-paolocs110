#include <iostream>
#include <fstream>
using namespace std;

/***************************************************
 * Code your program here
 ***************************************************/

int writeFile(string filename) {
    ofstream ofs;

    ofs.open(filename);
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    ofs << numEmployees;
    for (int i = 0; i < numEmployees; i++) {
        int empID;
        string empName;
        string depName; 
        double salary;

        ofs << endl;
        cout << "Enter the employee " << i+1 << "'s ID: ";
        cin >> empID;
        cout << "Enter the employee's name: ";
        cin >> empName;
        cout << "Enter the department name: ";
        cin >> depName;
        cout << "Enter the salary: ";
        cin >> salary;

        ofs << empID << " " << empName << " " << depName << " " << salary;
    }
    return numEmployees;
}

int readFile(string filename) {
    ifstream ifs;

    ifs.open(filename);
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

	int numEmployees;
	ifs >> numEmployees;

	string empName, depName;
	int empID, salary;

    double totalSalaries;
    double avgSalary;

    cout << "ID " << "Name " << "Department " << "Salary" << endl;


	for(int i=0; i < numEmployees; i++) {
		ifs >> empID >> empName >> depName >> salary;

		totalSalaries += salary;

		cout << empID << " " << empName << " " << depName << " " << salary << endl;
		
	}
    
    ifs.close();
    return numEmployees;
}