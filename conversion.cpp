#include <iostream>
#include "conversion.h"

void length ::mm_m()
         {
          std::cout<<"\n   Millimeter= ";
          std::cin>>i;
          std::cout<<"\n   Meter= "<<i*.001;
          }
void length ::m_mm()
         {
         std::cout<<"\n   meter= ";
         std::cin>>i;
         std::cout<<"\n   millimeter= "<<i*1000;
         }
void length ::cm_m()
         {
          std::cout<<"\n   Centimeter= ";
          std::cin>>i;
          std::cout<<"\n   Meter= "<<i*.01;
          }
void length ::m_cm()
        {
         std::cout<<"\n   meter= ";
         std::cin>>i;
         std::cout<<"\n   cm= "<<i*100;
         }
void length::m_mile()
         {
         std::cout<<"\n   meter= ";
         std::cin>>i;
         std::cout<<"\n   mile= "<<i*.00062;
         }
void length::mile_m()
        {
        std::cout<<"\n   mile= ";
        std::cin>>i;
        std::cout<<"\n   meter= "<<i*1609.344;
        }
void length :: cm_km()
        {
         std::cout<<"\n   cm= ";
         std::cin>>i;
         std::cout<<"\n   km= "<<i*0.00001;

        }

void length :: km_cm()
        {   std::cout<<"\n   km= ";
           std::cin>>i;
           std::cout<<"\n   cm= "<<i*100000;
        }
void length::feet_m()
        {
        std::cout<<"\n   feet= ";
        std::cin>>i;
        std::cout<<"\n   meter= "<<i*.3048;
        }
    void length::m_feet()
        {
        std::cout<<"\n   meter= ";
        std::cin>>i;
        std::cout<<"\n   feet= "<<i*3.28084;
        }
    void length::yard_m()
        {
        std::cout<<"\n   yard= ";
        std::cin>>i;
        std::cout<<"\n   meter= " <<i*0.9144;
        }
    void length::m_yard()
        {
        std::cout<<"\n   meter= ";
        std::cin>>i;
        std::cout<<"\n   yard= "<<i*1.09361;
        }
    void length::inch_m()
        {
        std::cout<<"\n   inch=";
        std::cin>>i;
        std::cout<<"\n   meter="<<i*.0254;
        }
    void length::m_inch()
        {
        std::cout<<"\n   meter=";
        std::cin>>i;
        std::cout<<"\n   inch="<<i*39.37008;
        }
    void length ::km_mile()
        {
        std::cout<<"\n   kilometer=";std::cin>>i;
        std::cout<<"\n   mile="<<i*.6213712 ;
        }
    void length ::mile_km( )
        {
        std::cout<<"\n   mile="; std::cin>>i;
        std::cout<<"\n   kilometer="<<i*1.60934;
        }



    void temp::cel_f()
       {
       std::cout<<"\n   Celsius= ";
       std::cin>>i;
        std::cout<<"\n   Fahrenheit= " <<(((9*i)/5)+32);
       }
    void temp::f_cel()
       {
       std::cout<<"\n   Fahrenheit= ";   std::cin>>i;
       std::cout<<"\n   Celsius= "<<(((i-32)/9)*5);
        }
    void temp::cel_k()
        {
        std::cout<<"\n   celsius= ";std::cin>>i;
        std::cout<<"\n   kelvin= "<<i+273;
        }
    void temp::k_cel()
        {
        std::cout<<"\n   kelvin= ";  std::cin>>i;
        std::cout<<"\n   celsius= "<<i-273;
        }



    void weight::milligm_gm()
        {
        std::cout<<"\n   milligramm= ";std::cin>>i;
        std::cout<<"\n   gramm= "<<i*.001;
        }
    void weight::gm_milligm()
        {
        std::cout<<"\n   gram= "; std::cin>>i;
        std::cout<<"\n   milligramm= "<<i*1000;
        }
    void weight::pound_kg()
       {
       std::cout<<"\n   pound= "; std::cin>>i;
       std::cout<<"\n   kilogramm= "<<i*.45359;
       }
     void weight::gm_kg()
        { std::cout<<"\n   Gramm= ";std::cin>>i;
         std::cout<<"\n   killogramm= "<<i*.001;
         }
     void weight::kg_gm()
    {    std::cout<<"\n   killogramm= ";std::cin>>i;
        std::cout<<"\n   Gramm= "<<i*1000;
        }


    void weight::kg_pound()
      {
      std::cout<<"\n   kilogramm= ";std::cin>>i;
      std::cout<<"\n   pound= "<<2.20462*i;
      }
    void weight::gm_pound()
      {
      std::cout<<"\n   gramm= ";  std::cin>>i;
      std::cout<<"\n   pound= "<<i*.0022;
      }
    void weight::pound_gm()
      {
      std::cout<<"\n   pound= "; std::cin>>i;
      std::cout<<"\n   gramm= "<<i*453.59237;
      }
    void weight::kg_mton()
      {
      std::cout<<"\n   kilogramm= ";std::cin>>i;
      std::cout<<"\n   matric ton= "<<i*.001;
       }
    void weight::mton_kg()
      {
     std::cout<<"\n   metric ton= "; std::cin>>i;
     std::cout<<"\n   kilogramm= "<<i*1000;
      }


    void area::mmSq_cmSq()
        {
        std::cout<<"\n   squqre mm= ";std::cin>>i;
        std::cout<<"\n   square cm= "<<i*.01;
        }
    void area::cmSq_mmSq()
        {
        std::cout<<"\n   square cm= ";std::cin>>i;
        std::cout<<"\n   square mm= "<<i*100;
        }
    void area::cmSq_mSq()
        {
        std::cout<<"\n   square cm= ";std::cin>>i;
        std::cout<<"\n   square m= "<<i*.0001;
        }
    void area::mSq_cmSq()
        {
        std::cout<<"\n   square m= "; std::cin>>i;
        std::cout<<"\n   square cm= "<<i*10000;
        }
    void area::mSq_kmSq()
        {
        std::cout<<"\n   square m= "; std::cin>>i;
        std::cout<<"\n   square km= "<<i*.000001;
        }
    void area::kmSq_mSq()
        {
        std::cout<<"\n   square km= ";std::cin>>i;
        std::cout<<"\n   square m= "<<i*1000000;
        }
    void area::feetSq_mSq()
      {
      std::cout<<"\n   square feet= ";std::cin>>i;
      std::cout<<"\n   square m= "<<i*.0929;
      }
    void area::mSq_feetSq()
      {
      std::cout<<"\n   square m= ";  std::cin>>i;
      std::cout<<"\n   square feet= "<<i*10.76391;
      }
    void area::yardSq_mSq()
      {
      std::cout<<"\n   square yard= ";std::cin>>i;
      std::cout<<"\n   square m= "<<i*.83613;
      }
     void area::mSq_yardSq()
       {
        std::cout<<"\n   square m= "; std::cin>>i;
        std::cout<<"\n   square yard= "<<i*1.19599;
       }
     void area::mileSq_kmSq()
        {
        std::cout<<"\n   square mile= ";std::cin>>i;
        std::cout<<"\n   square km= "<<i*2.5899;
        }
     void area::kmSq_mileSq()
        {
         std::cout<<"\n   square km= " ;std::cin>>i;
          std::cout<<"\n   square mile= "<<i*.3861;
        }
     void area::acre_hect()
        {
        std::cout<<"\n   Acre= ";   std::cin>>i;
        std::cout<<"\n   Hector= "<<i*.40469;
        }
     void area::hect_acre()
        {
        std::cout<<"\n   Hector= ";std::cin>>i;
        std::cout<<"\n   Acre= " <<i*2.47105;
        }
      void area::acre_kmSq()
         {std::cout<<"\n   Acre= ";std::cin>>i;
         std::cout<<"\n   Square km= "<<i*.00405;
         }
      void area::kmSq_acre()
      {
       std::cout<<"\n   Square km= ";std::cin>>i;
       std::cout<<"\n   Acre= "<<i*247.10538;

      }

     void vol::mL_L()
         {
         std::cout<<"\n   milli litre= ";std::cin>>i;
         std::cout<<"\n   Litre= "<<i*.001;
         }
      void vol::L_mL()
         {         std::cout<<"\n   Litre= "; std::cin>>i;
         std::cout<<"\n   milli Litre= "<<i*1000;
         }
     void vol::cmQ_mmQ()
         {
          std::cout<< "\n   cubic cm= "; std::cin>>i;
          std::cout<<"\n   cubic mm= "<<i*1000;
          }
     void vol::mmQ_cmQ()
         {
         std::cout<<"\n   cubic mm= ";   std::cin>>i;
         std::cout<<"\n   cubic cm= "<<i*.001;
         }
     void vol::cmQ_mQ()
        {
        std::cout<<"\n   cubic cm= ";  std::cin>>i;
        std::cout<<"\n   cubic meter= "<<i*.000001;
        }
     void vol::mQ_cmQ()
        {
        std::cout<<"\n   cubic meter= "; std::cin>>i;
        std::cout<<"\n   cubic cm= "<<i*1000000;
        }
     void vol::inchQ_mQ()
       {
       std::cout<<"\n   cubic inch= ";  std::cin>>i;
       std::cout<<"\n   cubic meter= "<<i*.00002;
       }
     void vol::mQ_inchQ()
       {
       std::cout<<"\n   cubic meter= "; std::cin>>i;
       std::cout<<"\n   cubic inch= "<<i*61023.74409;
       }
     void vol::feetQ_mQ()
      {
       std::cout<<"\n   cubic feet= "; std::cin>>i;
       std::cout<<"\n   cubic meter= "<<i*1222 ;

      }
     void vol::mQ_feetQ()
       {
       std::cout<<"\n   cubic meter= ";std::cin>>i;
       std::cout<<"\n   cubic feet= "<<i*123;
       }
     void vol::mQ_gallon()
       {
       std::cout<<"\n   cubic meter= ";std::cin>>i;
       std::cout<<"\n   gallon= "<<i*264.17205;
       }
     void vol::gallon_mQ()
       {
       std::cout<<"\n   Gallon= "; std::cin>>i;
       std::cout<<"\n   cubic meter= "<<i*.00379;
       }
     void vol::L_gallon()
        {
        std::cout<<"\n   Litre= ";std::cin>>i;
        std::cout<<"\n   gallon= "<<i*.21997;
        }
    void vol::gallon_L()
        {
        std::cout<<"\n   Gallon= "; std::cin>>i;
        std::cout<<"\n   Litre= "<<i*4.54609;
        }




