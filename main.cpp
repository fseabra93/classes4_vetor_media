/*Goal: look at helper functions in classes*/

#include "main.hpp"

int main()
{
    Student s1;
    s1.setId(3232);
    s1.setGrade(0,85);
    s1.setGrade(1, 80);
    s1.setGrade(2,98);
    s1.setGrade(3,65);
    s1.setGrade(4,90);
    s1.printInfo();
    cout<<"avg = "<<s1.getAvg();
    cout<< endl;

    Student s2;
    s2.setId(1010);
    s2.setGrade(0,70);
    s2.setGrade(1, 60);
    s2.setGrade(2,56);
    s2.setGrade(3,45);
    s2.setGrade(4,73);
    s2.printInfo();
    cout<<"avg = "<<s2.getAvg();
    cout<< endl;
  
    return 0;
}
