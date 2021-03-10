/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */

string My_nospaces(string ans){
int count = 0; 
    std::string s = "";
    
     // make new string withut {\t,\n,\r ,space}
    for (int i = 0; ans[i]; i++) 
        if (ans[i] != ' '&&ans[i] != '\n'&&ans[i] != '\t'&&ans[i] != '\r') 
            s.push_back(ans[i]); 

    s[count] = '\0'; 
    return s;
//Source : GeeksForGeeks
}

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good snowman code") {
//check all Hats 
    CHECK(snowman(11114411) == string("      \n _===_\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(44241342) == string("  ___ \n (_*_)\n (o -) \n<(   )\\\n (\" \")"));
    CHECK(snowman(31421312) == string("   _  \n  /_\\ \n (-,o) \n<( : )\\\n (\" \")"));
    CHECK(snowman(21114411) == string("  ___ \n .....\n (.,.) \n ( : ) \n ( : )"));
    
//check all Nose
    CHECK(snowman(34332212) == string("   _  \n  /_\\ \n\\(O O)/\n ( : ) \n (\" \")"));
    CHECK(snowman(11111111) == string("      \n _===_\n (.,.) \n<( : )>\n ( : )"));
    CHECK(snowman(12121212) == string("      \n _===_\n (..o)/\n<( : ) \n (\" \")"));
    CHECK(snowman(43312222) == string("  ___ \n (_*_)\n\\(O_.)/\n (] [) \n (\" \")"));
//check all Right Eye
    CHECK(snowman(31313131) == string("   _  \n  /_\\ \n (O,.) \n/(> <)>\n ( : )"));
    CHECK(snowman(42424222) == string("  ___ \n (_*_)\n (-.o)/\n (] [) \n (\" \")"));
    CHECK(snowman(11223344) == string("      \n _===_\n (o,o) \n/(   )\\\n (   )"));
    CHECK(snowman(12121212) == string("      \n _===_\n (..o)/\n<( : ) \n (\" \")"));
//check all Left Eye
    CHECK(snowman(44332211) == string("  ___ \n (_*_)\n\\(O O)/\n ( : ) \n ( : )"));
    CHECK(snowman(12341424) == string("      \n _===_\n (O.-) \n<(] [) \n (   )"));
    CHECK(snowman(14322341) == string("      \n _===_\n\\(O o) \n (   )\\\n ( : )"));
    CHECK(snowman(12311111) == string("      \n _===_\n (O..) \n<( : )>\n ( : )"));

//check all Left Arm
    CHECK(snowman(12341111) == string("      \n _===_\n (O.-) \n<( : )>\n ( : )"));
    CHECK(snowman(43242312) == string("  ___ \n (_*_)\n\\(o_-) \n ( : )\\\n (\" \")"));
    CHECK(snowman(33333333) == string("   _  \n  /_\\ \n (O_O) \n/(> <)\\\n (___)"));
    CHECK(snowman(11114111) == string("      \n _===_\n (.,.) \n ( : )>\n ( : )"));

//check all Right arm
    CHECK(snowman(31313131) == string("   _  \n  /_\\ \n (O,.) \n/(> <)>\n ( : )"));
    CHECK(snowman(42424222) == string("  ___ \n (_*_)\n (-.o)/\n (] [) \n (\" \")"));
    CHECK(snowman(43242312) == string("  ___ \n (_*_)\n\\(o_-) \n ( : )\\\n (\" \")"));
    CHECK(snowman(33333433) == string("   _  \n  /_\\ \n (O_O) \n/(> <) \n (___)"));


//check all Toss
    CHECK(snowman(31421322) == string("   _  \n  /_\\ \n (-,o) \n<(] [)\\\n (\" \")"));
    CHECK(snowman(21114411) == string("  ___ \n .....\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(31313131) == string("   _  \n  /_\\ \n (O,.) \n/(> <)>\n ( : )"));
    CHECK(snowman(33333443) == string("   _  \n  /_\\ \n (O_O) \n/(   ) \n (___)"));



//check all Base 
    CHECK(snowman(11111111) == string("      \n _===_\n (.,.) \n<( : )>\n ( : )"));
    CHECK(snowman(12121212) == string("      \n _===_\n (..o)/\n<( : ) \n (\" \")"));
    CHECK(snowman(33333433) == string("   _  \n  /_\\ \n (O_O) \n/(> <) \n (___)"));
    CHECK(snowman(12341424) == string("      \n _===_\n (O.-) \n<(] [) \n (   )"));

}

TEST_CASE("not legal 8 digit num ") {
    
    CHECK_THROWS(snowman(91111111));
    CHECK_THROWS(snowman(28224442));
    CHECK_THROWS(snowman(55755555));
    CHECK_THROWS(snowman(21262122));
    CHECK_THROWS(snowman(11119111));
    CHECK_THROWS(snowman(12422812));
    CHECK_THROWS(snowman(11111194));
    CHECK_THROWS(snowman(12431117));

}
    
TEST_CASE("Less then 8 digit") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(22));
    CHECK_THROWS(snowman(333));
    CHECK_THROWS(snowman(4444));
    CHECK_THROWS(snowman(12341));
    CHECK_THROWS(snowman(121212));
    CHECK_THROWS(snowman(3321342));

}
TEST_CASE("more then 8 digit") {
    CHECK_THROWS(snowman(555424266));
    CHECK_THROWS(snowman(252535343));
    CHECK_THROWS(snowman(242225555));
    CHECK_THROWS(snowman(555555553));
    CHECK_THROWS(snowman(999999999));
    CHECK_THROWS(snowman(111111111));

    
}

TEST_CASE("negative 8 digit number") {
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(-44444444));
    CHECK_THROWS(snowman(-33443344));
    CHECK_THROWS(snowman(-12341234));
    CHECK_THROWS(snowman(-43214321));
    CHECK_THROWS(snowman(-32413241));
    CHECK_THROWS(snowman(-22222222));

}
