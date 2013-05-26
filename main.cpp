#include <iostream>
#include<stdio.h>
#include "conversion.h"   

int main()
        {
    
    length b;
    weight c;
    vol d;
    area e;
    temp f;
    int x,y;
      

    while(1)
    {
        
        std::cout<<"\t\t\tWELCOME TO UNIT CONVERTION\n";
        std::cout<<"\n      TYPE"<<"\n     ------";
        std::cout<<"\n  1: Length\n" << "  2: Temparature\n"<<"  3: Weight\n"<<"  4: Area\n"<<"  5: Volume\n" <<"  6: Exit\n";
        std::cout<<"\n\nPlease choose your Convertion Type:" ;
        std::cin>>x;
        if(x==1)
             {           

                  std::cout<<"\n\n choose your unit convertion:\n";

                    std::cout<<"\n  1 : mm-m";
                    std::cout<<"\n  2 : m-mm";
                    std::cout<<"\n  3 : cm-m";
                    std::cout<<"\n  4 : m-cm";
                    std::cout<<"\n  5 : cm_km";
                    std::cout<<"\n  6 : km-cm";
                    std::cout<<"\n  7 : m-mile";
                    std::cout<<"\n  8 : mile-m";
                    std::cout<<"\n  9 : km-mile";
                   std::cout<<"\n 10 : mile-km";
                   std::cout<<"\n 11 : feet-m";
                   std::cout<<"\n 12 : m-feet";
                   std::cout<<"\n 13 : inch-m";
                   std::cout<<"\n 14 : m-inch";
                   std::cout<<"\n 15 : yard-m";
                  std::cout<<"\n 16 : m-yard";
                  std::cout<<"\n 17 : Back to The Main Menu";


         while(1)
               {
                std::cout<<"\n\n Please Enter Your Choice= ";
               std::cin>>y;

                if (y==1)
                    { b.mm_m(); }
                else if(y==2)
                    { b.m_mm(); }
                else if (y==3)
                    { b.cm_m(); }
                else if (y==4)
                    { b.m_cm(); }
                else if (y==5)
                    { b.cm_km(); }
                else if (y==6)
                    {  b.km_cm(); }
                else if (y==7)
                    {  b.m_mile(); }
                else if (y==8)
                    {   b.mile_m(); }
                else if (y==9)
                     {   b.km_mile(); }
                else if (y==10)
                    {  b.mile_km(); }
                else if (y==11)
                     {  b.feet_m(); }
                else if (y==12)
                     { b.m_feet(); }
                 else if (y==13)
                      { b.inch_m();}
                else if(y==14)
                    { b.m_inch();}
                else if (y==15)
                    {b.yard_m();}
              else if (y==16)
                    {b.m_yard();}
              else if (y==17)
                    {break;}
           }
           }
           else if(x==2)
                 {   
                  std::cout<<"\n\n choose your unit convertion:\n";

                  std::cout<<"\n  1: Celsius-Fahrenheit";
                  std::cout<<"\n  2: Fahrenheit-Celsius";
                  std::cout<<"\n  3: Celsius-Kelvin";
                  std::cout<<"\n  4: Kelvin-Celcius";
                  std::cout<<"\n  5: Back to The Main Menu";
          while(1)
          {
          std::cout<<"\n\n Please Enter Your Choice= ";
            std::cin>>y;

                if(y==1)
                   { f.cel_f(); }
                else if(y==2)
                   {f.f_cel();}
                 else if (y==3)
                   {f.cel_k();}
                else if(y==4)
                 {f.k_cel();}
                else if(y==5)
                    {break;}
            }
            }
            else if(x==3)
            {                 
             std::cout<<"\n\nchoose your unit convertion :\n";

             std::cout<<"\n  1: Milligm-Gramm";
             std::cout<<"\n  2: Gramm-milligm";
             std::cout<<"\n  3: Gramm-killogram";
             std::cout<<"\n  4: killoGramm-Gramm";
             std::cout<<"\n  5: pound-killogramm";
             std::cout<<"\n  6: killogramm-pound";
             std::cout<<"\n  7: Gramm-Pound";
             std::cout<<"\n  8: Pound-gramm";
             std::cout<<"\n  9: killogramm-Metric ton";
            std::cout<<"\n 10: Metric ton-Killogramm";
            std::cout<<"\n 11: Back to The Main Menu";

           while(1)
             {
              std::cout<<"\n\nPlease Enter Your Choice= ";
              std::cin>>y;

             if (y==1)
                {c.milligm_gm();}
             else if (y==2)
                {c.gm_milligm();}
             else if (y==3)
                {c.gm_kg();}
             else if (y==4)
                {c.kg_gm();}
             else if (y==5)
                {c.pound_kg();}
             else if (y==6)
                {c.kg_pound();}
             else if (y==7)
                {c.gm_pound();}
             else if (y==8)
                {c.pound_gm();}
             else if (y==9)
                {c.kg_mton();}
             else if (y==10)
                {c.mton_kg();}
             else if (y==11)
                {break;}
        }
        }
        else if(x==4)
                {             
                std::cout<<"\n\nchoose your unit convertion:\n";

                std::cout<<"\n   1: Square mm-Square cm";
                std::cout<<"\n   2: square cm-Square mm";
                std::cout<<"\n   3: square cm-square m";
                std::cout<<"\n   4: Square m-Square cm";
                std::cout<<"\n   5: Square m-Square km";
                std::cout<<"\n   6: Square km-Square m";
                std::cout<<"\n   7: Square feet-Square m";
                std::cout<<"\n   8: Square m-Square feet";
                std::cout<<"\n   9: Square Yard-Square m";
                std::cout<<"\n  10: Square m-Square yard";
                std::cout<<"\n  11: Square mile-Square km";
                std::cout<<"\n  12: Square km-Square mile";
                std::cout<<"\n  13: Acre-Hectare";
                std::cout<<"\n  14: Hectare-Acre";
                std::cout<<"\n  15: Square km-Acre ";
                std::cout<<"\n  16: Acre-Square km";
                std::cout<<"\n  17: Back to The Main Menu";

            while(1)
            {
            std::cout<<"\n\nPlease Enter Your Choice= ";
              std::cin>>y;

                if(y==1)
                  {e.mmSq_cmSq();}
                else if(y==2)
                {e.cmSq_mmSq();}
                else if(y==3)
                {e.cmSq_mSq();}
                else if(y==4)
                {e.mSq_cmSq();}
                else if(y==5)
                {e.mSq_kmSq();}
                else if(y==6)
                {e.kmSq_mSq();}
                else if(y==7)
                {e.feetSq_mSq();}
                else if(y==8)
                {e.mSq_feetSq();}
                else if(y==9)
                {e.yardSq_mSq();}
                else if(y==10)
                {e.mSq_yardSq();}
                else if(y==11)
                {e.mileSq_kmSq();}
                else if(y==12)
                {e.kmSq_mileSq();}
                else if(y==13)
                {e.acre_hect();}
                else if(y==14)
                {e.hect_acre();}
                else if(y==15)
                {e.kmSq_acre();}
                else if(y==16)
                {e.acre_kmSq();}
                else if(y==17)
                {break;}
            }
            }
        else if(x==5)
            {          
               std::cout<<"\n\nchoose your unit convertion:\n";

               std::cout<<"\n   1 : ml-Litre";
               std::cout<<"\n   2 : Litre-ml";
               std::cout<<"\n   3 : Cubic mm-Cubic cm";
               std::cout<<"\n   4 : Cubic cm-Cubic mm";
               std::cout<<"\n   5 : Cubic cm-Cubic m";
               std::cout<<"\n   6 : Cubic m-Cubic cm";
               std::cout<<"\n   7 : Cubic Inch-Cubic m";
               std::cout<<"\n   8 : Cubic m-Cubic Inch";
               std::cout<<"\n   9 : Cubic feet-Cubic m";
               std::cout<<"\n  10 : Cubic m-Cubic feet";
               std::cout<<"\n  11 : Cubic m-Gallon (uk)";
               std::cout<<"\n  12 : Gallon-Cubic m";
               std::cout<<"\n  13 : Litre-Gallon";
               std::cout<<"\n  14 : Gallon-Litre";
               std::cout<<"\n  15 : Back to The Main Menu";


            while(1)
             { std::cout<<"\n\nPlease Enter Your Choice= ";
              std::cin>>y;

                if (y==1)
                  {d.mL_L();}
             else if (y==2)
                  {d.L_mL();}
             else if (y==3)
                  {d.mmQ_cmQ();}
            else if (y==4)
                  {d.cmQ_mmQ();}
            else if (y==5)
                  {d.cmQ_mQ();}
            else if (y==6)
                  {d.mQ_cmQ();}
            else if (y==7)
                  {d.inchQ_mQ();}
            else if (y==8)
                  {d.mQ_inchQ();}
            else if (y==9)
                  {d.feetQ_mQ();}
            else if (y==10)
                  {d.mQ_feetQ();}
            else if (y==11)
                  {d.mQ_gallon();}
            else if (y==12)
                  {d.gallon_mQ();}
            else if (y==13)
                {d.L_gallon();}
            else if(y==14)
                {d.gallon_L();}
            else if(y==15)
                {break;}
           }
           }




        else if(x==6){ break;}

                }


         }
