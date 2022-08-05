#include <iostream>
#include <string>
#include "table.h"
using namespace std;


class Logic
{
  private:
  int nrkarta =1;
  int kartid[36];
  
  public:
  int Player1kart;
  int Player2kart;
  
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

    int * Player1kartAdd(int Player1kartF[37]){
      // int Player1kartF[36];
      // for (int i = 1;i<=36;i++){
      //   Player1kartF[i]=Player1kartT[i];
      // }
      int NrKartPlayer1 =0;
      // for (int i=1;i<=36;i++){
      //   cout<<Player1kartF[i];
      // }
      // cout<<"\n";
      


      //Сартеровка
      //int size = sizeof( Player1kartF ) / sizeof( Player1kartF[0] );
      int size = 37;
      for (int i =1;i<= size; i++){
        if (Player1kartF[i] ==0){
          Player1kartF[i]= 99;
        }
      }

      int temp;
      for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            if (Player1kartF[j] > Player1kartF[j + 1]) {
                // меняем элементы местами
                temp = Player1kartF[j];
                Player1kartF[j] = Player1kartF[j + 1];
                Player1kartF[j + 1] = temp;
            }
        }
      }
      for (int i=1;i<=36;i++){
        if (Player1kartF[i] != 99){
          NrKartPlayer1 = i;
          break;
        }
      }
      //cout<< NrKartPlayer1;
      if (NrKartPlayer1 <= 6){
        //cout<< ":(" << NrKartPlayer1;
        for(int i = NrKartPlayer1+1;i <=6; i++){
        //cout <<nrkarta;
        Player1kartF[i]=kartid[nrkarta];
        //cout << kartid[nrkarta];
        nrkarta++;
        }
        //cout <<"\n";
      }
      
      for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            if (Player1kartF[j] > Player1kartF[j + 1]) {
                // меняем элементы местами
                temp = Player1kartF[j];
                Player1kartF[j] = Player1kartF[j + 1];
                Player1kartF[j + 1] = temp;
            }
        }
      }
      // for (int i=1;i<=36;i++){
      //   cout<<Player1kartF[i]<< " ";
      // }
      // cout << "\n";
      // for (int i = 1;i<=36;i++){
      //   Player1kartT[i]=Player1kartF[i];
      // }
      return Player1kartF; 
    }

    string Player1G(int KartPlayer1[37]){
      int Lnrkarta=0;
      string pl1textout;
      Table Table;
      int NrKartPlayer1;

      for (int i=1;i<=36;i++){
        if (KartPlayer1[i] == 99){
          NrKartPlayer1 = i-1;
          break;
        }
      }
      pl1textout =pl1textout + "                    ";
      for (int i = NrKartPlayer1;i>=1; i--){
        Lnrkarta++;
        if ( i == (NrKartPlayer1/2)){pl1textout =pl1textout + "                    ";}
        pl1textout =pl1textout +Table.kart(KartPlayer1[Lnrkarta])+ " ";
        if ( i == ((NrKartPlayer1+2)/2)){pl1textout =pl1textout + "\n";}}
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
  int KartPlayer1[37];
  for (int i = 1;i<=36;i++){
        KartPlayer1[i]=99;
  }
  KartPlayer1[37]=99;
  int KartPlayer2[37];
  for (int i = 1;i<=36;i++){
        KartPlayer2[i]=99;
  }
  KartPlayer2[37]=99;
  // for (int i=1;i<=36;i++){
  //   cout<<KartPlayer1[i];
  // }
  Logic Logic;
  Grafic Grafic;
  Logic.Lshuffle();
  Grafic.display();
  
  string player1string = Logic.Player1G( Logic.Player1kartAdd(KartPlayer1));
  string player2string = Logic.Player1G( Logic.Player1kartAdd(KartPlayer2));
  string kolodastring = Logic.kalodaG();
  Grafic.Player1(player1string);
  Grafic.kaloda(kolodastring);
  Grafic.Player2(player2string);
  //Logic.Player1kartAdd(KartPlayer1);
}
