#include <bits/stdc++.h>
using namespace std;


class Box{
    private:
        float length;
        float height;
        float width;
        char whichFlute;
        int pin;
        bool pasting;
        bool doubl;
        int GMS;

    public:
        void setLength(int len){
            this->length=len;
        }

        void setHeight(int hei){
            this->height=hei;
        }

        void setWidth(int wid){
            this->width=wid;
        } 

        void setFlute(char flu){
            this->whichFlute=flu;
        }

        void setPin(int pins){
            this->pin=pins;
        }

        void setGMS(int gms){
            this->GMS=gms;
        }

        void setDoubl(bool doubl){
            this->doubl=doubl;
        }

        int getArea(){
            return length*height*width;
        }

        int getPin(){
            if(this->pin==0)
                return 1;
            return this->pin;
        }

        char getFlute(){
            return this->whichFlute;
        }

        int getTotalGMS(){

                int fluteP=0;
                if (this->whichFlute == 'A'){
                    fluteP = 10;
                }
                else if (this->whichFlute == 'B'){
                    fluteP = 30;
                }
                else if (this->whichFlute == 'C'){
                    fluteP = 20;
                }
                else if (this->whichFlute == 'E'){
                    fluteP = 40;
                }
                else if (this->whichFlute == 'F'){
                    fluteP = 50;
                }
                else if (this->whichFlute == 'G'){
                    fluteP = 20;
                }
                else if (this->whichFlute == 'D'){
                    fluteP = 20;
                }
                return fluteP+this->GMS*100;
        }
              

        bool getDuble(){
            return this->doubl;
        }


};



class Universal:public Box{
    private:
        int cost=20;
    public:
        int getCost(int area,int totalGSM,int pin,bool doubl){
            if(pin==1){
                if(doubl==false){
                    return area*totalGSM*this->cost;
                }
                return area*totalGSM*this->cost*3;
            }
            if(doubl==true){
                return area*totalGSM*pin*3;
            }
            if(doubl==false){
                return area*totalGSM*this->cost*3;
            }
            return -1;
        }

};

class AllFlapMeeting:public Box{
    private:
        int cost=30;
    public:
        int getCost(int area,int totalGSM,int pin,bool doubl){
            if(pin==1){
                if(doubl==false){
                    return area*totalGSM*this->cost;
                }
                return area*totalGSM*this->cost*3;
            }
            if(doubl==true){
                return area*totalGSM*pin*3;
            }
            if(doubl==false){
                return area*totalGSM*this->cost*3;
            }
        }
};

class HoneyComb:public Box{
    private:
        int cost=40;
    public:
        int getCost(int area,int totalGSM,int pin,bool doubl){
            if(pin==1){
                if(doubl==false){
                    return area*totalGSM*this->cost;
                }
                return area*totalGSM*this->cost*3;
            }
            if(doubl==true){
                return area*totalGSM*pin*3;
            }
            if(doubl==false){
                return area*totalGSM*this->cost*3;
            }
        }
};

class ReverseTuckIn:public Box{
    private:
        int cost=40;
    public:
        int getCost(int area,int totalGSM,int pin,bool doubl){
            if(pin==1){
                if(doubl==false){
                    return area*totalGSM*this->cost;
                }
                return area*totalGSM*this->cost*3;
            }
            if(doubl==true){
                return area*totalGSM*pin*3;
            }
            if(doubl==false){
                return area*totalGSM*this->cost*3;
            }
        }
};

class TopOpeningSnapLock:public Box{
    private:
        int cost=40;
    public:
        int getCost(int area,int totalGSM,int pin,bool doubl){
            if(pin==1){
                if(doubl==false){
                    return area*totalGSM*this->cost;
                }
                return area*totalGSM*this->cost*3;
            }
            if(doubl==true){
                return area*totalGSM*pin*3;
            }
            if(doubl==false){
                return area*totalGSM*this->cost*3;
            }
        }
};

int main(){
    Universal universal;
    universal.setLength(1);
    universal.setHeight(1);
    universal.setWidth(1);
    universal.setPin(2);
    universal.setGMS(10);
    universal.setDoubl(true);
    universal.setFlute('A');
    int area=universal.getArea();
    int totalGMS=universal.getTotalGMS();
    int pin=universal.getPin();
    bool doubl=universal.getDuble();
    cout<<universal.getCost(area,pin,totalGMS,doubl)<<endl;
    return 0;
}