#include <SDKDDKVer.h>
#include <stdio.h>
#include <Windows.h>
#include <iostream>

// External assembly functions we want to call from here
extern "C"
{
    void hello_world_asm();
};


int main()
{
    hello_world_asm();
    return 0;
}
