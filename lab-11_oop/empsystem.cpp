// Employee Record System (Class & Object).

#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id, emp_age, emp_salary, emp_experience;
    string emp_name, emp_role, emp_city, emp_company_name;

    void setData(int id, string name, int age, string role, int salary, string city, int exp, string cname) {
        emp_id = id;
        emp_name = name;
        emp_age = age;
        emp_role = role;
        emp_salary = salary;
        emp_city = city;
        emp_experience = exp;
        emp_company_name = cname;
    }

    void display() {
        cout << "ID: " << emp_id << ", Name: " << emp_name << ", Age: " << emp_age
             << ", Role: " << emp_role << ", Salary: " << emp_salary
             << ", City: " << emp_city << ", Exp: " << emp_experience
             << ", Company: " << emp_company_name << endl;
    }
};

int main() {
    Employee e[5];

    e[0].setData(1, "Ketan", 20, "Developer", 25000, "Bhavnagar", 2, "TCS");
    e[1].setData(2, "Rajvir", 21, "Tester", 20000, "Surat", 1, "Infosys");
    e[2].setData(3, "Dharmesh", 22, "Manager", 40000, "Ahmedabad", 3, "Wipro");
    e[3].setData(4, "Rajendra", 19, "Intern", 15000, "Khari", 0, "Capgemini");
    e[4].setData(5, "Aniket", 23, "Analyst", 30000, "Mahuva", 2, "HCL");

    for (int i = 0; i < 5; i++) {
        e[i].display();
    }
    return 0;
}
