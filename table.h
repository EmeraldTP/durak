#include <iostream>
using namespace std;
class Table
{
  private:
     int kid;
     char *returm;
     string returmst;
     string pi = "Pika";
     string k = "krest";
     string bu = "bubna";
     string kr = "krasnia";
  public:
    char* kart(int kid) {

      if (kid == 1)
        returmst= "6" + pi;
      else if (kid == 2)
        returmst = "6" + k;
      else if (kid == 3)
        returmst = "6" + bu;
      else if (kid == 4)
        returmst = "6" + kr;
      
      //returmst = "Table\n";
      returm = &returmst[0];
      return returm;
    }
};