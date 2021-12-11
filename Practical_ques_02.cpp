#include <iostream> 
#include<stdio.h> 
#include<stdlib.h>
using namespace std; 
int main()
{
    cout << "\n The kernel version is: \n";
    system("cat /proc/sys/kernel/osrelease");
    cout << "\n The CPU space: \n";
    system("cat/ proc/ cpuinfo |awk '/processor|model/{print}'\n");
}