#include<stdio.h>
void Check(char board[][8],int check1[][8],int check2[][8],int help1[][8],int help2[][8])
{
    int precheck1[8][8],precheck2[8][8],locate1[8][8],locate2[8][8];
    for( int i=0 ; i < 8 ; i++ )
    {
        for( int j= 0 ; j < 8 ; j++)
        {
            if( board[i][j] == 'h' )//Knight
            {
                if(i+2 < 8)
                {
                    if( j+1 < 8)
                    {
                        check1[i+2][j+1]++;

                    }
                    if( j-1 >= 0)
                    {
                        check1[i+2][j-1]++;

                    }
                }
                if(i+1< 8)
                {
                    if(j+2< 8)
                    {
                        check1[i+1][j+2]++;

                    }
                    if(j-2 >=0 )
                    {
                        check1[i+1][j-2]++;

                    }
                }
                if(i-1>= 0)
                {
                    if(j+2< 8)
                    {
                        check1[i-1][j+2]++;

                    }
                    if(j-2 >=0 )
                    {
                        check1[i-1][j-2]++;

                    }
                }
                if(i-2 >= 0)
                {
                    if( j+1 < 8)
                    {
                        check1[i-2][j+1]++;

                    }
                    if( j-1 >= 0)
                    {
                        check1[i-2][j-1]++;

                    }
                }
            }
            if( board[i][j] == 'H' )//Knight
            {
                if(i+2 < 8)
                {
                    if( j+1 < 8)
                    {
                        check2[i+2][j+1]++;

                    }
                    if( j-1 >= 0)
                    {
                        check2[i+2][j-1]++;
                    }
                }
                if(i+1< 8)
                {
                    if(j+2< 8)
                    {
                        check2[i+1][j+2]++;

                    }
                    if(j-2 >=0 )
                    {
                        check2[i+1][j-2]++;

                    }
                }
                if( i-1>= 0)
                {
                    if(j+2< 8)
                    {
                        check2[i-1][j+2]++;

                    }
                    if(j-2 >=0 )
                    {
                        check2[i-1][j-2]++;

                    }
                }
                if(i-2 >= 8)
                {
                    if( j+1 < 8)
                    {
                        check2[i-2][j+1]++;

                    }
                    if( j-1 >= 0)
                    {
                        check2[i-2][j-1]++;


                    }
                }
            }

            if(board[i][j]=='k')
            {
                if(i>0)if(j>0)check1[i-1][j-1]++;
                if(j>0)check1[i][j-1]++;
                if(i<7)if(j>0)check1[i+1][j-1]++;
                if(i>0)check1[i-1][j]++;
                if(i<7)check1[i+1][j]++;
                if(i>0)if(j<7)check1[i-1][j+1]++;
                if(j<7)check1[i][j+1]++;
                if(i<7)if(j<7)check1[i+1][j+1]++;
            }
        if(board[i][j]=='K')
            {
                if(i>0)if(j>0)check2[i-1][j-1]++;
                if(j>0)check2[i][j-1]++;
                if(i<7)if(j>0)check2[i+1][j-1]++;
                if(i>0)check2[i-1][j]++;
                if(i<7)check2[i+1][j]++;
                if(i>0)if(j<7)check2[i-1][j+1]++;
                if(j<7)check2[i][j+1]++;
                if(i<7)if(j<7)check2[i+1][j+1]++;
            }
        if(board[i][j]=='p')
        {

                if(j>0)
                {
                    check1[i-1][j-1]++;

                }
                if(j<7)
                {
                    check1[i-1][j+1]++;

                }

        }
        if(board[i][j]=='P')
        {

                if(j>0)
                {
                    check2[i+1][j-1]++;

                }
                if(j<7)
                {
                    check2[i+1][j+1]++;

                }

        }

        if(board[i][j]=='b')
        {
            for(int xx = 1 ; xx <= 7-i ; xx++)
            {
                if(j+xx<8)
                    {
                        if(board[i+xx][j+xx]!='*')
                        {
                            check1[i+xx][j+xx]++;

                            if(board[i+xx][j+xx]=='K')
                            {
                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help1[i+o][j+o]++;
                                }
                            }
                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= 7-i ; xx++)
            {
                if(j-xx>=0)
                    {

                        if(board[i+xx][j-xx]!='*')
                        {
                            check1[i+xx][j-xx]++;

                            if(board[i+xx][j-xx]=='K')
                            {

                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help1[i+o][j-o]++;
                                }

                            }


                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= i ; xx++)
            {
                if(j+xx<8)
                    {

                        if(board[i-xx][j+xx]!='*')
                        {
                            check1[i-xx][j+xx]++;

                            if(board[i-xx][j+xx]=='K')
                            {

                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help1[i-o][j+o]++;
                                }

                            }
                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= i ; xx++)
            {
                if(j-xx>=0)
                    {

                        if(board[i-xx][j-xx]!='*')
                        {

                            check1[i-xx][j-xx]++;
                            if(board[i-xx][j-xx]=='K')
                            {

                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help1[i-o][j-o]++;
                                }

                            }
                            break;
                        }
                    }
            }
        }
        if(board[i][j]=='B')
        {
            for(int xx = 1 ; xx <= 7-i ; xx++)
            {
                if(j+xx<8)
                    {

                        if(board[i+xx][j+xx]!='*')
                        {
                            if(board[i+xx][j+xx]=='k')
                            {

                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help2[i+o][j+o]++;
                                }
                            }
                            check2[i+xx][j+xx]++;

                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= 7-i ; xx++)
            {
                if(j-xx>=0)
                    {

                        if(board[i+xx][j-xx]!='*')
                        {
                            check2[i+xx][j-xx]++;

                            if(board[i+xx][j-xx]=='k')
                            {

                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help2[i+o][j-o]++;
                                }
                            }
                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= i ; xx++)
            {
                if(j+xx<8)
                    {

                        if(board[i-xx][j+xx]!='*')
                        {

                            check2[i-xx][j+xx]++;
                            if(board[i-xx][j+xx]=='k')
                            {

                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help2[i-o][j+o]++;
                                }
                            }
                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= i ; xx++)
            {
                if(j-xx>=0)
                    {

                        if(board[i-xx][j-xx]!='*')
                        {
                            check2[i-xx][j-xx]++;
                            if(board[i-xx][j-xx]=='k')
                            {

                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help2[i-o][j-o]++;
                                }
                            }
                            break;
                        }
                    }
            }
        }

        if(board[i][j]=='r')
        {

                for(int ii=1;ii<=i;ii++)
                {

                    if( board[i-ii][j]!='*')
                    {
                        if( board[i-ii][j]=='K')
                        {

                            for(int o=0 ; o < ii;o++)
                            {
                                help1[i-o][j]++;
                            }
                        }
                        check1[i-ii][j]++;

                        break;
                    }

                }
                for(int iii = 1 ; iii < 8-i ; iii++)
                {

                    if( board[i + iii][j]!='*')
                    {
                        if(board[i+iii][j]=='K')
                        {

                            for(int o=0;o<iii;o++)
                            {
                                help1[i+o][j]++;
                            }
                        }

                        check1[i+iii][j]++;
                        break;
                    }
                }
                for(int iii=1 ; iii<=j;iii++)
                {

                    if(board[i][j-iii]!='*')
                    {
                        if(board[i][j-iii]=='K')
                        {

                            for(int o=0; o<iii;o++)
                            {
                                help1[i][j-o]++;
                            }
                        }
                        check1[i][j-iii]++;

                        break;
                    }

                }
                for(int iii = 1 ; iii < 8-j ; iii++)
                {

                    if( board[i ][j+iii]!='*')
                    {
                        check1[i][j+iii]++;

                        if(board[i][j+iii]=='K')
                        {

                            for(int o=0;o<iii;o++)
                            {
                                help1[i][j+o]++;
                            }
                        }
                        break;
                    }
                }
        }
        if(board[i][j]=='R')
        {

                for(int ii=1;ii<=i;ii++)
                {

                    if( board[i-ii][j]!='*')
                    {
                        if(board[i-ii][j]=='k')
                        {

                            for(int o=0;o<ii;o++)
                            {
                                help2[i-o][j]++;
                            }
                        }
                        check2[i-ii][j]++;

                        break;
                    }

                }
                for(int iii = 1 ; iii < 8-i ; iii++)
                {

                    if( board[i + iii][j]!='*')
                    {
                        if(board[i+iii][j]=='k')
                        {
                            locate2[i][j]++;

                            for(int o=0;o<iii;o++)
                            {
                                help2[i+o][j]++;
                            }
                        }
                        check2[i+iii][j]++;

                        break;
                    }
                }
                for(int iii=1 ; iii<=j;iii++)
                {

                    if(board[i][j-iii]!='*')
                    {
                        if(board[i][j-iii]=='k')
                        {

                            for(int o=0;o<iii;o++)
                            {
                                help2[i][j-o]++;
                            }
                        }
                        check2[i][j-iii]++;

                        break;
                    }

                }
                for(int iii = 1 ; iii < 8-j ; iii++)
                {

                    if( board[i ][j+iii]!='*')
                    {
                        if(board[i][j+iii]=='k')
                        {

                            for(int o=0;o<iii;o++)
                            {
                                help2[i][j+o]++;
                            }
                        }
                        check2[i][j+iii]++;

                        break;
                    }
                }
        }

        if(board[i][j]=='q')
        {
           for(int xx = 1 ; xx <= 7-i ; xx++)
            {
                if(j+xx<8)
                    {
                        if(board[i+xx][j+xx]!='*')
                        {
                            check1[i+xx][j+xx]++;



                            if(board[i+xx][j+xx]=='K')
                            {
                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help1[i+o][j+o]++;
                                }
                            }
                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= 7-i ; xx++)
            {
                if(j-xx>=0)
                    {

                        if(board[i+xx][j-xx]!='*')
                        {
                            check1[i+xx][j-xx]++;

                            if(board[i+xx][j-xx]=='K')
                            {

                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help1[i+o][j-o]++;
                                }

                            }


                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= i ; xx++)
            {
                if(j+xx<8)
                    {

                        if(board[i-xx][j+xx]!='*')
                        {
                            check1[i-xx][j+xx]++;

                            if(board[i-xx][j+xx]=='K')
                            {
                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help1[i-o][j+o]++;
                                }

                            }
                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= i ; xx++)
            {
                {
                if(j-xx>=0)
                    {

                        if(board[i-xx][j-xx]!='*')
                        {

                            check1[i-xx][j-xx]++;
                            if(board[i-xx][j-xx]=='K')
                            {
                                locate1[i][j]++;
                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help1[i-o][j-o]++;
                                }
                                precheck1[i-xx-1][j-xx-1]++;
                            }
                            break;
                        }
                    }
            }
            }
            for(int ii=1;ii<=i;ii++)
                {

                    if( board[i-ii][j]!='*')
                    {
                        if( board[i-ii][j]=='K')
                        {
                            precheck1[i-ii+1][j]++;
                            locate1[i][j]++;
                            for(int o=0 ; o < ii;o++)
                            {
                                help1[i-o][j]++;
                            }
                        }
                        check1[i-ii][j]++;
                        precheck1[i-ii-1][j]++;
                        break;
                    }

                }
                for(int iii = 1 ; iii < 8-i ; iii++)
                {

                    if( board[i + iii][j]!='*')
                    {
                        if(board[i+iii][j]=='K')
                        {
                            precheck1[i+iii-1][j]++;
                            locate1[i][j]++;
                            for(int o=0;o<iii;o++)
                            {
                                help1[i+o][j]++;
                            }
                        }
                        precheck1[i+iii+1][j]++;
                        check1[i+iii][j]++;
                        break;
                    }
                }
                for(int iii=1 ; iii<=j;iii++)
                {

                    if(board[i][j-iii]!='*')
                    {
                        if(board[i][j-iii]=='K')
                        {
                            locate1[i][j]++;
                            precheck1[i][j-iii+1]++;
                            for(int o=0; o<iii;o++)
                            {
                                help1[i][j-o]++;
                            }
                        }
                        check1[i][j-iii]++;
                        precheck1[i][j-iii-1]++;
                        break;
                    }

                }
                for(int iii = 1 ; iii < 8-j ; iii++)
                {

                    if( board[i ][j+iii]!='*')
                    {
                        check1[i][j+iii]++;
                        precheck1[i][j+iii+1]++;
                        if(board[i][j+iii]=='K')
                        {
                            locate1[i][j]++;
                            precheck1[i][j+iii-1]++;
                            for(int o=0;o<iii;o++)
                            {
                                help1[i][j+o]++;
                            }
                        }
                        break;
                    }
                }
        }


        if(board[i][j]=='Q')
        {
           for(int xx = 1 ; xx <= 7-i ; xx++)
            {
                if(j+xx<8)
                    {
                        if(board[i+xx][j+xx]!='*')
                        {
                            check2[i+xx][j+xx]++;
                            if(board[i+xx][j+xx]=='k')
                        {
                            precheck2[i+xx-1][j+xx-1]++;
                            locate2[i][j]++;
                        }
                            precheck2[i+xx+1][j+xx+1]++;
                            if(board[i+xx][j+xx]=='k')
                            {
                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help2[i+o][j+o]++;
                                }
                            }
                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= 7-i ; xx++)
            {
                if(j-xx>=0)
                    {

                        if(board[i+xx][j-xx]!='*')
                        {
                            check2[i+xx][j-xx]++;
                            precheck2[i+xx+1][j-xx-1]++;
                            if(board[i+xx][j-xx]=='k')
                            {
                                locate2[i][j]++;
                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help2[i+o][j-o]++;
                                }
                                precheck2[i+xx-1][j-xx+1]++;
                            }


                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= i ; xx++)
            {
                if(j+xx<8)
                    {

                        if(board[i-xx][j+xx]!='*')
                        {
                            check2[i-xx][j+xx]++;
                            precheck2[i-xx-1][j+xx+1]++;
                            if(board[i-xx][j+xx]=='k')
                            {
                                locate2[i][j]++;
                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help2[i-o][j+o]++;
                                }
                                precheck2[i-xx+1][j+xx-1]++;
                            }
                            break;
                        }
                    }
            }
            for(int xx = 1 ; xx <= i ; xx++)
            {
                {
                if(j-xx>=0)
                    {

                        if(board[i-xx][j-xx]!='*')
                        {
                            precheck2[i-xx+1][j-xx+1]++;
                            check2[i-xx][j-xx]++;
                            if(board[i-xx][j-xx]=='k')
                            {
                                locate2[i][j]++;
                                for(int o = 1 ; o < xx ;o++)
                                {
                                    help2[i-o][j-o]++;
                                }
                                precheck2[i-xx-1][j-xx-1]++;
                            }
                            break;
                        }
                    }
            }
            }
            for(int ii=1;ii<=i;ii++)
                {

                    if( board[i-ii][j]!='*')
                    {
                        if( board[i-ii][j]=='k')
                        {
                            precheck2[i-ii+1][j]++;
                            locate2[i][j]++;
                            for(int o=0 ; o < ii;o++)
                            {
                                help2[i-o][j]++;
                            }
                        }
                        check2[i-ii][j]++;
                        precheck2[i-ii-1][j]++;
                        break;
                    }

                }
                for(int iii = 1 ; iii < 8-i ; iii++)
                {

                    if( board[i + iii][j]!='*')
                    {
                        if(board[i+iii][j]=='k')
                        {
                            precheck2[i+iii-1][j]++;
                            locate2[i][j]++;
                            for(int o=0;o<iii;o++)
                            {
                                help2[i+o][j]++;
                            }
                        }
                        precheck2[i+iii+1][j]++;
                        check2[i+iii][j]++;
                        break;
                    }
                }
                for(int iii=1 ; iii<=j;iii++)
                {

                    if(board[i][j-iii]!='*')
                    {
                        if(board[i][j-iii]=='k')
                        {
                            locate2[i][j]++;
                            precheck2[i][j-iii+1]++;
                            for(int o=0; o<iii;o++)
                            {
                                help2[i][j-o]++;
                            }
                        }
                        check2[i][j-iii]++;
                        precheck2[i][j-iii-1]++;
                        break;
                    }

                }
                for(int iii = 1 ; iii < 8-j ; iii++)
                {

                    if( board[i ][j+iii]!='*')
                    {
                        check2[i][j+iii]++;
                        precheck2[i][j+iii+1]++;
                        if(board[i][j+iii]=='k')
                        {
                            locate2[i][j]++;
                            precheck2[i][j+iii-1]++;
                            for(int o=0;o<iii;o++)
                            {
                                help2[i][j+o]++;
                            }
                        }
                        break;
                    }
                }
        }























    }
}
    }

