#include <iostream>
#include <cstring>
using namespace std;
class Hero{
    int health;
public:
    char *name;
    char level;


    Hero(){
        cout<<" Default Constructor called.";
        name = new char[100];
    }

    Hero(int health){
        // health = health; //will cause errors in identification of which health so we will use this to target the current object then we will 

        cout<<"this -> "<<this <<endl;
        this-> health = health;
    }

    Hero(int health, char level){
        this-> level = level;
        this-> health = health;
    }

    // copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"Level: "<<this->level<<" ,";
        cout<<"Health: "<<this->health<<" ]";
        cout<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

    void setName(char Name[]){
        strcpy(this->name,Name);
    }
};
int main(){


    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Aswani";
    hero1.setName(name);

    // hero1.print();


    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'S';
    hero1.print();
    hero2.print();

    // Hero suresh(70,'C');
    // suresh.print();

    // Hero ritesh(suresh);//copy constructor
    // ritesh.print();



    














    //creation of Object
    // Hero ramesh;

    // //getter and setter
    // ramesh.setHealth(70);
    // cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;


    // // ramesh.health = 70;
    // ramesh.level = 'A';
    // // cout<<"Health is : "<<ramesh.health<<endl;
    // cout<<"Level is : "<<ramesh.level<<endl;

    /*
    Hero a;
    a.setHealth(80);
    a.setLevel('A');

    cout<<"Level is : "<<a.level<<endl;
    cout<<"Health is : "<<a.getHealth()<<endl;


    //dynamically
    Hero *b = new Hero;
    b->setLevel('B');
    b->setHealth(70);

    cout<<"Level is : "<<(*b).level<<endl;
    cout<<"Health is : "<<(*b).getHealth()<<endl;

    cout<<"Level is : "<<b->level<<endl; //another syntax to derefrence
    cout<<"Health is : "<<b->getHealth()<<endl;

    */


    //statically
    // Hero Ramesh(10);
    // // cout<<"Address of Ramesh: "<<&Ramesh<<endl;
    // // Ramesh.getHealth();

    // Ramesh.print();
    // //dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22,'B');
    

    return 0;
}