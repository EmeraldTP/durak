#include <iostream>
using namespace std;

int main() {
    int kartidsh[36];
    for (int i = 0; i <= 35; i++){
        kartidsh[i+1] = i+1;
        //cout << kartidsh[i];
      }
    for (int i =1;i<=36;i++){
      cout << kartidsh[i]<< " " ; 
    }
    cout << "\n";

    srand(time(0));
    int kartid[36];
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
    for (int i =1;i<=36;i++){
      cout << kartid[i]<< " " ; 
    }
    cout << "\n";
}