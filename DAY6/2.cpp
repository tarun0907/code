#include<bits/stdc++.h>
using namespace std;


class Battery
{
    private:
        int capacity;
    public:
        Battery(){
            cout<<" has battery, ";
        }

        void setCapacity(int cap){
            this->capacity = cap;
        }

        void getCapacity(){
            cout<<this->capacity;
        }
};

class Inverter
{
    private:
        int current;
        int operatingVoltage;
    public:
        void setcurrentVolt(int c,int v){
            this->current=c;
            this->operatingVoltage=v;
        }

        void getcurrentVolt(){
            cout<<this->current;
            cout<<this->operatingVoltage;
        }

        void getOperatingVoltade(int c,int v){
            cout<<c*v<<endl;
        }


};


class SolarPanel
{
    private:
        int output;
    public:
        SolarPanel(){
            cout<<" has solar panel, ";
        }

        void setOutput(int o){
            this->output=o;
        }

        void getOutput(){
            cout<<this->output<<endl;
        }
};

class Solar:public Inverter
{
    public:
        SolarPanel sp;
        Battery bt;

        Solar(){
            cout<<" solar with battery, ";    
        }

};

class SolarWithoutBat:public Inverter
{
    private:
        string grid;
    public:
        SolarPanel sp;

        SolarWithoutBat(){
            cout<<" solar without battery, ";
        }

        void setGrid(){
            this->grid=" grid present, ";
        }

        void getGrid(){
            cout<<this->grid;
        }



};

class NonSolar:public Inverter
{
    public:
        Battery bat;
    
        NonSolar(){
            cout<<" non solar, ";
        }
    
};

class PCU:public Solar
{
    public:
      PCU(){
          cout<<"This is PCU ";
      }  
    
};

class Regalia:public Solar
{
    public:
        Regalia(){
            cout<<"This is Regalia ";
        }
        
    
};

class GTI:public SolarWithoutBat
{
    public:
        GTI(){
            cout<<"This is GTI ";
        }
};

class iCruze:public NonSolar
{
    public:
        iCruze(){
            cout<<"This is iCruze ";
        }
};

class Zelio
{
    public:
        Zelio(){
            cout<<"This is Zelio ";
        }
};

int main()
{
    PCU p;
    cout<<endl;
    

    return 0;
}