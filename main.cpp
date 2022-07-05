#include <iostream>

using namespace std;

class family
{
public :
    string name,gender;
    int age;
public:
    void setName(string n)
    {
        name=n;
    }
    string getName()
    {
        return name;
    }


    void setGender(string g)
    {
        gender = g;
    }
    string getGender()
    {
        return gender;
    }

    void setAge(int a)
    {
        age=a;
    }
    int getAge()
    {
        return age;
    }

    family(string n, string g, int a)
    {
        name=n;
        gender=g;
        age=a;
    }
    void Display()
    {
        cout<<name<<gender<<age;
    }
};
class person : public family
{
public:
    string address;
    float gpa;



   person (string n, string g, int a, string ad, float gp) : family( n, g, a)
   {
   address=ad;
   gpa=gp;
   }


    public:
    void setAddress (string ad)
    {
        address=ad;
    }
    string getAddress()
    {
        return address;
    }

    void setGpa(float gp)
    {
        gpa=gp;
    }
    float getGpa ()
    {
        return gpa;
    }
     void Display()
    {
        cout<<name<<gender<<age<<address<<gpa;
    }

};

int main()
{
    person p1("abdo","male",19,"dardelhbala",2.85);
    p1.Display();

    return 0;
}
