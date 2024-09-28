#ifndef NUM_H_
#define NUM_H_
#include <iostream>


class num
{   
    private:
        int height;
    public:
      int get(void);
      void set(int value);
      ~num();
      num();
      num(int num);
};

int num::get(void){
    return height;
}

void num::set(int value){
    height = value;
}

num::num(){
    height = 0;
}

num::num(int num){
    height = num;
}

num::~num(){
}

#endif
