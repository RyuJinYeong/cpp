#include <iostream>

using namespace std;

void msg(char id, int pass, string text="Hello");

int main()
{
    msg('a', 20);
    //msg(); // B
    msg('b', 30, "default");
    //msg("C++"); // D
    //msg('b', "default"); // E
}