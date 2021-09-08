#include<stdio.h>
//#include "draft.h"
#include<windows.h>
#include"print.h"

void chesscreator(char bb[][8])
{
    int coun;
    int a=279;
    /*for (int z=0;z<50;z++)
    {
        go(z,0);
        printf("%d",z%10);
    }
    for (int z=0;z<50;z++)
    {
        go(0,z);
        printf("%d",z);
    }
    for (int x=1;x<50;x++)
    {
        for(int y=1;y<50;y++)
        {
            go(x,y);
            printf("%c",a);
        }
    }*/


    go(11,3);
    for(coun=0;coun<74;coun++)
    {
        go(coun +11,8);
        printf("%c",a);
    }

    for(coun=0;coun<40;coun++) //border line
    {
        go(10,9+coun);
        printf("%c",a);
        go(84,9+coun);
        printf("%c",a);
        go(11,9+coun);
        printf("%c",a);
        go(83,9+coun);
        printf("%c",a);
    }
    for(coun=0;coun<74;coun++)//border line
    {
        go(coun +11,49);
        printf("%c",a);
    }



     HANDLE hConsole;
     hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hConsole, 15);

     for(int i=0;i<8;i++) //print board
     {
         for(int j=0;j<8;j++)
         {
             if((i+j)%2)
             {
                 if(bb[i][j]=='*')
                 {
                     SetConsoleTextAttribute(hConsole, 138);
                     blank(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='B')
                 {
                     SetConsoleTextAttribute(hConsole, 138);
                     bishop1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='b')
                 {
                     SetConsoleTextAttribute(hConsole, 141);
                     bishop1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='P')
                 {
                     SetConsoleTextAttribute(hConsole, 138);
                     pawn1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='p')
                 {
                     SetConsoleTextAttribute(hConsole, 141);
                     pawn1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='Q')
                 {
                     SetConsoleTextAttribute(hConsole, 138);
                     queen1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='q')
                 {
                     SetConsoleTextAttribute(hConsole, 141);
                     queen1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='K')
                 {
                     SetConsoleTextAttribute(hConsole, 138);
                     king1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='k')
                 {
                     SetConsoleTextAttribute(hConsole, 141);
                     king1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='R')
                 {
                     SetConsoleTextAttribute(hConsole, 138);
                     rook1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='r')
                 {
                     SetConsoleTextAttribute(hConsole, 141);
                     rook1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='H')
                 {
                     SetConsoleTextAttribute(hConsole, 138);
                     horse1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='h')
                 {
                     SetConsoleTextAttribute(hConsole, 141);
                     horse1(12+9*j,9+5*i);
                 }
             }
             else
             {
                 if(bb[i][j]=='*')
                 {
                     SetConsoleTextAttribute(hConsole, 234);
                     blank(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='B')
                 {
                     SetConsoleTextAttribute(hConsole, 234);
                     bishop1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='b')
                 {
                     SetConsoleTextAttribute(hConsole, 237);
                     bishop1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='P')
                 {
                     SetConsoleTextAttribute(hConsole, 234);
                     pawn1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='p')
                 {
                     SetConsoleTextAttribute(hConsole, 237);
                     pawn1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='Q')
                 {
                     SetConsoleTextAttribute(hConsole, 234);
                     queen1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='q')
                 {
                     SetConsoleTextAttribute(hConsole, 237);
                     queen1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='K')
                 {
                     SetConsoleTextAttribute(hConsole, 234);
                     king1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='k')
                 {
                     SetConsoleTextAttribute(hConsole, 237);
                     king1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='R')
                 {
                     SetConsoleTextAttribute(hConsole, 234);
                     rook1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='r')
                 {
                     SetConsoleTextAttribute(hConsole, 237);
                     rook1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='H')
                 {
                     SetConsoleTextAttribute(hConsole, 234);
                     horse1(12+9*j,9+5*i);
                 }
                 if(bb[i][j]=='h')
                 {
                     SetConsoleTextAttribute(hConsole, 237);
                     horse1(12+9*j,9+5*i);
                 }

             }
         }
     }
     /*for(int m=0;m<=5;m++)
     {
         for(int n=0;n<=19;n++)
         {
             go(110+n,10+m);
             if((10+m)==10||(10+m)==15)
             {
                 printf("+\n");
             }
         }
     }*/

    SetConsoleTextAttribute(hConsole, 15);
    p8();SetConsoleTextAttribute(hConsole, 10);
    p7();SetConsoleTextAttribute(hConsole, 15);
    p6();SetConsoleTextAttribute(hConsole, 10);
    p5();SetConsoleTextAttribute(hConsole, 15);
    p4();SetConsoleTextAttribute(hConsole, 10);
    p3();SetConsoleTextAttribute(hConsole, 15);
    p2();SetConsoleTextAttribute(hConsole, 10);
    p1();
    pa();SetConsoleTextAttribute(hConsole, 15);
    pb();SetConsoleTextAttribute(hConsole, 10);
    pc();SetConsoleTextAttribute(hConsole, 15);
    pd();SetConsoleTextAttribute(hConsole, 10);
    pe();SetConsoleTextAttribute(hConsole, 15);
    pf();SetConsoleTextAttribute(hConsole, 10);
    pg();SetConsoleTextAttribute(hConsole, 15);
    ph();SetConsoleTextAttribute(hConsole, 15);
}
