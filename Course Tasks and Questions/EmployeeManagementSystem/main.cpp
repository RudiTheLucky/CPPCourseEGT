// Main function
//

#include <iostream>
#include <string>
#include "Employee.h"
#include "Department.h"


using namespace std;

int main()
{
    Employee e1("EmpName1", 1, "Department Director");
    Employee e2("EmpName2", 2, "Project Manager");
    Employee e3("EmpName3", 3, "Team Lead");
    Employee e4("EmpName4", 4, "Programmer");
    Employee e5("EmpName5", 5, "Programmer");

    Employee empArr[]{ e1, e2, e3, e4, e5 };

    Department d1("Department 1");
    Department d2("Department 2");

    Employee* ePtr1 = &e1;
    Employee* ePtr2 = &e2;

    d1.addEmployee(ePtr1);
    d1.addEmployee(ePtr2);

    d1.displayEmployees();

    return 0;
}
