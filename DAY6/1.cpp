#include <bits/stdc++.h>
using namespace std;

class Vehicle{
    protected:
        string model;
        string color;
        int makeYear;
        bool driver;
    public:
        void setColor(string vehicleColor){
            this->color=vehicleColor;
        }
        void setMake(int vehicleMake){
            this->makeYear=vehicleMake;
        }
        string getColor(){
            return this->color;
        }
        int getMake(){
            return this->makeYear;
        }
};

class Car:public Vehicle
{
    public:
    void getDetail(){
        cout<<"This car is of "<<getColor()<<" color and was made in "<<getMake()<<endl;
    }
        
};

class Aircraft:public Vehicle
{
    public:
    void getDetail(){
        cout<<"This aircraft is of "<<getColor()<<" color and was made in "<<getMake()<<endl;
    }
        
};


class MP
{
protected:
    int spending_limit;
    int spent;
    string role;
    string constitution;

public:
    Car car;
    MP()
    {
        this->spending_limit = 10000;
        this->role = "MP";
        this->spent=1000000;
    }
    void setC(Car c)
    {
        this->car=c;
    }

    Car getC(){
        return this->car;
    }

    string getRole()
    {
        return this->role;
    }

    int getSpent(){
        return this->spent;
    }

    int getspending_limit(){
        return this->spending_limit;
    }
};

class Minister : public MP
{
public:
    Minister()
    {
        this->spending_limit = 1000000;
        this->role = "Minister";
        this->spent=10000000;

    }
};

class PM : public MP
{
    private:
        bool permission;    
    public:
        Aircraft airCraft;

        PM()
        {
            this->spending_limit = 10000000;
            this->spent=1000000;
            this->role = "PM";
        }

        void setPermission(){
            this->permission=true;
        }

        bool getPermission(){
            return this->permission;
        }
        
  
};

class Commisioner
{
public:
    void arrest(MP mp,PM pm)
    {
        if (mp.getRole() == "MP" && mp.getspending_limit()<mp.getSpent())
        {
            cout << "Arrested" << endl;
        }
        else if (mp.getRole() == "Minister"  && mp.getspending_limit()<mp.getSpent() && pm.getPermission()==true)
        {
            cout << "MP is arrested" << endl;
        }
        else if(mp.getRole() == "PM")
        {
            cout << "PM can't be arrested" << endl;
        }
        else
        {
            cout << "can't be arrested" << endl;
        }
    }

};

int main()
{
    PM pm;
    Commisioner c;
    pm.car.setColor("red");
    pm.car.setMake(2022);
    pm.car.getDetail();
    pm.airCraft.setColor("white");
    pm.airCraft.setMake(2019);
    pm.airCraft.getDetail();
    pm.setPermission();
    c.arrest(pm,pm);
    Minister mp;
    c.arrest(mp,pm);
    
    return 0;
}   
