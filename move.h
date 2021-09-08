void knight(char board[][8],int x/*move to*/,int y,int xx,int yy,int *player)
{

    int i;
    if(x>7||y>7||xx>7||yy>7)
    {
        printf("--Illegal move!!--*\n\n\n");

        *player = 100;
        return;
    }
    int e='\\'-board[x][y];
    int f='\\'-board[xx][yy];
    if(e*f>0&&board[x][y]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }
    else if((board[xx][yy]!='h'&&*player==1)||(board[xx][yy]!='H'&&*player==2))
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return ;
            }
    else if((xx-2==x&&yy-1==y)||(xx-2==x&&yy+1==y))
    {
        if(*player==1)
        {
            board[x][y] = 'h';
            board[xx][yy] = '*';
        }
        if(*player==2)
        {
            board[x][y] = 'H';
            board[xx][yy] = '*';
        }
    }
    else if((xx+2==x&&yy-1==y)||(xx+2==x&&yy+1==y))
    {
        if(*player==1)
        {
            board[x][y] = 'h';
            board[xx][yy] = '*';
        }
        if(*player==2)
        {
            board[x][y] = 'H';
            board[xx][yy] = '*';
        }
    }
    else if((yy-2==y&&xx-1==x)||(yy-2==y&&xx+1==x))
    {
        if(*player==1)
        {
            board[x][y] = 'h';
            board[xx][yy] = '*';
        }
        if(*player==2)
        {
            board[x][y] = 'H';
            board[xx][yy] = '*';
        }
    }
    else if((yy+2==y&&xx-1==x)||(yy+2==y&&xx+1==x))
    {
        if(*player==1)
        {
            board[x][y] = 'h';
            board[xx][yy] = '*';
        }
        if(*player==2)
        {
            board[x][y] = 'H';
            board[xx][yy] = '*';
        }
    }
    else
    {
        printf("Illegal move = =***\n\n\n");
        *player = 100;
        return;
    }
}
void rook(char board[][8],int x,int y,int xx,int yy,int *player)
{
    int i;
    if(x>7||y>7||xx>7||yy>7)
    {
        printf("--Illegal move!!--*\n\n\n");
        *player = 100;
        return;
    }
    int e='\\'-board[x][y];
    int f='\\'-board[xx][yy];
    if (e*f>0&&board[x][y]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }
    else if((board[xx][yy]!='r'&&*player==1)||(board[xx][yy]!='R'&&*player==2))
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
    if(xx-x>0&&yy==y)
        {
            for(i=1;i<xx-x;i++)
            {
                e='\\'-board[x][y];
     f='\\'-board[xx][yy];
    if (board[xx-i][y]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }

            }
            if(*player==1)
                {
                    board[x][y] = 'r';
                    board[xx][yy] = '*';
                }
            if(*player==2)
                {
                    board[x][y] = 'R';
                    board[xx][yy] = '*';
                }
        }
    else if(xx-x<0&&yy==y)
    {


            for(i=1;i<x-xx;i++)
            {
                e='\\'-board[x][y];
     f='\\'-board[xx][yy];
    if (board[xx+i][y]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }
            }
            if(*player==1)
                {
                    board[x][y] = 'r';
                    board[xx][yy] = '*';
                }
            if(*player==2)
                {
                    board[x][y] = 'R';
                    board[xx][yy] = '*';
                }
    }
    else if(xx-x==0&&yy-y>0)
        {
            for(i=1;i<yy-y;i++)
            {
                e='\\'-board[x][y];
     f='\\'-board[xx][yy];
    if (board[x][yy-i]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }
            }
            if(*player==1)
                {
                    board[x][y] = 'r';
                    board[xx][yy] = '*';
                }
            if(*player==2)
                {
                    board[x][y] = 'R';
                    board[xx][yy] = '*';
                }
        }
    else if(xx-x==0&&yy-y<0)
        {
            for(i=1;i<y-yy;i++)
            {

                e='\\'-board[x][y];
     f='\\'-board[xx][yy];
    if (board[x][yy+i]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }

            }
            if(*player==1)
                {
                    board[x][y] = 'r';
                    board[xx][yy] = '*';
                }
            if(*player==2)
                {
                    board[x][y] = 'R';
                    board[xx][yy] = '*';
                }
        }

    else
    {
        printf("Illegal move = =***\n\n\n");
        *player = 100;
        return;
    }
}

void pawn(char board[][8],int x/*move to*/,int y,int xx,int yy,int *player)
{
    int i;
    if(x>7||y>7||xx>7||yy>7)
    {
        printf("--Illegal move!!--*66\n\n\n");
        *player = 100;
        return;
    }
    int e='\\'-board[x][y];
    int f='\\'-board[xx][yy];
    if (e*f>0&&board[x][y]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }
    else if((board[xx][yy]!='p'&&*player==1)||(board[xx][yy]!='P'&&*player==2))
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
    else if(*player==1&&yy==y&&board[x][y]=='*')
    {
        if((x==5||x==4)&&xx==6)
        {
            board[x][y] = 'p';
            board[xx][yy] = '*';
        }
        else if(x==xx-1)
        {
            board[x][y] = 'p';
            board[xx][yy] = '*';
        }
        else
        {
            printf("--Illegal move!!--*\n\n\n");
            *player = 100;
            return;
        }
    }
    else if(*player==1&&(yy==y+1||yy==y-1)&&board[x][y]!='*')
    {
        if(x==xx-1)
        {
            board[x][y] = 'p';
            board[xx][yy] = '*';
        }
        else
        {
            printf("--Illegal move!!--*\n\n\n");
            *player = 100;
            return;
        }
    }
    else if(*player==2&&yy==y&&board[x][y]=='*')
    {
        if((x==2||x==3)&&xx==1)
        {
            board[x][y] = 'P';
            board[xx][yy] = '*';
        }
        else if(x==xx+1)
        {
            board[x][y] = 'P';
            board[xx][yy] = '*';
        }
        else
        {
            printf("--Illegal move!!--*\n\n\n");
            *player = 100;
            return;
        }
    }
    else if(*player==2&&(yy==y+1||yy==y-1)&&board[x][y]!='*')
    {
        if(x==xx+1)
        {
            board[x][y] = 'P';
            board[xx][yy] = '*';
        }
        else
        {
            printf("--Illegal move!!--*\n\n\n");
            *player = 100;
            return;
        }
    }

    else
            {
                printf("--Illegal move!!--*\n\n\n");
                *player = 100;
                return;
            }
}

void bishop(char board[][8],int x/*move to*/,int y, int xx ,int yy,int *player)
{
    if(x>7||y>7)
    {
        printf("Illegal move\n\n\n");
        *player = 100;
        return;
    }
    int e='\\'-board[x][y];
    int f='\\'-board[xx][yy];
    if (e*f>0&&board[x][y]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }
    else if((board[xx][yy]!='b'&&*player==1)||(board[xx][yy]!='B'&&*player==2))
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
    else if(xx-x>0&&yy-y>0&&xx-x==yy-y)
    {
        int i=xx-x;
        for(int j=1;j<i;j++)
        {
            if(board[xx-j][yy-j]!='*')
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
        }
        if(*player==1)
                {
                    board[x][y] = 'b';
                    board[xx][yy] = '*';
                }
        if(*player==2)
                {
                    board[x][y] = 'B';
                    board[xx][yy] = '*';
                }
    }
    else if(xx-x>0&&yy-y<0&&xx-x==y-yy)
    {
        int i=xx-x;
        for(int j=1;j<i;j++)
        {
            if(board[xx-j][yy+j]!='*')
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
        }
        if(*player==1)
                {
                    board[x][y] = 'b';
                    board[xx][yy] = '*';
                }
        if(*player==2)
                {
                    board[x][y] = 'B';
                    board[xx][yy] = '*';
                }
    }
    else if(xx-x<0&&yy-y<0&&xx-x==yy-y)
    {
        int i=x-xx;
        for(int j=1;j<i;j++)
        {
            if(board[xx+j][yy+j]!='b')
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
        }
        if(*player==1)
                {
                    board[x][y] = 'b';
                    board[xx][yy] = '*';
                }
        if(*player==2)
                {
                    board[x][y] = 'B';
                    board[xx][yy] = '*';
                }
    }
    else if(x-xx>0&&yy-y>0&&x-xx==yy-y)
    {
        int i=x-xx;
        for(int j=1;j<i;j++)
        {
            if(board[xx+j][yy-j]!='*')
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
        }
        if(*player==1)
                {
                    board[x][y] = 'b';
                    board[xx][yy] = '*';
                }
        if(*player==2)
                {
                    board[x][y] = 'B';
                    board[xx][yy] = '*';
                }
    }
    else
    {
        printf("Illegal move\n\n\n");
        *player = 100;
        return;
    }
}

void queen(char board[][8],int x/*move to*/,int y, int xx, int yy, int *player)
{

    int i;
    if(x>7||y>7||xx>7||yy>7)
    {
        printf("--Illegal move!!--*\n\n\n");
        *player = 100;
        return;
    }
    int e='\\'-board[x][y];
    int f='\\'-board[xx][yy];
    if (e*f>0&&board[x][y]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }
    else if((board[xx][yy]!='q'&&*player==1)||(board[xx][yy]!='Q'&&*player==2))
    {
        printf("Illegal move\n\n\n");
        *player = 100;
        return;
    }
    else if(xx-x>0&&yy==y)
        {
            for(i=1;i<xx-x;i++)
            {
                if(board[xx-i][yy]!='*')
                {
                    printf("Illegal move\n\n\n");
                    *player = 100;
                    return;
                }
            }
            if(*player==1)
                {
                    board[x][y] = 'q';
                    board[xx][yy] = '*';
                }
            if(*player==2)
                {
                    board[x][y] = 'Q';
                    board[xx][yy] = '*';
                }
        }
    else if(xx-x<0&&yy==y)
    {
            for(i=1;i<x-xx;i++)
            {
                if(board[xx+i][yy]!='*')
                {
                    printf("Illegal move\n\n\n");
                    *player = 100;
                    return;
                }
            }
            if(*player==1)
                {
                    board[x][y] = 'q';
                    board[xx][yy] = '*';
                }
            if(*player==2)
                {
                    board[x][y] = 'Q';
                    board[xx][yy] = '*';
                }
    }
    else if(xx-x==0&&yy-y>0)
        {
            for(i=1;i<yy-y;i++)
            {
                if(board[xx][yy-i]!='*')
                {
                    printf("Illegal move\n\n\n");
                    *player = 100;
                    return;
                }
            }
            if(*player==1)
                {
                    board[x][y] = 'q';
                    board[xx][yy] = '*';
                }
            if(*player==2)
                {
                    board[x][y] = 'Q';
                    board[xx][yy] = '*';
                }
        }
    else if(xx-x==0&&yy-y<0)
        {
            for(i=1;i<y-yy;i++)
            {
                if(board[xx][yy+i]!='*')
                {
                    printf("Illegal move\n\n\n");
                    *player = 100;
                    return;
                }
            }
            if(*player==1)
                {
                    board[x][y] = 'q';
                    board[xx][yy] = '*';
                }
            if(*player==2)
                {
                    board[x][y] = 'Q';
                    board[xx][yy] = '*';
                }
        }
    else if(xx-x>0&&yy-y>0&&xx-x==yy-y)
    {
        int i=xx-x;
        for(int j=1;j<i;j++)
        {
            if(board[xx-j][yy-j]!='*')
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
        }
        if(*player==1)
                {
                    board[x][y] = 'q';
                    board[xx][yy] = '*';
                }
        if(*player==2)
                {
                    board[x][y] = 'Q';
                    board[xx][yy] = '*';
                }
    }
    else if(xx-x>0&&yy-y<0&&xx-x==y-yy)
    {
        int i=xx-x;
        for(int j=1;j<i;j++)
        {
            if(board[xx-j][yy+j]!='*')
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
        }
        if(*player==1)
                {
                    board[x][y] = 'q';
                    board[xx][yy] = '*';
                }
        if(*player==2)
                {
                    board[x][y] = 'Q';
                    board[xx][yy] = '*';
                }
    }
    else if(xx-x<0&&yy-y<0&&xx-x==yy-y)
    {
        int i=x-xx;
        for(int j=1;j<i;j++)
        {
            if(board[xx+j][yy+j]!='*')
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
        }
        if(*player==1)
                {
                    board[x][y] = 'q';
                    board[xx][yy] = '*';
                }
        if(*player==2)
                {
                    board[x][y] = 'Q';
                    board[xx][yy] = '*';
                }
    }
    else if(x-xx>0&&yy-y>0&&x-xx==yy-y)
    {
        int i=x-xx;
        for(int j=1;j<i;j++)
        {
            if(board[xx+j][yy-j]!='*')
            {
                printf("Illegal move\n\n\n");
                *player = 100;
                return;
            }
        }
        if(*player==1)
                {
                    board[x][y] = 'q';
                    board[xx][yy] = '*';
                }
        if(*player==2)
                {
                    board[x][y] = 'Q';
                    board[xx][yy] = '*';
                }
    }
}
void king(char board[][8],int x,int y ,int xx ,int yy,int *player)
{
    if(x>7||y>7||xx>7||yy>7||xx<0||x<0||yy<0||y<0)
    {
        printf("Illegal move\n\n\n");
        *player = 100;
        return;
    }
    int e='\\'-board[x][y];
    int f='\\'-board[xx][yy];
    if (e*f>0&&board[x][y]!='*')
    {
        printf("==Illegal move!!\n\n\n");
        *player = 100;
        return;
    }
    else if(xx==x&&yy==y)
    {
        printf("Illegal move\n\n\n");
        *player = 100;
        return;
    }
    else if(xx-x>1||x-xx>1)
    {
        printf("Illegal move\n\n\n");
        *player = 100;
        return;
    }
    else if(yy-y>1||y-yy>1)
    {
        printf("Illegal move\n\n\n");
        *player = 100;
        return;
    }
    else
    {
        if(*player==1)
        {
            board[x][y]='k';
        }
        else if(*player==2)
        {
            board[x][y]='K';
        }
        board[xx][yy]='*';
    }
}
