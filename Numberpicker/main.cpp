#include <iostream>
using namespace std;
#include "problema1.h"

int main()
{
    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};
    unsigned short (*pb2)[2] = b;

    cout<<pb2<<" "<<pb2+2<<" "<<*(pb2+2)<<" "<< *(pb2+2)+1<<endl;
    cout<<*(*(pb2+2)+1)<<" "<<b[3][1]<<" "<<*pb2+1<<endl;
}




