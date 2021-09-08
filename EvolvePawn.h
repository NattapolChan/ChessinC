
void transformpawn(char board[][8])
{
    for( int j=0 ;j<8;j++)
    {
        if(board[0][j]=='p')
        {
            int d;
            while(1)
            {
                printf("player 1 please choose a piece you want\n");
                printf("1.Queen\n2.Rook\n3.Bishop\n4.Knight\n");
                scanf("%d",&d);
                if(d==1)
                {
                    board[0][j]='q';
                    break;
                }
                else if(d==2)
                {
                    board[0][j]='r';
                    break;
                }
                else if(d==3)
                {
                    board[0][j]='b';
                    break;
                }
                else if(d==4)
                {
                    board[0][j]='n';
                    break;
                }
            }
        }
    }
        for( int j=0 ;j<8;j++)
    {
        if(board[7][j]=='P')
        {
            int d;
            while(1)
            {
                printf("player 2 please choose a piece you want\n");
                printf("1.Queen\n2.Rook\n3.Bishop\n4.Knight\n");
                scanf("%d",&d);
                if(d==1)
                {
                    board[0][j]='Q';
                    break;
                }
                else if(d==2)
                {
                    board[0][j]='R';
                    break;
                }
                else if(d==3)
                {
                    board[0][j]='B';
                    break;
                }
                else if(d==4)
                {
                    board[0][j]='N';
                    break;
                }
            }
        }
    }
}
