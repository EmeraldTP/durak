#include <iostream>
#include <algorithm> 
#include "table.h"
#include <array>        
#include <random>       
#include <chrono>
using namespace std;



class Logic
{
  private:
  
  int * kartid;
  public:
  int nrkarta;
  std::array<int,36> kartidsh ;

      void Lshuffle() {
      for (int i = 0; i <= 35; i++){
        kartidsh[i] = i+1;
        //cout << kartidsh[i];
      }
      cout << "\n";
     //(rand() % 36) +1
      unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
      shuffle (kartidsh.begin(), kartidsh.end(), default_random_engine(seed));
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
      Logic.nrkarta =1;
      cout << Table.kart(Logic.kartidsh[1]);
    }
    void Player2(){

    }
    void kaloda(){

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
      Player1();
      }
    }
};

int main() {
    Grafic t;
    t.display();
    Logic t1;
    
}