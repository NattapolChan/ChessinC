void mainmenu()
{
    system("cls");
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //EDGE OF MAIN MENU
    SetConsoleTextAttribute(hConsole, 12);
    go(38,2);printf("###");go(38,4);printf("###");go(86,2);printf("###");go(86,4);printf("###");
    go(40,1);printf("###############################################");
    go(40,5);printf("###############################################");
    //MAIN MENU
    SetConsoleTextAttribute(hConsole, 14);
    go(38,3);
    printf("!");Sleep(60);
    printf("!");Sleep(60);
    printf("!");Sleep(60);
    printf("              ");Sleep(60);
    printf("M");Sleep(60);
    printf(" A");Sleep(60);
    printf(" I");Sleep(60);
    printf(" N");Sleep(60);
    printf(" E");Sleep(60);
    printf("  ");Sleep(60);
    printf(" M");Sleep(60);
    printf(" E");Sleep(60);
    printf(" N");Sleep(60);
    printf(" U");Sleep(60);
    printf("            ");Sleep(60);
    printf("!");Sleep(60);
    printf("!");Sleep(60);
    printf("!");Sleep(60);

    //EDGE OF MENU
    for(int j=0;j<30;j++)
    {
        Sleep(10);
        go(65-j,9);printf("*");
        go(66+j,9);printf("*");
    }
    for(int i=0;i<16;i++)
    {
        Sleep(20);
        go(35,i+9);printf("*");
        go(95,i+9);printf("*");
    }
    for(int j=0;j<=30;j++)
    {
        Sleep(10);
        go(35+j,24);printf("*");
        go(95-j,24);printf("*");
    }

    //CHOICE OF MENU
    go(40,12);printf("P");Sleep(20);
    printf(" L");Sleep(20);
    printf(" A");Sleep(20);
    printf(" Y");Sleep(20);
    printf("  ");Sleep(20);
    printf(" G");Sleep(20);
    printf(" A");Sleep(20);
    printf(" M");Sleep(20);
    printf(" E");Sleep(60);
    printf(" ......................");Sleep(60);
    printf("  press");Sleep(60);
    printf(" P ");Sleep(20);
    go(40,16);printf("H");Sleep(20);
    printf(" O");Sleep(20);
    printf(" W");Sleep(20);
    printf("  ");Sleep(20);
    printf(" T");Sleep(20);
    printf(" O");Sleep(20);
    printf("  ");Sleep(20);
    printf(" P");Sleep(20);
    printf(" L");Sleep(20);
    printf(" A");Sleep(20);
    printf(" Y");Sleep(60);
    printf(" ...................");Sleep(60);
    printf(" press");Sleep(60);
    printf(" H");Sleep(20);
    go(40,20);printf("E");Sleep(20);
    printf(" X");Sleep(20);
    printf(" I");Sleep(20);
    printf(" T");Sleep(20);
    printf(" .................................");Sleep(60);
    printf(" press");Sleep(60);
    printf(" E");Sleep(40);
    go(55,27);printf("PLEASE ENTER YOUR CHOICE");
    return;
}

