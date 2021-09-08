void howtoplay()
{
    system("cls");
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //EDGE OF "HOW TO PLAY"
    SetConsoleTextAttribute(hConsole, 12);
    go(38,2);printf("###");go(38,4);printf("###");go(86,2);printf("###");go(86,4);printf("###");
    go(40,1);printf("###############################################");
    go(40,5);printf("###############################################");
    //HOW TO PLAY
    SetConsoleTextAttribute(hConsole, 14);
    go(38,3);
    printf("!");Sleep(60);
    printf("!");Sleep(60);
    printf("!");Sleep(60);
    printf("            ");Sleep(60);
    printf("H");Sleep(60);
    printf(" O");Sleep(60);
    printf(" W");Sleep(60);
    printf("  ");Sleep(60);
    printf(" T");Sleep(60);
    printf(" O");Sleep(60);
    printf("  ");Sleep(60);
    printf(" P");Sleep(60);
    printf(" L");Sleep(60);
    printf(" A");Sleep(60);
    printf(" Y");Sleep(60);
    printf("            ");Sleep(60);
    printf("!");Sleep(60);
    printf("!");Sleep(60);
    printf("!");Sleep(60);

    //EDGE OF OBJECT
    SetConsoleTextAttribute(hConsole, 14);
        for(int j=0;j<46;j++)
    {
        Sleep(10);
        go(64-j,6);printf("*");
        go(65+j,6);printf("*");
    }
    for(int i=0;i<23;i++)
    {
        Sleep(20);
        go(19,i+6);printf("*");
        go(110,i+6);printf("*");
    }
    for(int j=0;j<=46;j++)
    {
        Sleep(10);
        go(19+j,29);printf("*");
        go(110-j,29);printf("*");
    }

    //MAIN OBJECT
    SetConsoleTextAttribute(hConsole, 15);Sleep(100);
    king1(20,7);Sleep(100);go(33,9);printf("   =  K I N G");Sleep(100);
    queen1(84,7);Sleep(100);go(91,9);printf("   =  Q U E E N");Sleep(100);
    rook1(20,13);Sleep(100);go(33,15);printf("   =  R O O K");Sleep(100);
    bishop1(84,13);Sleep(100);go(91,15);printf("   =  B I S H O P");Sleep(100);
    horse1(20,19);Sleep(100);go(33,21);printf("   =  K N I G H T");Sleep(100);
    pawn1(84,19);Sleep(100);go(91,21);printf("   =  P A W N");
    SetConsoleTextAttribute(hConsole, 10);
    go(47, 25);printf(" P L A Y E R   1   i s   g r e e n");
    SetConsoleTextAttribute(hConsole, 13);
    go(47,27);printf(" P L A Y E R   2   i s   p u r p l e");
    SetConsoleTextAttribute(hConsole,11);
    go(25,31);printf("example of the input");
    go(25,33);printf(" |  press 6");
    go(25,44);printf(" |");
    go(25,35);printf(" V");
    go(25,37);printf("\"enter initial position ; x = 6\"");
    go(25,39);printf(" |  press A");
    go(25,40);printf(" |");
    go(25,41);printf(" V");
    go(25,43);printf("\"enter final position ; y = A\"");
    getch();
    return;


}
