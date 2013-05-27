#include <iostream>
using namespace std;
#include "conversion.h"

/********************************************************** LENGTH ****************************************************************/
	void length ::mm_m()
        {
			cout<<"\n   Millimeter= ";
			cin>>i;
			cout<<"\n   Meter= "<<i*.001;
        }
    void length ::m_mm()
         {
			cout<<"\n   meter= ";
			cin>>i;
			cout<<"\n   millimeter= "<<i*1000;
         }
    void length ::cm_m()
        {
			cout<<"\n   Centimeter= ";
			cin>>i;
			cout<<"\n   Meter= "<<i*.01;
        }
    void length ::m_cm()
        {
			cout<<"\n   meter= ";
			cin>>i;
			cout<<"\n   cm= "<<i*100;
        }
    void length::m_mile()
        {
			cout<<"\n   meter= ";
			cin>>i;
			cout<<"\n   mile= "<<i*.00062;
        }
    void length::mile_m()
        {
			cout<<"\n   mile= ";
			cin>>i;
			cout<<"\n   meter= "<<i*1609.344;
        }
     void length :: cm_km()
        {
			cout<<"\n   cm= ";
			cin>>i;
			cout<<"\n   km= "<<i*0.00001;
        }
    void length :: km_cm()
        { 
			cout<<"\n   km= ";
			cin>>i;
			cout<<"\n   cm= "<<i*100000;
        }
    void length::feet_m()
        {
			cout<<"\n   feet= ";
			cin>>i;
			cout<<"\n   meter= "<<i*.3048;
        }
    void length::m_feet()
        {
			cout<<"\n   meter= ";
			cin>>i;
			cout<<"\n   feet= "<<i*3.28084;
        }
    void length::yard_m()
        {
			cout<<"\n   yard= ";
			cin>>i;
			cout<<"\n   meter= " <<i*0.9144;
        }
    void length::m_yard()
        {
			cout<<"\n   meter= ";
			cin>>i;
			cout<<"\n   yard= "<<i*1.09361;
        }
    void length::inch_m()
        {
			cout<<"\n   inch=";
			cin>>i;
			cout<<"\n   meter="<<i*.0254;
        }
    void length::m_inch()
        {
			cout<<"\n   meter=";
			cin>>i;
			cout<<"\n   inch="<<i*39.37008;
        }
    void length ::km_mile()
        {
			cout<<"\n   kilometer=";
			cin>>i;
			cout<<"\n   mile="<<i*.6213712 ;
        }
    void length ::mile_km( )
        {
			cout<<"\n   mile=";
			cin>>i;
			cout<<"\n   kilometer="<<i*1.60934;
        }
		
		

/********************************************************** TEMPERATURE ****************************************************************/

    void temp::cel_f()
		{
			cout<<"\n   Celsius= ";
			cin>>i;
			cout<<"\n   Fahrenheit= " <<(((9*i)/5)+32);
		}
    void temp::f_cel()
		{
			cout<<"\n   Fahrenheit= ";   
			cin>>i;
			cout<<"\n   Celsius= "<<(((i-32)/9)*5);
        }
    void temp::cel_k()
        {
			cout<<"\n   celsius= ";
			cin>>i;
			cout<<"\n   kelvin= "<<i+273;
        }
    void temp::k_cel()
        {
			cout<<"\n   kelvin= ";  
			cin>>i;
			cout<<"\n   celsius= "<<i-273;
        }
		
		
		
/********************************************************** WEIGHT ****************************************************************/

    void weight::milligm_gm()
        {
			cout<<"\n   milligramm= ";
			cin>>i;
			cout<<"\n   gramm= "<<i*.001;
        }
    void weight::gm_milligm()
        {
			cout<<"\n   gram= "; 
			cin>>i;
			cout<<"\n   milligramm= "<<i*1000;
        }
    void weight::pound_kg()
        {
			cout<<"\n   pound= ";
			cin>>i;
			cout<<"\n   kilogramm= "<<i*.45359;
        }
	void weight::gm_kg()
        { 
			cout<<"\n   Gramm= ";
			cin>>i;
			cout<<"\n   killogramm= "<<i*.001;
        }
    void weight::kg_gm()
		{    
			cout<<"\n   killogramm= ";
			cin>>i;
			cout<<"\n   Gramm= "<<i*1000;
        }
 	void weight::kg_pound()
        {
			cout<<"\n   kilogramm= ";
			cin>>i;
			cout<<"\n   pound= "<<2.20462*i;
        }
    void weight::gm_pound()
		{
			cout<<"\n   gramm= ";  
			cin>>i;
			cout<<"\n   pound= "<<i*.0022;
        }
    void weight::pound_gm()
        {
			cout<<"\n   pound= ";
			cin>>i;
			cout<<"\n   gramm= "<<i*453.59237;
        }
    void weight::kg_mton()
        {
			cout<<"\n   kilogramm= ";
			cin>>i;
			cout<<"\n   matric ton= "<<i*.001;
        }
    void weight::mton_kg()
        {
			cout<<"\n   metric ton= ";
			cin>>i;
			cout<<"\n   kilogramm= "<<i*1000;
        }

		
		
/*************************************************************** AREA ****************************************************************/

    void area::mmSq_cmSq()
        {
			cout<<"\n   squqre mm= ";
			cin>>i;
			cout<<"\n   square cm= "<<i*.01;
        }
    void area::cmSq_mmSq()
        {
			cout<<"\n   square cm= ";
			cin>>i;
			cout<<"\n   square mm= "<<i*100;
        }
    void area::cmSq_mSq()
        {
			cout<<"\n   square cm= ";
			cin>>i;
			cout<<"\n   square m= "<<i*.0001;
        }
    void area::mSq_cmSq()
        {
			cout<<"\n   square m= ";
			cin>>i;
			cout<<"\n   square cm= "<<i*10000;
        }
    void area::mSq_kmSq()
        {
			cout<<"\n   square m= "; 
			cin>>i;
			cout<<"\n   square km= "<<i*.000001;
        }
    void area::kmSq_mSq()
        {
			cout<<"\n   square km= ";
			cin>>i;
			cout<<"\n   square m= "<<i*1000000;
        }
    void area::feetSq_mSq()
		{
			cout<<"\n   square feet= ";
			cin>>i;
			cout<<"\n   square m= "<<i*.0929;
      }
    void area::mSq_feetSq()
		{
			cout<<"\n   square m= "; 
			cin>>i;
			cout<<"\n   square feet= "<<i*10.76391;
		}
    void area::yardSq_mSq()
		{
			cout<<"\n   square yard= ";
			cin>>i;
			cout<<"\n   square m= "<<i*.83613;
		}
    void area::mSq_yardSq()
		{
			cout<<"\n   square m= "; 
			cin>>i;
			cout<<"\n   square yard= "<<i*1.19599;
		}
    void area::mileSq_kmSq()
	    {
			cout<<"\n   square mile= ";
			cin>>i;
			cout<<"\n   square km= "<<i*2.5899;
        }
    void area::kmSq_mileSq()
        {
			cout<<"\n   square km= " ;
			cin>>i;
			cout<<"\n   square mile= "<<i*.3861;
        }
    void area::acre_hect()
        {
			cout<<"\n   Acre= ";  
			cin>>i;
			cout<<"\n   Hector= "<<i*.40469;
        }
    void area::hect_acre()
        {
			cout<<"\n   Hector= ";
			cin>>i;
			cout<<"\n   Acre= " <<i*2.47105;
        }
    void area::acre_kmSq()
        {
			cout<<"\n   Acre= ";
			cin>>i;
			cout<<"\n   Square km= "<<i*.00405;
        }
    void area::kmSq_acre()
        {
			cout<<"\n   Square km= ";
			cin>>i;
			cout<<"\n   Acre= "<<i*247.10538;
        }

		
		
/********************************************************** VOLUME ****************************************************************/

		
    void vol::mL_L()
        {
			cout<<"\n   milli litre= ";
			cin>>i;
			cout<<"\n   Litre= "<<i*.001;
        }
    void vol::L_mL()
        {       
			cout<<"\n   Litre= "; 
			cin>>i;
			cout<<"\n   milli Litre= "<<i*1000;
        }
    void vol::cmQ_mmQ()
        {
          cout<< "\n   cubic cm= ";
		  cin>>i;
          cout<<"\n   cubic mm= "<<i*1000;
        }
    void vol::mmQ_cmQ()
        {
			cout<<"\n   cubic mm= ";  
			cin>>i;
			cout<<"\n   cubic cm= "<<i*.001;
        }
    void vol::cmQ_mQ()
        {
			cout<<"\n   cubic cm= "; 
			cin>>i;
			cout<<"\n   cubic meter= "<<i*.000001;
        }
    void vol::mQ_cmQ()
        {
			cout<<"\n   cubic meter= "; 
			cin>>i;
			cout<<"\n   cubic cm= "<<i*1000000;
        }
    void vol::inchQ_mQ()
		{
			cout<<"\n   cubic inch= ";  
			cin>>i;
			cout<<"\n   cubic meter= "<<i*.00002;
       }
    void vol::mQ_inchQ()
        {
			cout<<"\n   cubic meter= "; 
			cin>>i;
			cout<<"\n   cubic inch= "<<i*61023.74409;
       }
    void vol::feetQ_mQ()
		{
			cout<<"\n   cubic feet= "; 
			cin>>i;
			cout<<"\n   cubic meter= "<<i*1222 ;
		}
    void vol::mQ_feetQ()
		{
			cout<<"\n   cubic meter= ";
			cin>>i;
			cout<<"\n   cubic feet= "<<i*123;
		}
    void vol::mQ_gallon()
		{
			cout<<"\n   cubic meter= ";
			cin>>i;
			cout<<"\n   gallon= "<<i*264.17205;
		}
    void vol::gallon_mQ()
		{
			cout<<"\n   Gallon= "; 
			cin>>i;
			cout<<"\n   cubic meter= "<<i*.00379;
		}
    void vol::L_gallon()
        {
			cout<<"\n   Litre= ";
			cin>>i;
			cout<<"\n   gallon= "<<i*.21997;
        }
    void vol::gallon_L()
        {
			cout<<"\n   Gallon= "; 
			cin>>i;
			cout<<"\n   Litre= "<<i*4.54609;
        }
