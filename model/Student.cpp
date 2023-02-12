#include <bits/stdc++.h>
using namespace std;
#include "BaseEntity.cpp"

class Student : public BaseEntity
{
private:
    double gpa;

public:
    // seter

    void setGba(double gpa)
    {
        this->gpa = gpa;
    }
    // geter

    int getGpa()
    {
        return gpa;
    }
};
int main()
{
    cout << "Hello Student\n";
    return 0;
}