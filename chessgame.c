#include<stdio.h>
#include<string.h>
#include"move.h"
#include"EvolvePawn.h"
//#include"draft.h"
#include"chessboard.h"
#include<stdlib.h>
#include<windows.h>
#include"premove.h"
#include"checkmate.h"
//#include"print.h"
#include"startupmenu.h"
#include"howtoplay.h"
#include"mainmenu.h"
void go(int x, int y)
{
    HANDLE Screen;
    Screen = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Position={x,y};

    SetConsoleCursorPosition(Screen,Position);
}
void bishop1(int x, int y)
{
    go(x,y);
    printf("    *     ");
    go(x,y+1);
    printf("   /+\\   ");
    go(x,y+2);
    printf("   \\B/   ");
    go(x,y+3);
    printf("    |     ");
    go(x,y+4);
    printf("   /-\\   ");
}
void queen1(int x,int y)
{
    go(x,y);
    printf("  * * *  ");
    go(x,y+1);
    printf("  | | |  ");
    go(x,y+2);
    printf("  \\ Q /  ");
    go(x,y+3);
    printf("    +    ");
    go(x,y+4);
    printf("  /---\\  ");
}
void rook1(int x,int y)
{
    go(x,y);
    printf("         ");
    go(x,y+1);
    printf("  \\=|=/  ");
    go(x,y+2);
    printf("   [R]   ");
    go(x,y+3);
    printf("   [+]   ");
    go(x,y+4);
    printf("  [ + ]  ");
}
void pawn1(int x,int y)
{
    go(x,y+4);
    printf("         ");
    go(x,y);
    printf("    *    ");
    go(x,y+1);
    printf("   \\+/   ");
    go(x,y+2);
    printf("    P    ");
    go(x,y+3);
    printf("   /+\\   ");
}
void horse1(int x,int y)
{
    go(x,y);
    printf("         ");
    go(x,y+1);
    printf("   /2\\   ");
    go(x,y+2);
    printf("  (/  )  ");
    go(x,y+3);
    printf("    //   ");
    go(x,y+4);
    printf("  KNIGHT  ");
}
void king1(int x,int y)
{
    go(x,y);
    printf("  **  *  ");
    go(x,y+1);
    printf("  ** *   ");
    go(x,y+2);
    printf("  ***    ");
    go(x,y+3);
    printf("  ** *   ");
    go(x,y+4);
    printf("  **  *  ");
}
void blank(int x,int y)
{
    go(x,y);
    printf("         ");
    go(x,y+1);
    printf("         ");
    go(x,y+2);
    printf("         ");
    go(x,y+3);
    printf("         ");
    go(x,y+4);
    printf("         ");
}

int main(){
	//create board //
	startupmenu();
    //CHOOSING WAY
    char choice;
    int index=0;
    while(index==0)
    {
        choice=getch();
        if(choice=='P'||choice=='p')
        {
            index=1;
            system("cls");
            go(55,12);
            printf("LOADING");
            Sleep(500);printf(".");
            Sleep(500);printf(".");
            Sleep(500);printf(".");
        }
        else if(choice=='h'||choice=='H')
        {
            howtoplay();
            mainmenu();
        }
        else if(choice=='e'||choice=='E')
        {
            return;
        }
    }
    system("cls");
	//create board //
	system("CLS");
	HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int row,colunm,player;
	char board[8][8];

		board[0][0]='R';
		board[0][1]='H';
		board[0][2]='B';
		board[0][3]='Q';
		board[0][4]='K';
		board[0][5]='B';
		board[0][6]='H';
		board[0][7]='R';

		board[7][0]='r';
		board[7][1]='h';
		board[7][2]='b';
		board[7][3]='q';
		board[7][4]='k';
		board[7][5]='b';
		board[7][6]='h';
		board[7][7]='r';

	for(row=0;row<8;row++){
		board[1][row]='P';
	}
	for(row=0;row<8;row++){
		board[6][row]='p';
	}
	for(row=0;row<8;row++)
    {
		for(colunm=2;colunm<6;colunm++)
		{
			board[colunm][row]='*';
		}
	}

	chesscreator(&board[0][0]);
	// end createboard //

	int u=0;
    char C1,C2;
    char c1,c2;
    char z,trash1;
    int loop=0;
    int exitt=0;
	while(u!=1)
    {   int m=1;
        exitt=0;
        int q=0;
        while(m!=1||q==0)
        {   q=1;
            m=1;
            int check1[8][8],check2[8][8],help1[8][8],help2[8][8];
            int x1,x2,y1,y2;
            SetConsoleTextAttribute(hConsole, 13);
            go(88,10);printf("++++++++++++++++++++++++++++++++++++++++++++++\n");
            go(88,11);printf("+                                            +\n");
            go(88,12);printf("+                                            +\n");
            go(88,13);printf("+                                            +\n");
            go(88,14);printf("+                                            +\n");
            go(88,15);printf("+                                            +\n");
            go(88,16);printf("+                                            +\n");
            go(88,17);printf("++++++++++++++++++++++++++++++++++++++++++++++\n");
            go(90,12);printf("player 1 turn");
            go(90,13);printf("Enter initial position : ");
            c1=getch();printf(" x = %c",c1);
            C1=getch();go(90,14);printf("                          y = %c",C1);

            go(90,15);printf("Enter final position : ");
            c2=getch();printf("   x = %c",c2);
            C2=getch();go(90,16);printf("                          y = %c",C2);

            loop++;
            if(c1=='E')
            {
                exitt=1;
            }
            if(c1=='8')
            {
                x1=0;
            }
            else if(c1=='7')
            {
                x1=1;
            }
            else if(c1=='6')
            {
                x1=2;
            }
            else if(c1=='5')
            {
                x1=3;
            }
            else if(c1=='4')
            {
                x1=4;
            }
            else if(c1=='3')
            {
                x1=5;
            }
            else if(c1=='2')
            {
                x1=6;
            }
            else if(c1=='1')
            {
                x1=7;
            }
            else{x1=9;}
            if(c2=='E')
            {
                exitt++;
            }
            if(c2=='8')
            {
                x2=0;
            }else if(c2=='7')
            {
                x2=1;
            }else if(c2=='6')
            {
                x2=2;
            }else if(c2=='5')
            {
                x2=3;
            }else if(c2=='4')
            {
                x2=4;
            }else if(c2=='3')
            {
                x2=5;
            }else if(c2=='2')
            {
                x2=6;
            }else if(c2=='1')
            {
                x2=7;
            }
            else{x2=9;}
            if(C1=='A')
            {
                y1=0;
            }
            else if(C1=='B')
            {
                y1=1;
            }
            else if(C1=='C')
            {
                y1=2;
            }
            else if(C1=='D')
            {
                y1=3;
            }
            else if(C1=='E')
            {
                y1=4;
            }
            else if(C1=='F')
            {
                y1=5;
            }
           else if(C1=='G')
            {
                y1=6;
            }
            else if(C1=='H')
            {
                y1=7;
            }
            else{y1=9;}
            if (C2=='A')
            {
                y2=0;
            }
            else if(C2=='B')
            {
                y2=1;
            }
            else if(C2=='C')
            {
                y2=2;
            }
            else if(C2=='D')
            {
                y2=3;
            }
            else if(C2=='E')
            {
                y2=4;
            }
           else if(C2=='F')
            {
                y2=5;
            }
            else if(C2=='G')
            {
                y2=6;
            }
            else if(C2=='H')
            {
                y2=7;
            }

            else{y2=9;}



            for(int ii=0;ii<8;ii++)
            {
                for(int jj=0;jj<8;jj++)
                    {
                        check1[ii][jj]=0;
                        check2[ii][jj]=0;
                        help1[ii][jj]=0;
                        help2[ii][jj]=0;
                    }
            }
        //player 1
            if(exitt==2)
            {
                go(50,50);
                printf("player 2 win");
                return;
            }
            else if(x1>7||x2>7||y1>7||y2>7||x1<0||x2<0||y1<0||y2<0)
            {
                m=1000;
                loop=1;
                SetConsoleTextAttribute(hConsole, 4);
                go(90,9);printf("please enter number in 0-7 A-H");
            }
            else if(board[x1][y1]=='r')
            {
                go(90,9);printf("                                 ");
                go(90,9);
                SetConsoleTextAttribute(hConsole, 4);
                char capture = board[x2][y2];
                rook(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0&&m==1)
                        {
                            m=1000;
                            rook(&board[0][0],x1,y1,x2,y2,&m);
                            printf("Illegal move");
                            board[x2][y2]=capture;
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==1)
                        {
                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='p')
            {
                go(90,9);printf("                                 ");
                go(90,9);
                SetConsoleTextAttribute(hConsole, 4);
                char capture=board[x2][y2];
                pawn(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0&&m==1)
                        {
                            m=1000;
                            printf("Illegal move");
                            board[x2][y2]=capture;
                            board[x1][y1]='p';
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==1)
                        {

                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='q')
            {
                go(90,9);printf("                                    ");
                go(90,9);
                SetConsoleTextAttribute(hConsole, 4);
                char capture=board[x2][y2];
                queen(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0&&m==1)
                        {
                            m=1000;
                            printf("Illegal move");
                            board[x1][y1]='q';
                            board[x2][y2]=capture;
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==1)
                        {

                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='b')
            {
                go(90,9);printf("                                       ");
                go(90,9);
                SetConsoleTextAttribute(hConsole, 4);
                char capture=board[x2][y2];
                bishop(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0&&m==1)
                        {
                            m=1000;
                            board[x2][y2]=capture;
                            board[x1][y1]='b';
                            printf("Illegal move");
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==1)
                        {

                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='k')
            {
                go(90,9);printf("                                       ");
                go(90,9);
                SetConsoleTextAttribute(hConsole, 4);
                king(&board[0][0],x2,y2,x1,y1,&m);
                char capture = board[x2][y2];
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                if(check2[x2][y2]!=0&&m==1)
                {
                    printf("Illegal move!!");
                    king(&board[0][0],x1,y1,x2,y2,&m);
                    char capture = board[x2][y2];
                    m=1000;
                }

                else
                {
                    for(int ii=0;ii<8;ii++)
                    {
                        for(int jj=0;jj<8;jj++)
                        {
                            if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==1)
                            {
                            printf("check!!");

                            }
                        }
                    }
                }
            }
            else if(board[x1][y1]=='h')
            {
                go(90,9);printf("                                     ");
                go(90,9);
                SetConsoleTextAttribute(hConsole, 4);
                char capture=board[x2][y2];
                knight(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0&&m==1)
                        {
                            m=1000;
                            board[x1][y1]='h';
                            board[x2][y2]=capture;
                            printf("Illegal move");
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==1)
                        {

                            printf("check!!");

                        }
                    }
                }
            }
            else
            {
                go(90,9);printf("                                        ");
                go(90,15);printf("no pieces found\n\n\n\n");
                m=1000;
            }
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    check1[i][j]=0;
                    check2[i][j]=0;
                    help1[i][j]=0;
                    help2[i][j]=0;
                }
            }
            //end player 1 moves
            transformpawn(&board[0][0]);

        }
        chesscreator(&board[0][0]);
        // end createboard //
        m=2;
        exitt=0;
        int r=0;
        while(m!=2||r==0)
        {   r=1;
            m=2;
            int check1[8][8],check2[8][8],locate1[8][8],locate2[8][8],help1[8][8],help2[8][8];
            int x1,x2,y1,y2;
            SetConsoleTextAttribute(hConsole, 10);
            go(88,20);printf("++++++++++++++++++++++++++++++++++++++++++++++\n");
            go(88,21);printf("+                                            +\n");
            go(88,22);printf("+                                            +\n");
            go(88,23);printf("+                                            +\n");
            go(88,24);printf("+                                            +\n");
            go(88,25);printf("+                                            +\n");
            go(88,26);printf("+                                            +\n");
            go(88,27);printf("++++++++++++++++++++++++++++++++++++++++++++++\n");

            go(90,22);printf("player 2 turn");
            go(90,23);printf("Enter initial position : ");
            c1=getch();printf(" x = %c",c1);
            C1=getch();go(90,24);printf("                          y = %c",C1);

            go(90,25);printf("Enter final position : ");
            c2=getch();printf("   x = %c",c2);
            C2=getch();go(90,26);printf("                          y = %c",C2);


            for(int ii=0;ii<8;ii++)
            {
                for(int jj=0;jj<8;jj++)
                    {
                        check1[ii][jj]=0;
                        check2[ii][jj]=0;
                        help1[ii][jj]=0;
                        help2[ii][jj]=0;
                    }
            }
            if(c1=='E')
            {
                exitt=1;
            }
            else if(c1=='8')
            {
                x1=0;
            }
            else if(c1=='7')
            {
                x1=1;
            }
            else if(c1=='6')
            {
                x1=2;
            }
            else if(c1=='5')
            {
                x1=3;
            }
            else if(c1=='4')
            {
                x1=4;
            }
            else if(c1=='3')
            {
                x1=5;
            }
            else if(c1=='2')
            {
                x1=6;
            }
            else if(c1=='1')
            {
                x1=7;
            }
            else{x1=9;}
            if(c2=='E')
            {
                exitt++;;
            }
            if(c2=='8')
            {
                x2=0;
            }else if(c2=='7')
            {
                x2=1;
            }else if(c2=='6')
            {
                x2=2;
            }else if(c2=='5')
            {
                x2=3;
            }else if(c2=='4')
            {
                x2=4;
            }else if(c2=='3')
            {
                x2=5;
            }else if(c2=='2')
            {
                x2=6;
            }else if(c2=='1')
            {
                x2=7;
            }
            else{x2=9;}
            if(C1=='A')
            {
                y1=0;
            }
            else if(C1=='B')
            {
                y1=1;
            }
            else if(C1=='C')
            {
                y1=2;
            }
            else if(C1=='D')
            {
                y1=3;
            }
            else if(C1=='E')
            {
                y1=4;
            }
            else if(C1=='F')
            {
                y1=5;
            }
           else if(C1=='G')
            {
                y1=6;
            }
            else if(C1=='H')
            {
                y1=7;
            }
            else{y1=9;}
            if (C2=='A')
            {
                y2=0;
            }
            else if(C2=='B')
            {
                y2=1;
            }
            else if(C2=='C')
            {
                y2=2;
            }
            else if(C2=='D')
            {
                y2=3;
            }
            else if(C2=='E')
            {
                y2=4;
            }
           else if(C2=='F')
            {
                y2=5;
            }
            else if(C2=='G')
            {
                y2=6;
            }
            else if(C2=='H')
            {
                y2=7;
            }
            else{y2=9;}
            m=2;
        //player 2
            if(exitt==2)
            {
                go(50,50);
                printf("player 1 win");
                return;
            }
            else if(x1>7||x2>7||y1>7||y2>7||x1<0||x2<0||y1<0||y2<0)
            {
                m=1000;SetConsoleTextAttribute(hConsole, 4);
                go(90,19);printf("please enter 0-7 A-H ");
            }
            else if(board[x1][y1]=='R'&&m==2)
            {
                go(90,19);printf("                                         ");
                go(90,19);
                SetConsoleTextAttribute(hConsole, 4);
                char capture=board[x2][y2];
                rook(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==2)
                        {
                            m=1000;
                            board[x1][y1]='R';
                            board[x2][y2]=capture;
                            printf("Illegal move");
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0)
                        {

                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='P'&&m==2)
            {
                go(90,19);printf("                                         ");
                go(90,19);
                char capture=board[x2][y2];
                SetConsoleTextAttribute(hConsole, 4);
                pawn(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==2)
                        {
                            m=1000;
                            board[x1][y1]='P';
                            board[x2][y2]=capture;
                            printf("Illegal move");
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0&&m==2)
                        {
                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='Q'&&m==2)
            {
                go(90,19);printf("                                          ");
                go(90,19);
                char capture=board[x2][y2];
                queen(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==2)
                        {
                            m=1000;
                            board[x1][y1]='Q';
                            board[x2][y2]=capture;
                            printf("Illegal move!!");
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0)
                        {
                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='B'&&m==2)
            {
                go(90,19);printf("                                        ");
                go(90,19);
                char capture = board[x2][y2];
                bishop(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==2)
                        {
                            m=1000;
                            board[x1][y1]='B';
                            board[x2][y2]=capture;
                            printf("Illegal move!!");
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0)
                        {

                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='K'&&m==2)
            {
                go(90,19);printf("                                      ");
                go(90,19);
                king(&board[0][0],x2,y2,x1,y1,&m);
                char capture = board[x2][y2];
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                if(check1[x2][y2]!=0&&m==2)
                {
                    printf("Illegal move");
                    m=1000;
                    king(&board[0][0],x1,y1,x2,y2,&m);
                    board[x2][y2] = capture;
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0)
                        {

                            printf("check!!");

                        }
                    }
                }
            }
            else if(board[x1][y1]=='H'&&m==2)
            {
                go(90,19);printf("                                         ");
                go(90,19);
                char capture = board[x2][y2];
                knight(&board[0][0],x2,y2,x1,y1,&m);
                SetConsoleTextAttribute(hConsole, 15);
                Check(&board[0][0],&check1[0][0],&check2[0][0],&help1[0][0],&help2[0][0]);
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='K'&&check1[ii][jj]>0&&m==2)
                        {
                            board[x1][y1]='H';
                            board[x2][y2]=capture;
                            printf("Illegal move!!");
                            m=1000;
                        }
                    }
                }
                for(int ii=0;ii<8;ii++)
                {
                    for(int jj=0;jj<8;jj++)
                    {
                        if(board[ii][jj]=='k'&&check2[ii][jj]>0)
                        {
                            printf("check!!");

                        }
                    }
                }
            }
            else{m=1000;go(90,19);printf("                                      ");
            go(90,25);printf("no pieces found");}
            for(int i=0;i<8;i++)
            {
                for(int j=0;j<8;j++)
                {
                    check1[i][j]=0;
                    check2[i][j]=0;
                    help1[i][j]=0;
                    help2[i][j]=0;
                }
            }
        }
        chesscreator(&board[0][0]);
        // end createboard //
    }

}
