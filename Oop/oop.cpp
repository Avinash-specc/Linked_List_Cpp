#include <iostream>
using namespace std;

class Hero
{
    public:
    //properties
    int health;

    Hero(){
        cout<<"Constructor Called "<<endl;
    } //It will overrule the default constructor

    Hero(int health){
        this -> health=health;
    }

    Hero(int health,char level){
        this -> health=health;
        this -> level= level;
    }

    private:
    char level;
    // void print(){
    //     cout<<level<<endl;
    // }

    
    public:

    void print(){
        cout<<level<<endl;
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
    void setLevel(char l){
        level = l;
    }

};

int main()
{
    //creation of object
    // Hero Ramesh;

    // cout<<"Size of Ramesh is : "<<sizeof(Ramesh)<<endl;

    // //Read about padding and greedy element.

    // cout<<"Health is : "<<Ramesh.health<<endl;
    // cout<<"Level is : "<<Ramesh.getLevel()<<endl;
    // // cout<<"size : "<<sizeof(h1);
    // Ramesh.setHealth(90);

    // cout<<"Updated Health is : "<<Ramesh.health; 


    //Static allocation

    /*
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"Level is : "<<a.getLevel()<<endl;
    cout<<"Health is : "<<a.getHealth()<<endl;
    a.setHealth(80);
    a.setLevel('B');

    //dynamically allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"Level is : "<<b->getLevel()<<endl;
    cout<<"Health is : "<<b->health<<endl;


    cout<<"Level is : "<<b->getLevel()<<endl;
    cout<<"Health is : "<<b->health<<endl;

    */


    Hero Ramesh(10,'B');
    cout<<Ramesh.getHealth()<<endl;;
    cout<<Ramesh.getLevel()<<endl;


    Hero temp(11,'B');
    return 0;
}