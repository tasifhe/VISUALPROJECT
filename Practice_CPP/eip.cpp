#include<iostream>
using namespace std;
//employee management
class Employee
{
    public:

    string Employee_id;
    string Designation;
    string Department_name;
    int absent;

    public:
    void setAbsentDays(double abs)
    {
        absent = abs;
    }
    int getAbsentDays()
    {
        return absent;
    }

};

class Lecturer : public Employee
{
    private:
    double baseSalary;
    float allowance;
    double perDaySalary = 1250.124;

    public:
    void setSalary(double bSalary)
    {
        baseSalary = bSalary;
    }
    double getSalary()
    {
        return baseSalary  ;
    }

    public:
    void setAllowancePercentage(double alowance)
    {
        this->allowance = allowance;
    }
    double getAllowance()
    {
        return baseSalary * allowance;
    }

    public:
    double grossSalary()
    {
        return baseSalary + getAllowance();
    }

    double deduction()
    {
        return getAbsentDays() * perDaySalary ;
    }

    public:
    double netSalary()
    {
        return grossSalary() - deduction();
    }
};

int main()
{
    Lecturer l;
    l.Employee_id = "12544" ;
    cout << "Employee ID"<< 1.Employee_id << endl;
    l.setSalary(400);
    l.setAbsentDays(5);
    l.setAllowancePercentage(0.07);
    cout << "Gross Salary -- " << 1.grossSalary() << endl;
    cout << "Net Salary -- " << 1.netSalary() << endl;
    // l.grossSalary();
    // l.netSalary();
}
