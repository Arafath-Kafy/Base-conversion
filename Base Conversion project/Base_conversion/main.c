#include <math.h>
#include <stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
int decTobiConvert(int dno);
int biTodeciConverter(int num);
int ocTodeciConverter(int num);
long long ocTobiConvert(int oct);
int biToOcConvert(long long num);
int biTohexaConvert(int num);
void hexaTobiConvert(char num[],char bin[]);
int ocTohexaConvert(int num);
int decTohexaConvert(int num);
int decTooctalConvert(int num);
int hexadecimalTodecimal(char *hex);
    struct Time
{
    time_t t;
    int i;
};
struct Time time1;
int main()
{
    time(&time1.t);
    (time1.i)=0;
    FILE *file;
    file = fopen("program1.txt","a+");
    fprintf(file,"Basename1\tTo\tBasename2:\tNum1 = Num2\n");
    fprintf(file,"======================================\n");
    fclose(file);
    printf ("\t\t\t  ===============================================\n");
    printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
    printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
    printf ("\t\t\t  ||      * *                         * *      ||\n");
    printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
    printf ("\t\t\t  ||      * *                         * *      ||\n");
    printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
    printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
    printf ("\t\t\t  ===============================================\n\n\n");
start:

    system ("color 02");
    printf("\n\t1.Binary To Octal\t\t\t\t\t\t2.Binary To Decimal\n\t3.Binary To Hexadecimal\t\t\t\t\t\t4.Octal To Binary\n\t5.Decimal To Binary\t\t\t\t\t\t6.Hexadecimal To Binary\n\t7.Octal To Decimal\t\t\t\t\t\t8.Octal To Hexadecimal\n\t9.Decimal To Hexadecimal\t\t\t\t\t10.Decimal To octal\n\t11.Hexadecimal To Decimal\t\t\t\t\t12.Read the file(History)\n\t0.Exit\n\n");
    int n;
    printf("\t\t\t\tEnter Your Option...(Enter 0 to Exit)\n\n\t\tThe Option is ");
    scanf("%d",&n);
    system("cls");
    printf ("\t\t\t  ===============================================\n");
    printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
    printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
    printf ("\t\t\t  ||      * *                         * *      ||\n");
    printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
    printf ("\t\t\t  ||      * *                         * *      ||\n");
    printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
    printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
    printf ("\t\t\t  ===============================================\n");
    if(n==1)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||              Binary To Octal              ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Binary Number: ",++(time1.i));
        int num1,base1;
        scanf("%d",&num1);
        base1 = biToOcConvert(num1);
        printf("\n\n\t\t\tBinary To Octal: %d b = %d o\n\n\n",num1,base1);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"\nBinary == To == Octal: %d b = %d o\n",num1,base1);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n");
        goto start;

    }
    else if(n==2)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||             Binary To Decimal             ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Binary Number: ",++(time1.i));
        int num2,base2;
        scanf("%d",&num2);
        base2 =biTodeciConverter(num2);
        printf("\n\n\t\t\tBinary To Decimal: %d b = %d d\n\n\n",num2,base2);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Binary == To == Decimal: %d b = %d d\n",num2,base2);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }
    else if(n==3)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||           Binary To Hexadecimal           ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Binary Number: ",++(time1.i));
        int num3,base3;
        scanf("%d",&num3);
        base3=biTohexaConvert(num3);
        printf("\n\n\t\t\tBinary To Hexadecimal %d b = %1X h\n\n\n",num3,base3);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Binary == To == Hexadecimal: %d b = %1X h\n",num3,base3);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }
    else if(n==4)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||              Octal To Binary              ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Octal Number: ",++(time1.i));
        int num4,base4;
        scanf("%d",&num4);
        base4=ocTobiConvert(num4);
        printf("\n\n\t\t\tOctal To Binary %d o = %d b\n\n\n",num4,base4);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Octal == To == Binary: %d o = %d b\n",num4,base4);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }
    else if(n==5)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||             Decimal To Binary             ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Decimal Number: ",++(time1.i));
        int num5,base5;
        scanf("%d",&num5);
        base5=decTobiConvert(num5);
        printf("\n\n\t\t\tDecimal To Binary %d d = %d b\n\n\n",num5,base5);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Decimal == To == Binary: %d d = %d b\n",num5,base5);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }
    else if(n==6)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||           Hexadecimal To Binary           ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Hexadecimal Number: ",++(time1.i));
        char num6[100],bin[50]="";
        scanf("%s",num6);
        hexaTobiConvert(num6,bin);
        printf("\n\n\t\t\tHexadecimal To Binary: %s h = %s b\n\n\n",num6,bin);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Hexadecimal == To == Binary: %s h = %s b\n\n\n",num6,bin);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }
    else if(n==7)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||             Octal To Decimal              ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Octal Number: ",++(time1.i));
        int num7,base7;
        scanf("%d",&num7);
        base7=ocTodeciConverter(num7);
        printf("\n\n\t\t\tOctal To Decimal: %d o = %d d\n\n\n",num7,base7);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Octal == To == Decimal: %d o = %d d\n\n\n",num7,base7);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }
    else if(n==8)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||            Octal To Hexadecimal           ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Octal Number: ",++(time1.i));
        int num8,base8;
        scanf("%d",&num8);
        base8=ocTohexaConvert(num8);
        printf("\n\n\t\t\tOctal To Hexadecimal: %d o = %1X h\n\n\n",num8,base8);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Octal == To == Hexadecimal: %d o = %1X h\n",num8,base8);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;

    }
    else if(n==9)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||           Decimal TO Hexadecimal          ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Decimal Number: ",++(time1.i));
        int num9,base9;
        scanf("%d",&num9);
        base9=decTohexaConvert(num9);
        printf("\n\n\t\t\tDecimal TO Hexadecimal: %d d = %lX h\n\n\n",num9,base9);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Decimal == To == Hexadecimal: %d d = %lX h\n",num9,base9);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }
    else if(n==10)
    {
        system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||            Decimal To Octal               ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        printf("\t\t\t%d. Enter Decimal Number: ",++(time1.i));
        int num10,base10;
        scanf("%d",&num10);
        base10=decTooctalConvert(num10);
        printf("\n\n\t\t\tDecimal To Octal %d d = %d o\n\n\n",num10,base10);
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
        FILE *file;
        file = fopen("program1.txt","a+");
        fprintf(file,"Decimal == To == Octal: %d d = %d o\n",num10,base10);
        fclose(file);
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }
    else if(n==11)
    {
        {
            system ("color B1");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||           Hexadecimal To Decimal          ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
            printf("\t\t\t%d. Enter Hexadecimal Number: ",++(time1.i));
            char num11[100];
            int base11;
            scanf("%s", num11);
            base11=hexadecimalTodecimal(num11);
            printf("\n\n\t\t\tHexadecimal To Decimal: %s h = %d d\n\n\n",num11,base11);
            printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
            FILE *file;
            file = fopen("program1.txt","a+");
            fprintf(file,"Hexadecimal == To == Decimal: %s h = %d d\n",num11,base11);
            getch();
            system("cls");
            printf ("\t\t\t  ===============================================\n");
            printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
            printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
            printf ("\t\t\t  ||      * *                         * *      ||\n");
            printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
            printf ("\t\t\t  ||      * *                         * *      ||\n");
            printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
            printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
            printf ("\t\t\t  ===============================================\n\n\n");
            goto start;
        }
    }
    else if(n==12)
    {
        {
            system ("color 80");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ||                  History                  ||\n");
        printf ("\t\t\t  ||                                           ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
            FILE *file;
            char read;
            file = fopen("program1.txt","a+");
            while(!feof(file)){
                read= fgetc(file);
                printf("%c",read);
            }
            printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.t)));
            getch();
            system("cls");
            printf ("\t\t\t  ===============================================\n");
            printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
            printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
            printf ("\t\t\t  ||      * *                         * *      ||\n");
            printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
            printf ("\t\t\t  ||      * *                         * *      ||\n");
            printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
            printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
            printf ("\t\t\t  ===============================================\n\n\n");
            goto start;
        }}
    else if(n==0)
    {
        printf("\t\t\tThis Code is created By....\n\n\t\t\t# Wahid Sabbir\n\t\t\t# Sultana Siddique\n\t\t\t# Arafath Kafy\n\t\t\t# Saimon Islam\n\n\t\t\t# Krisno Sir.(Moderator) \n\n\n\t\t\t\t\t\t|| THANK YOU ||\n\n\n");
        getch();
        return 0;
    }
    else
    {
        getch();
        system ("color F4");
        printf("\n\n\t\t\tWrong Input. Try again\n\n");
        printf("\n\t\t\t\t\t\t\t\t\t%s\n", ctime(&(time1.i)));
        getch();
        system("cls");
        printf ("\t\t\t  ===============================================\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||    * *   Base Converting System    * *    ||\n");
        printf ("\t\t\t  ||      * *                         * *      ||\n");
        printf ("\t\t\t  ||        * * * * * * * * * * * * * *        ||\n");
        printf ("\t\t\t  ||          * * * * * * * * * * * *          ||\n");
        printf ("\t\t\t  ===============================================\n\n\n");
        goto start;
    }

}
//binary to decimal
int biTodeciConverter(int num)// kafy
{
    int dec=0,i=0,*a;
    a=&i;
    while (num != 0)
    {
        dec += (num % 10) * pow(2, *a);//*a is pointer of address of i
        ++*a;
        num /= 10;
    }

    return dec;
}
//Decimal to binary
int decTobiConvert(int dno)//chaity
{
    long bno=0,rem,f=1,*e;
    e=&f;
    while(dno != 0)
    {
        rem = dno % 2;
        bno = bno + rem * *e;//*e is pointer of address of f
        *e  *= 10;
        dno = dno / 2;
    }
    return bno;
}
//octal to decimal
int ocTodeciConverter(int num)//wahid
{
    int dec=0,i=0;
    while (num != 0)
    {
        dec += (num % 10) * pow(8, i);
        ++i;
        num /= 10;
    }

    return dec;
}
//binary to octal
int biToOcConvert(long long num)//chaity
{
    int oct = 0,dec, i = 1;
    long long value;

    dec =  biTodeciConverter(num);
    // converting to decimal to octal
    while (dec != 0)
    {
        oct += (dec % 8 ) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}
//octal to binary
long long ocTobiConvert(int oct)//wahid
{
    int dec, i = 1;
    long long bin = 0;
    dec = ocTodeciConverter(oct);
    // converting decimal to binary
    while (dec != 0)
    {
        bin += (dec % 2)*i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}
//binary to hexadecimal
int biTohexaConvert(int num)
{
    long int hexadecimal_number = 0, i = 1, remainder;
    while (num != 0)
    {
        remainder = num % 10;
        hexadecimal_number = hexadecimal_number + remainder*i;
        i = i * 2;
        num = num / 10;
    }

    return hexadecimal_number;
}
//hexadecimal to binary
void hexaTobiConvert(char num[],char bin[])
{
    int i=0;

    for(i=0; num[i]!='\0'; i++)
    {
        switch(num[i])
        {
        case '0':
            strcat(bin, "0000");
            break;
        case '1':
            strcat(bin, "0001");
            break;
        case '2':
            strcat(bin, "0010");
            break;
        case '3':
            strcat(bin, "0011");
            break;
        case '4':
            strcat(bin, "0100");
            break;
        case '5':
            strcat(bin, "0101");
            break;
        case '6':
            strcat(bin, "0110");
            break;
        case '7':
            strcat(bin, "0111");
            break;
        case '8':
            strcat(bin, "1000");
            break;
        case '9':
            strcat(bin, "1001");
            break;
        case 'A':
            strcat(bin, "1010");
            break;
        case 'B':
            strcat(bin, "1011");
            break;
        case 'C':
            strcat(bin, "1100");
            break;
        case 'D':
            strcat(bin, "1101");
            break;
        case 'E':
            strcat(bin, "1110");
            break;
        case 'F':
            strcat(bin, "1111");
            break;
        default:
            printf("Invalid hexadecimal input.");
        }
    }

}
//octal to hexadecimal
int ocTohexaConvert(int num)//chaity
{
    long long binary;
    binary = 0;
    binary = ocTobiConvert(num);
    int hexa = biTohexaConvert(binary);
    return hexa;
}
//decimal to hexadecimal
int decTohexaConvert(int num)//wahid
{
    long long  binary;
    binary = 0;
    binary = decTobiConvert(num);
    int hexa = biTohexaConvert(binary);
    return hexa;
}
//decimal to octal
int decTooctalConvert(int num)//kafy
{
    int  binary;
    binary = 0;
    binary = decTobiConvert(num);
    int octal = biToOcConvert(binary);
    return octal;
}
//hexadecimal to decimal
int hexadecimalTodecimal(char *hex)//kafy
{
    int p = 0;
    int decimal = 0;
    int r, i;
    for(i = strlen(hex) - 1 ; i >= 0 ; --i)
    {
        if(hex[i]>='0'&&hex[i]<='9')
        {
            r = hex[i] - '0';
        }
        else
        {
            r = hex[i] - 'A' + 10;
        }

        decimal = decimal + r * pow(16, p);
        ++p;
    }

    return decimal;
}



