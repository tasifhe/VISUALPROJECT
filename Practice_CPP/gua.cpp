#include<iostream>
    using namespace std;

    class Employee
    {
        public: 
        string designation;
        
        protected:
        string name;
        string employee_Id;
        string deptName;
       

        public:
        void displayEmployeeInfo(string name , string employee_Id, string deptName, string designation)
        {
            cout << name << endl;
            cout << employee_Id << endl;
            cout << deptName <<endl;
            cout << designation << endl;
        }
    };
    class Student
    {
        protected:
        string name;
        string ID;
        string deptName;

        private:
        long secKey;

        public:
        void setSecKey(long key)
        {
            secKey = key;
        }
        int getSecKey()
        {
            return secKey;
        }

        void displayStudentInfo( string name, string ID, string deptName)
        {
            cout << name << endl;
            cout << ID <<endl;
            cout << deptName << endl;
        }

    };
    class Lecturer : public Employee
    {
        private:
        double baseSalary;
        int monthDays;
        int absent;
        float allowance;
        double netSalary;


         public:
          void setSalary(double bSalary)
        {
            baseSalary = bSalary;
        }

        public:
        void setDeduction(int absent, int monthDays)
        {
           this->absent = absent;
           this-> monthDays = monthDays;
        }
        double getDeduction()
        {
            return absent *  (baseSalary / monthDays);
        }

          public:
        void setAllowance(float allow)
        {
            allowance = allow;
        }
        int getAllowance()
        {
            return (allowance / 100) * baseSalary;
        }

        public:
        void grossSalary()
        {
            cout << "Gross Salary of the Lecturer -- " << baseSalary + getAllowance() << endl;
        }

        public:
        void net_Salary()
        {
            netSalary = baseSalary + getAllowance() - getDeduction() ;
            cout << "Net Salary -- " << netSalary << endl;
        }

    };

    class Professor : public Employee
    {
         private:
        double baseSalary;
        int monthDays;
        int absent;
        float allowance;
        double netSalary;

         public:
          void setSalary(double bSalary)
        {
            baseSalary = bSalary;
        }

        public:
        void setDeduction(int absent, int monthDays)
        {
           this->absent = absent;
           this-> monthDays = monthDays;
        }
        double getDeduction()
        {
            return absent *  (baseSalary / monthDays);
        }

          public:
        void setAllowance(float allow)
        {
            allowance = allow;
        }
        int getAllowance()
        {
            return (allowance / 100) * baseSalary;
        }
        
        public:
        void grossSalary()
        {
            cout << "Gross Salary of the Professor -- " << baseSalary + getAllowance() << endl;
        }

        public:
        void net_Salary()
        {
            netSalary = baseSalary + getAllowance() - getDeduction() ;
            cout << "Net Salary -- " << netSalary << endl;
        }
    };

    class AProfessor : public Employee
    {
               private:
        double baseSalary;
        int monthDays;
        int absent;
        float allowance;
        double netSalary;
        double deduct;

         public:
          void setSalary(double bSalary)
        {
            baseSalary = bSalary;
        }

        public:
        void setDeduction(int absent, int monthDays)
        {
           this->absent = absent;
           this-> monthDays = monthDays;
        }
        double Deduction()
        {
           return deduct =  absent*(baseSalary/monthDays);
        }

          public:
        void setAllowance(float allow)
        {
            allowance = allow;
        }
        int getAllowance()
        {
            return (allowance / 100) * baseSalary;
        }
        
        public:
        void grossSalary()
        {
            cout << "Gross Salary of the Assistant Professor -- " << baseSalary + getAllowance() << endl;
        }

        public:
        void net_Salary()
        {
            netSalary = baseSalary + getAllowance() - Deduction() ;
            cout << "Net Salary -- " << netSalary << endl;
        }
    };

    class TAssistant : public Employee, public Student
    {
        public:
        void displayEmployeeInfo(string designation)
        {
            cout << designation << endl;
        }
        void displaySecretKeyCode()
        {
            cout << "Secret Key with real ID" << endl;
            cout << getSecKey() << " 213071026" << endl;
        }
    };


    int main()
    {
        Lecturer l;
        l.displayEmployeeInfo("NAME: Abul Hasanat", "ID: 1452644", "Dept: CSE / CSIT", "Lecturer");
        l.setSalary(40000);
        l.setAllowance(7);
        l.grossSalary();
        l.setDeduction(5,29);
        l.net_Salary();
        cout << "Deducted -- " << l.getDeduction() << endl;

        Professor p;
        cout << " " << endl;
        p.displayEmployeeInfo("NAME: Dr. Shamsul Haque", "ID: 1454458", "Dept: CSE / CSIT", "Professor");
        p.setSalary(150000);
        p.setAllowance(12);
        p.grossSalary();
        p.setDeduction(2, 31);
        p.net_Salary();
        cout << "Deducted -- " << p.getDeduction() << endl;

        AProfessor ap;
        cout << " " << endl;
        ap.displayEmployeeInfo("NAME: Md. Kabir Shah", "ID: 1450002", "Dept: CSE / CSIT", "Assistant Professor");
        ap.setSalary(80000);
        ap.setAllowance(10);
        ap.grossSalary();
        ap.setDeduction(4, 31);
        ap.net_Salary();
        cout << "Decreased -- " << ap.Deduction() << endl;

        TAssistant ta;
        cout << " " << endl;
        ta.displayStudentInfo("NAME: MAHIN" , "ID: 2005142", "Dept: CSE / CSIT");
        ta.displayEmployeeInfo("Teacher Assistant");
        ta.setSecKey(1123);
        ta.displaySecretKeyCode();
    }