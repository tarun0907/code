#include <bits/stdc++.h>
using namespace std;

//class User;

/*
Create a whats app as following 
 Users having contacts and can chat with any contact
 Messaging in text audio and video 
 Users can see status of all the contacts
 User can post status
 Status can be text and image
*/


class Contact;

class Image{
    private:
        //string imageURL;
    public:
        void seeImage(){
            cout<<" IMAGE "<<endl;
        }
};

class Audio{
    public:
        void hereAudio(){
            cout<<" AUDIO "<<endl;
        }
};

class Text{
    public:
        void seeText(){
            cout<<" HELLO "<<endl;
        }
};



class Status{
    public:
        Image img;
        Text txt;
        
        void getStatus(){
            img.seeImage();
            txt.seeText();
        }
        
};

class Sent{
    public:
        
        Text txt;
        Audio audio;
        void getMsg(){
            cout<<"Sent messages "<<endl;
            txt.seeText();
            audio.hereAudio();
        }
        

};

class Received{
    public:
        Text txt;
        Audio audio;
        
        void getMsg(){
            cout<<"Recieved messages "<<endl;
            txt.seeText();
            audio.hereAudio();
        }
};

class User{
    private:
        pair<string,long> nameNum;

    public:
        Status status;
        vector<Contact*> listContacts;
        Sent sent;
        Received rec;

        User(){
            cout<<"Enter name : ";
            cin>>this->nameNum.first;
            cout<<"Enter number :";
            cin>>this->nameNum.second;
        }

        void getName(){
            cout<<this->nameNum.first<<endl;
        }
        string getNameStr(){
            return this->nameNum.first;
        }
        void getNumber(){
            cout<<this->nameNum.second<<endl;
        }
        void iterateListOfContacts();
        void getDetails(string s);
        void insertContact(Contact* c);
};

class Contact{
    public:
        User u; 
        Contact(){
           // u.getName();
           // u.getNumber();
        }    
        void print_contact(){
            cout<<"Name : ";
            u.getName();
            cout<<endl;
            cout<<"Number :";
            u.getNumber();
            cout<<endl;
            cout<<"Status"<<endl;
            u.status.getStatus();
            cout<<endl;
            u.sent.getMsg();
            u.rec.getMsg();
            cout<<endl;
        } 
};

void User:: iterateListOfContacts(){
    cout<<endl;
    for(int i=0;i<listContacts.size();i++){
        cout<<"Contact No. "<<i+1<<" : ";
        listContacts[i]->print_contact();
    }
}

void User::getDetails(string name){
    int flag=1;
    for(int i=0;i<listContacts.size();i++){
        if(listContacts[i]->u.getNameStr()==name){
            flag=0;
            cout<<"Details of  "<<name<<endl;
            listContacts[i]->print_contact();
        }
    }
    if(flag==1){
    cout<<name<<" is not in your contact list"<<endl;}
    
}

void User:: insertContact(Contact* c){
        listContacts.push_back(c);        
}




int main(){
    
   User tarun;
   cout<<"Contacts details: "<<endl;
   Contact esha;
   esha.u;
   string s;
   tarun.insertContact(&esha);
   cout<<endl;
   cout<<"Enter the name of required contact details : ";
   cin>>s;
   tarun.getDetails(s);


   
    return 0;
}