#include <iostream>

using namespace std;

class Matris
{
  public:
        void okuma();
        void yazma(ofstream& , int );
        int enkucuk();
        int enbuyuk();
        int ortadeger();
        Matris();



  private:
        int satir, sutun, data;
        int dizi[9];
        int enk;
        int enb;
        int orta;

};
