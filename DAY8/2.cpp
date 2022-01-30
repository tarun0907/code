#include <bits/stdc++.h>
using namespace std;

/*
You have to create a program for ATM Which would have certain defined denominations of notes : 100 ,200, 500, and 2000 INR.
Now you have to design your ATM in such a way that at any time ATM can be top-up with any required domination like I can add 41000 as (2000 x 20) + (500 x 2) notes
Your ATM should have a function to withdraw cash , input can be any amount:
Use cases for withdraw as below:
1: if amount is not present show error insufficient balance
2: if amount is not in the factor of available denominations show error to ask for multiple of available denomination
3: first largest denomination should be used than smaller : like if I opt for 2300 rs, amount dispatched should be (2000 x 1 ) + (200 x 1) + (100 x 1)
4.b: if any denomination is not there like suppose you don’t have 2000 notes left in ATM , then, amount dispatched should be (500 x 4) +  (200 x 1) + (100 x 1)
Next step: it can be done by Modi Ji, that older denomination is not valid in case of demonetization, like 2000 Notes are banned and new 5000 notes are legal , so you code should be like you don’t need to change much of it, 
*/

class rs100
{
    private:
        int amount=100;
        int count;
    public:
        void setCount(int c){
            this->count=c;
        }

        int getValue(){
            return this->amount;
        }

        int getCount(){
            return this->count;
        }
        
};

class rs200
{
    private:
        int amount=200;
        int count;
    public:
        void setCount(int c){
            this->count=c;
        }

        int getValue(){
            return this->amount;
        }

        int getCount(){
            return this->count;
        }
    
};

class rs500
{
    int amount=500;
    int count;
    public:
        void setCount(int c){
            this->count=c;
        }

        int getValue(){
            return this->amount;
        }

        int getCount(){
            return this->count;
        }
};

class rs2000
{
    int amount=2000;
    int count;
    public:
        void setCount(int c){
            this->count=c;
        }

        int getValue(){
            return this->amount;
        }

        int getCount(){
            return this->count;
        }
};

class atm{
    public:
    rs100 r1;
    rs200 r2;
    rs500 r3;
    rs2000 r4;

    void getDetails(){
        cout<<"100 : "<<r1.getCount()<<endl;
        cout<<"200 : "<<r2.getCount()<<endl;
        cout<<"500 : "<<r3.getCount()<<endl;
        cout<<"2000 : "<<r4.getCount()<<endl;
    }
    int getAmount(){
        int sum=r1.getValue()*r1.getCount() +r2.getValue()*r2.getCount()+r3.getValue()*r3.getCount()+r4.getValue()*r4.getCount();
        return sum; 
    }
    void credit_amount(){
        int a,b,c,d;
        cout<<"Enter count of 100rs note :";cin>>a;
        r1.setCount(r1.getCount()+a);
        cout<<"Enter count of 200rs note :";cin>>b;
        r2.setCount(r2.getCount()+b);
        cout<<"Enter count of 500rs note :";cin>>c;
        r3.setCount(r3.getCount()+c);
        cout<<"Enter count of 2000rs note :";cin>>d;
        r4.setCount(r4.getCount()+d);        
    }

};
class Customer
{
    private:
        int accountBalance;
        int accountNo;
    public:
    Customer(int accBal,int accNo)
    {
        this->accountBalance=accBal;
        this->accountNo=accNo;   
    }
    void getBalance(){
     cout<<this->accountBalance<<endl;
    }
    void withdraw(int wid, atm &a){
        int x=wid;
        if(this->accountBalance<wid){
            cout<<"Less amount in the account!! ";
            return;
        }
        if(wid>a.getAmount()){ 
            cout<<"Insufficient Balance in the ATM !!";
            return;
        }
        if(wid%100 !=0) {
            cout<<" Please withdraw in the multiple of available denomination (rs 100)!";
            return;
        }
        
        int dem[]={a.r1.getValue(),a.r2.getValue(),a.r3.getValue(),a.r4.getValue()}; //dem=[100,200,500,2000]
        int noteCounter[] ={a.r1.getCount(),a.r2.getCount(),a.r3.getCount(),a.r4.getCount()};
        int i=3;
        while(wid>=0 && i>-1){
           // cout<<i<<" "<<wid<<endl;
            if(dem[i]<=wid){
                if(noteCounter[i]>=(wid/dem[i])){
                    
                     if(i==0){
                         a.r1.setCount(a.r1.getCount()-(wid/dem[i]));
                     }
                     else if(i==1){
                         a.r2.setCount(a.r2.getCount()-(wid/dem[i]));
                     }
                     else if(i==2){
                         a.r3.setCount(a.r3.getCount()-(wid/dem[i]));
                     }
                     else if(i==3){
                         a.r4.setCount(a.r4.getCount()-(wid/dem[i]));
                     }

                      wid-=(wid/dem[i])*dem[i];
                }
                else{
                    
                    if(i==0){
                         a.r1.setCount(a.r1.getCount()-noteCounter[i]);
                     }
                     else if(i==1){
                         a.r2.setCount(a.r2.getCount()-(noteCounter[i]));
                     }
                     else if(i==2){
                         a.r3.setCount(a.r3.getCount()-(noteCounter[i]));
                     }
                     else if(i==3){
                         a.r4.setCount(a.r4.getCount()-(noteCounter[i]));
                     }
                     wid-=noteCounter[i]*dem[i];
                }
                i--;
                
            }
            else{
                i--;
            }

        }
        if(i==-1 && wid!=0)  {cout<<" Please withdraw in the multiple of available denomination (rs 100)!";return;}
        this->accountBalance=this->accountBalance-x;
      //  cout<<"Withdrawn !!" ;
    }
};

int main(){
    atm a;int amt;
    a.r1.setCount(0);
    a.r2.setCount(0);
    a.r3.setCount(0);
    a.r4.setCount(0);

    a.credit_amount();
    cout<<"Details:";
    a.getDetails();
    cout<<"Balance in ATM :"<<a.getAmount()<<endl;
    Customer c(3000,1);
    cout<<"Customer balance: ";
    c.getBalance();
    cout<<endl;
    cout<<"Enter amount to be withdrawn :";cin>>amt;
    c.withdraw(amt,a);  
    cout<<endl;
    cout<<"Amount in ATM after withdraw :";  
    cout<<a.getAmount()<<endl;
    a.getDetails();
    cout<<"Customer balance: ";
    c.getBalance();
    cout<<endl;

    return 0;
}
