/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Yehonadav.yadai>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;

// 6 , 6 ,7,7,7
TEST_CASE("Good snowman code") {
    
    CHECK(snowman(11114411) == string(" _===_\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(44241342) == string("  ___ \n (_*_)\n<(o -)\\\n<(   )\\\n (\" \")"));
    CHECK(snowman(31421312) == string("   _  \n  /_\\ \n<(-,o)\\\n<( : )\\\n (\" \")"));
    CHECK(snowman(11111111) == string(" _===_\n<(.,.)>\n<( : )>\n ( : )"));
    CHECK(snowman(12121212) == string(" _===_\n<(..o)/\n<( : )/\n (\" \")"));//
    CHECK(snowman(31313131) == string("   _  \n  /_\\ \n/(O,.)>\n/(> <)>\n ( : )"));
    CHECK(snowman(42424222) == string("  ___ \n (_*_)\n (-.o)/\n (] [)/\n (\" \")"));
    CHECK(snowman(12341234) == string(" _===_\n<(O.-)/\n<(> <)/\n (   )"));
    CHECK(snowman(12341424) == string(" _===_\n<(O.-) \n<(] [) \n (   )"));
    CHECK(snowman(12341111) == string(" _===_\n<(O.-)>\n<( : )>\n ( : )"));
    CHECK(snowman(34332212) == string("   _  \n  /_\\ \n\\(O O)/\n\\( : )/\n (\" \")"));
    CHECK(snowman(11223344) == string(" _===_\n/(o,o)\\\n/(   )\\\n (   )"));
    CHECK(snowman(44332211) == string("  ___ \n (_*_)\n\\(O O)/\n\\( : )/\n ( : )"));
    CHECK(snowman(43241312) == string("  ___ \n (_*_)\n<(o_-)\\\n<( : )\\\n (\" \")"));
    CHECK(snowman(14322341) == string(" _===_\n\\(O o)\\\n\\(   )\\\n ( : )"));
    CHECK(snowman(43312222) == string("  ___ \n (_*_)\n\\(O_.)/\n\\(] [)/\n (\" \")"));
    CHECK(snowman(33333333) == string("   _  \n  /_\\ \n/(O_O)\\\n/(> <)\\\n (___)"));

    /* Add more checks here */

}


TEST_CASE("GOOD INPUT BAD OUTPUT") {
    
    CHECK_FALSE(snowman(11114411) == string("_===_\n (.,.) \n ( : \n ( : )"));
    CHECK_FALSE(snowman(44241342) == string(" ___ \n (_)\n<(o -)\\\n<(   )\\\n (\" \")"));
    CHECK_FALSE(snowman(31421312) == string("  _  \n  /_\\ \n<,o)\\\n<( : )\\\n (\" \")"));
    CHECK_FALSE(snowman(11111111) == string("_===_\n<(.,.)>\n<( )>\n ( : )"));
    CHECK_FALSE(snowman(12121212) == string("_===_\n<(.)/\n<( : )/\n (\" \")"));//
    CHECK_FALSE(snowman(31313131) == string("  _  \n/_\\ \n/(O,.)>\n/(> <)>\n ( : )"));
    CHECK_FALSE(snowman(42424222) == string(" ___ \n (_*_)\n (-)/\n (] [)/\n (\" \")"));
    CHECK_FALSE(snowman(12341234) == string(" _===_\n<(O.-)/\n<(<)/\n (   )"));
    CHECK_FALSE(snowman(12341424) == string(" _===_\n<(O.-) \n<(] [) \n   )"));
    CHECK_FALSE(snowman(12341111) == string(" _===_\n<(O.>\n<( : )>\n ( : )"));
    CHECK_FALSE(snowman(34332212) == string("   _  \n  /_\\n\\(O O)/\n\\( : )/\n (\" \")"));
    CHECK_FALSE(snowman(11223344) == string(" _===_\n/(o,o\\n/(   )\\\n (   )"));
    CHECK_FALSE(snowman(44332211) == string("  ___ \n (_*_n\\(O O)/\n\\( : )/\n ( : )"));
    CHECK_FALSE(snowman(43241312) == string("  ___ \n (_*_n<(o_-)\\\n<( : )\\\n (\" \")"));
    CHECK_FALSE(snowman(14322341) == string(" _===_\n\\(O o)\n\\(   )\\\n ( : )"));
    CHECK_FALSE(snowman(43312222) == string("  ___ \n (_*_)\\(O_.)/\n\\(] [)/\n (\" \")"));
    CHECK_FALSE(snowman(33333333) == string("   _  \n  /_\\ (O_O)\\\n/(> <)\\\n (___)"));

    /* Add more checks here */

}



TEST_CASE("not legal 8 digit num ") {
    
    CHECK_THROWS(snowman(11111115));
    CHECK_THROWS(snowman(22225444));
    CHECK_THROWS(snowman(55555555));
    CHECK_THROWS(snowman(21212127));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(12422115));
    CHECK_THROWS(snowman(11111110));

}
    
   
TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(-1));
    CHECK_THROWS(snowman(44444445533));
    CHECK_THROWS(snowman(555555553553));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(999999999));
    CHECK_THROWS(snowman(1111111));

    /* Add more checks here */
}


/* Add more test cases here */
