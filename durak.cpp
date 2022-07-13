#include <iostream>
#include "table.h"
using namespace std;

int kartid[36];
int nrkarta =1;
class Logic
{
  private:
  
  public:
  
  
      void Lshuffle() {
      int kartidsh[36];
    for (int i = 0; i <= 35; i++){
        kartidsh[i+1] = i+1;
        //cout << kartidsh[i];
      }
    // for (int i =1;i<=36;i++){
    //   cout << kartidsh[i]<< " " ; 
    // }
    // cout << "\n";

    srand(time(0));
    int id;
    for (int i =1; i<=36;i++){
        id = (rand() % 36) +1;
        for (int ii=1; ii<=36;ii++){
            
            if (kartidsh[id] == 0){id++;}
            if (id == 37){id =1;}
        }
        kartid[i] = kartidsh[id];
        kartidsh[id] =0;
    }
    // for (int i =1;i<=36;i++){
    //   cout << kartid[i]<< " " ; 
    // }
    // cout << "\n";
    }

    void Player1(){

    }
    void Player2(){

    }
    void kaloda(){

    }
};

class Grafic
{
  public:

    void Player1(){
      
      Logic Logic;
      Table Table;
      cout << "                    ";
      for (int i = 1;i<=6; i++){
        nrkarta++;
        if ( i == 4){cout << "                    ";}
        cout << Table.kart(kartid[nrkarta])<< " ";
        if ( i == 3){cout << "\n";}}
      cout << "\n";
    }
    void kaloda(){
      Table Table;
      nrkarta++;
      cout <<"\n\n\n" <<Table.kart(kartid[nrkarta])<< "           ============================================" << "\n\n\n\n";
    }

    void Player2(){
      Logic Logic;
      Table Table;
      cout << "                    ";
      for (int i = 1;i<=6; i++){
        nrkarta++;
        if ( i == 4){cout << "                    ";}
        cout << Table.kart(kartid[nrkarta])<< " ";
        if ( i == 3){cout << "\n";}}
      cout << "\n";
    }
   

    
    void k36ut(){
      Table Table;
      for (int i = 1; i <= 36; i++){
      cout << Table.kart(i) <<"\n";}
    }
    
    void display() {
      Logic Logic;
      system("clear");
      Logic.Lshuffle();
       for (int i = 1; i <= 36; i++){
         //cout << Logic.kartidsh[i-1] << " ";
      }
      Player1();
      kaloda();
      Player2();
    }
};

int main() {
   Logic t1;
    Grafic t;
   // t1.Lshuffle();
    t.display();
   
    
}