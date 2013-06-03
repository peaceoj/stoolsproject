#ifndef CONVERSION_H_
#define CONVERSION_H_

class input
	{
		public:
			float i;
	};

class length:public input
	{
		public:
		   void mm_m();
		   void m_mm();
		   void cm_m();
		   void m_cm();
		   void cm_km();
		   void km_cm();
		   void m_mile();
		   void mile_m();
		   void km_mile();
		   void mile_km();
		   void feet_m();
		   void m_feet();
		   void inch_m();
		   void m_inch();
		   void yard_m();
		   void m_yard();

    };

class temp:public input
	{
		public:
		   void cel_f();
		   void f_cel();
		   void cel_k();
		   void k_cel();
	           void f_k();
		   void k_f();

	};

class weight:public input
   {
		public:
		   void milligm_gm();
		   void gm_milligm();
		   void gm_kg();
		   void kg_gm();
		   void kg_mton();
		   void mton_kg();
		   void pound_kg();
		   void kg_pound();
		   void gm_pound();
		   void pound_gm();

    };

 class area :public input
   {
		public:
		   void mmSq_cmSq();
		   void cmSq_mmSq();
		   void cmSq_mSq ();
		   void mSq_cmSq ();
		   void mSq_kmSq ();
		   void kmSq_mSq ();
		   void feetSq_mSq();
		   void mSq_feetSq();
		   void yardSq_mSq();
		   void mSq_yardSq();
		   void mileSq_kmSq();
		   void kmSq_mileSq();
		   void acre_kmSq();
		   void kmSq_acre();
		   void acre_hect();
		   void hect_acre();
    };

   class vol:public input
   {
		public:
		   void mL_L();
		   void L_mL();
		   void mmQ_cmQ();
		   void cmQ_mmQ();
		   void cmQ_mQ ();
		   void mQ_cmQ ();
		   void inchQ_mQ();
		   void mQ_inchQ();
		   void feetQ_mQ();
		   void mQ_feetQ();
		   void mQ_gallon();
		   void gallon_mQ();
		   void L_gallon();
		   void gallon_L();

   };		
		
		
#endif //CONVERSION_H_
