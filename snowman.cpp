#include <stdlib.h>
#include <iostream>
#include "check.hpp"
#include <cstring>
#include <exception>
#include <cmath>
#include <cassert>

#include <stdexcept>
using namespace std;
//


namespace ariel{



 string  snowman(int num)
{
    //if the num is lower or bigger then legal values(fast check to catch most of the expetion)
    if (num>44444444||num<11111111)
    throw std::out_of_range{"not a legal value!"};
    int digit=0;
    int arr [8]={0};
    for (int i = 0; i < 8; i++)
    {
        digit =(num%10);
        //catch the inlegal 8 digit numbers.
        if (digit<1||digit>4)
		throw std::out_of_range{"not a legal value!"};
        
        arr[7-i]=digit-1;
        num=num/10;
    }

std::string ans="";
   
    
//HNLRXYTB
    
    ans.append(items::Hats[arr[0]]);
    
    ans.append("\n");
   
    ans.append(items::LeftArms[arr[4]]);
    
    ans.append("(");
   
    ans.append(items::Eye[arr[2]]);
    
    ans.append(items::Nose[arr[1]]);
    
    ans.append(items::Eye[arr[3]]);
   
    ans.append(")");
    
    ans.append(items::RightArms[arr[5]]);
    
    ans.append("\n");
    
    ans.append(items::LeftArms[arr[4]]);
    
    ans.append("(");
    
    ans.append(items::Torso[arr[6]]);
    
    ans.append(")");
    
    ans.append(items::RightArms[arr[5]]);
    
    ans.append("\n");
    
    ans.append(" (");
    
    ans.append(items::Base[arr[7]]);
    
    ans.append(")");
    //34
    


    
    
    return ans;
    
}

}
