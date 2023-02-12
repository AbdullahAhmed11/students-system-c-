
#include "BaseEntity.cpp"
class Teacher : public BaseEntity
{
private:
    double sallary;

public:
    // seter

    void setSallary(double sallary)
    {
        this->sallary = sallary;
    }
    // geter

    int getSallary()
    {
        return sallary;
    }
};

int main()
{
    cout << "Hello Teacher!" << endl;
}