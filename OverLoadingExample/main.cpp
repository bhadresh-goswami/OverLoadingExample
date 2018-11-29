//
//  main.cpp
//  OverLoadingExample
//
//  Created by Mac on 29/11/18.
//  Copyright © 2018 tops. All rights reserved.
//

#include <iostream>

class OverloadClass {
    
    
public:
    void calc()
    {
        int a = 10;
        std::cout<<"\n\tthis is value of a :"<<a;
    }
    void calc(int a)
    {
        
        std::cout<<"\n\tthis is value of a :"<<a;
    }
    void calc(int a,int b)
    {
        
        std::cout<<"\n\tthis is value of a :"<<a<<" and b :"<<b<<"!\n\n";
    }
};


int main(int argc, const char * argv[]) {

    
    OverloadClass obj;
    obj.calc();
    obj.calc(22);
    obj.calc(1, 22);
    return 0;
}
