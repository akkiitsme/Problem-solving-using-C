#include<stdio.h> 
#include<graphics.h> 
#include<dos.h> 
// function for making of rainbow 
void rainbow() 
{  
    int gdriver = DETECT,gmode; 
    int x, y, i; 
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI"); 
    x = getmaxx() / 2;//finding centre x-ordinate of screen 
    y = getmaxy() / 2;//finding centre y-ordinate of screen 
    for (i=30; i<200; i++) 
    {  
        delay(100); 
        // selecting  color for making of rainbow 
        setcolor(i/10); 
        // making of arc with fixed centre and increasing radius 
        arc(x, y, 0, 180, i-10); 
    } 
} 
// main function 
int main() 
{ 
    rainbow(); //calling the function
    return 0; 
} 
