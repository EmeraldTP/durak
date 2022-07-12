#include <iostream>
using namespace std;
class Table
{
  private:
     int kid;
     char *returm;
     string returmst;
     string pi = "_Pika";
     string k = "_krest";
     string bu = "_bubna";
     string kr = "_krasnia";
  public:
    char* kart(int kid) {

      if (kid == 1)
        returmst= "6" + pi;
      else if (kid == 2)
        returmst = "7" + pi;
      else if (kid == 3)
        returmst = "8" + pi;
      else if (kid == 4)
        returmst = "9" + pi;
      else if (kid == 5)
        returmst = "10" + pi;
      else if (kid == 6)
        returmst = "J" + pi;
      else if (kid == 7)
        returmst = "Q" + pi;
      else if (kid == 8)
        returmst = "K" + pi;
      else if (kid == 9)
        returmst = "A" + pi;
      else if (kid == 10)
        returmst = "6" + k;
      else if (kid == 11)
        returmst = "7" + k;
      else if (kid == 12)
        returmst = "8" + k;
      else if (kid == 13)
        returmst = "9" + k;
      else if (kid == 14)
        returmst = "10" + k;
      else if (kid == 15)
        returmst = "J" + k;
      else if (kid == 16)
        returmst = "Q" + k;
      else if (kid == 17)
        returmst = "K" + k;
      else if (kid == 18)
        returmst = "A" + k;
      else if (kid == 19)
        returmst = "6" + bu;
      else if (kid == 20)
        returmst = "7" + bu;
      else if (kid == 21)
        returmst = "8" + bu;
      else if (kid == 22)
        returmst = "9" + bu;
      else if (kid == 23)
        returmst = "10" + bu;
      else if (kid == 24)
        returmst = "J" + bu;
      else if (kid == 25)
        returmst = "Q" + bu;
      else if (kid == 26)
        returmst = "K" + bu;
      else if (kid == 27)
        returmst = "A" + bu;
      else if (kid == 28)
        returmst = "6" + kr;
      else if (kid == 29)
        returmst = "7" + kr;
      else if (kid == 30)
        returmst = "8" + kr;
      else if (kid == 31)
        returmst = "9" + kr;
      else if (kid == 32)
        returmst = "10" + kr;
      else if (kid == 33)
        returmst = "J" + kr;
      else if (kid == 34)
        returmst = "Q" + kr;
      else if (kid == 35)
        returmst = "K" + kr;
      else if (kid == 36)
        returmst = "A" + kr;

      //returmst = "Table\n";
      returm = &returmst[0];
      return returm;
    }
};