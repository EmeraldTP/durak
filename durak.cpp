#include <iostream>
#include <string>
#include "table.h"
using namespace std;


class Logic
{
  private:
  int nrkarta =1;

  
  public:
  int kartid[36];
  
  
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

    string Player1G(){
      string pl1textout;
       Table Table;
      pl1textout =pl1textout + "                    ";
      for (int i = 1;i<=6; i++){
        nrkarta++;
        if ( i == 4){pl1textout =pl1textout + "                    ";}
        pl1textout =pl1textout +Table.kart(kartid[nrkarta])+ " ";
        if ( i == 3){pl1textout =pl1textout + "\n";}}
      pl1textout =pl1textout + "\n";
      return pl1textout;
    }

    string Player2G(){
      string pl2textout;
      Table Table;
      pl2textout=pl2textout+ "                    ";
      for (int i = 1;i<=6; i++){
        nrkarta++;
        if ( i == 4){pl2textout=pl2textout+"                    ";}
        pl2textout=pl2textout+Table.kart(kartid[nrkarta])+ " ";
        if ( i == 3){pl2textout=pl2textout+"\n";}}
      pl2textout=pl2textout+"\n";
      return pl2textout;
    }
    string kalodaG(){
      string kazirka;
      Table Table;
      nrkarta++;
      kazirka=kazirka + "\n\n\n"+ to_string(36-nrkarta) + " " +Table.kart(kartid[nrkarta])+  "       ============================================" + "\n\n\n\n";
      return kazirka;
    }
};

class Grafic
{
  public:

    void Player1(string drawing){
      
      cout << drawing;

    }
    void kaloda(string drawing){
      cout << drawing;
    }

    void Player2(string drawing){
      cout << drawing;
    }
   

    
    void k36ut(){
      Table Table;
      for (int i = 1; i <= 36; i++){
      cout << Table.kart(i) <<"\n";}
    }
    
    void display() {
      system("clear");
    }
};

int main() {
  //int nrkarta,int* kartid
  Logic Logic;
  Grafic Grafic;
  Logic.Lshuffle();
  Grafic.display();
  
  string player1string = Logic.Player1G();
  string player2string = Logic.Player2G();
  string kolodastring = Logic.kalodaG();
  Grafic.Player1(player1string);
  Grafic.kaloda(kolodastring);
  Grafic.Player2(player2string);
}
