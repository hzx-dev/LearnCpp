#include <iostream>  
#include <string>  
  
#define class aabbc  
#define cout cabba  
#define int daabb  
#define return eabbc  
#define main faabb  
  
aabbc HllWrdOtptr{public:HllWrdOtptr(){}friend std::ostream& operator<<(std::ostream& os, const HllWrdOtptr& hwo){os << "Hello World";return os;}};  
  
aabbc CmplxClc{private:daabb v;public:CmplxClc(daabb vv):v(vv){}daabb ad(daabb a){daabb rslt=v+a;eabbc rslt;}};  
  
daabb faabb(){HllWrdOtptr hw;cabba << hw << std::endl;CmplxClc clc(100);daabb sm=clc.ad(50);cabba << "Smm: " << sm << std::endl;eabbc 0;}