#include <unistd.h>
#include <map> 
#include <libinput.h>

namespace params {

  int counter = 0; 

  std::string filename = "keylogs.txt";



}


static void 


int main() {
 


}


const std::map<int, std::string> key_map = {
    // letters
    {30, "a"}, {48, "b"}, {46, "c"}, {32, "d"}, {18, "e"},
    {33, "f"}, {34, "g"}, {35, "h"}, {23, "i"}, {36, "j"},
    {37, "k"}, {38, "l"}, {50, "m"}, {49, "n"}, {24, "o"},
    {25, "p"}, {16, "q"}, {19, "r"}, {31, "s"}, {20, "t"},
    {22, "u"}, {47, "v"}, {17, "w"}, {45, "x"}, {21, "y"}, {44, "z"},

    // numbers
    {2, "1"}, {3, "2"}, {4, "3"}, {5, "4"}, {6, "5"},
    {7, "6"}, {8, "7"}, {9, "8"}, {10, "9"}, {11, "0"},

    // punctuation
    {12, "-"}, {13, "="}, {26, "["}, {27, "]"},
    {39, "'"}, {40, "`"}, {41, "\\"}, {51, ","}, {52, "."}, {53, "/"},
    {43, ";"}, 

    // whitespace / editing
    {28, "[Enter]"}, {57, "[Space]"}, {14, "[Backspace]"},
    {15, "[Tab]"},   {1,  "[Esc]"},   {58, "[CapsLock]"},

    // modifiers
    {42, "[LShift]"}, {54, "[RShift]"},
    {29, "[LCtrl]"},  {97, "[RCtrl]"},
    {56, "[LAlt]"},   {100, "[RAlt]"},

    // navigation
    {103, "[Up]"}, {108, "[Down]"}, {105, "[Left]"}, {106, "[Right]"},
    {102, "[Home]"}, {107, "[End]"}, {104, "[PageUp]"}, {109, "[PageDown]"},
    {110, "[Insert]"}, {111, "[Delete]"},

    // function keys
    {59, "[F1]"},  {60, "[F2]"},  {61, "[F3]"},  {62, "[F4]"},
    {63, "[F5]"},  {64, "[F6]"},  {65, "[F7]"},  {66, "[F8]"},
    {67, "[F9]"},  {68, "[F10]"}, {87, "[F11]"}, {88, "[F12]"},
};
