#include <stdlib.h>
#include <iostream>
#include "closet.hpp"
#include <cstring>
#include <exception>
#include <string>
#include <cassert>

#include <stdexcept>

using namespace std;


namespace ariel

{

void check_digit (int* arr,int num){
    int digit =0;
    const int max_digit=4;
    const int min_digit=1;

for (int i = 0; i < 8; i++)
    {
        digit =(num%10);
        //catch the inlegal 8 digit numbers.
        if (digit<min_digit||digit>max_digit)
		throw std::out_of_range{"not a legal digit!"};
        
        arr[7-i]=digit-1;
        num=num/10;
    }


}


//  HHHHH
//  HHHHH
// X(LNR)Y
// X(TTT)Y
//  (BBB)

string  snowman(int num)
{
    
    const int legal_length=8;
    //if the len of num inlegal (fast check to catch most of the expetion)
    if (num>99999999||num<10000000)
    throw std::out_of_range{"not in range of num!"};

    //put the numbers of clothes that the user chose in array.
    int arr [legal_length]={0};
    check_digit(arr,num);
    


//That how the Snow man should be:
//  HHHHH
//  HHHHH
// X(LNR)Y
// X(TTT)Y
//  (BBB)

std::string ans="";
//build the snow man part by part
    // part1 (Hat):" HHHHH
    //               HHHHH"
    
    ans.append(items::Hats[arr[0]]);
    ans.append("\n");
    
    //part2: "X(LNR)Y"
    ans.append(items::LeftArmsup[arr[4]]);
    ans.append("(");
    ans.append(items::Eye[arr[2]]);
    ans.append(items::Nose[arr[1]]);
    ans.append(items::Eye[arr[3]]);
    ans.append(")");
    ans.append(items::RightArmsup[arr[5]]);
    ans.append("\n");

    //part 3 "X(TTT)Y"
    
    ans.append(items::LeftArmsdown[arr[4]]);
    ans.append("(");
    ans.append(items::Torso[arr[6]]);
    ans.append(")");
    ans.append(items::RightArmsdown[arr[5]]);
    ans.append("\n");
    
    //part 4  " (BBB)""
    ans.append(" (");
    ans.append(items::Base[arr[7]]);
    ans.append(")");
    
    
    return ans ;
}

}


