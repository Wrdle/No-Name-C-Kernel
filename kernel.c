#include "include/screen.h"
#include "include/types.h"
#include "include/string.h"

int kmain()
{
    print("Hello there!");
    string cool = strReverse("Hello there!");
    print(cool);
    clearScreen();

    /*if (strContains("String", "=hjvgwdwa") == true)
    {
        print("Substring!");
    }
    else
    {
        print("Not a substring!");
    }*/
    string i = concat("Cool", "Damn");
    print(i);
}
