#include <iostream>
#include "table.h"
using namespace std;

class Grafic
{
  public:

    void display() {
      cout << "Hello World\n";
    }
};

class Logic
{
  public:

    void display1() {
      Table Table;
      cout << Table.kart(1) <<"\n";
    }
};
int main() {
    Grafic t;
    t.display();
    Logic t1;
    t1.display1();
}