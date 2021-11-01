///asm keyword is used for writing assembly code...

#include <iostream>
using namespace std;
int main()
{
    cout<<"creating noise..."<<endl;
    asm{
        MOV AX,0X0200
        MOV DL,7
        INT 0X21
    };
    cout<<"end of noise"<<endl;
}
