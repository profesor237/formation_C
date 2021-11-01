#include <stdio.h>
#include <stdlib.h>
exercice2()
{
        printf("\n\n************  exercice 2 ************\n\n");
        printf("\n-----> Donner trois nombres et on vous dira si l'un est la somme des deux autres\n\n");
    int x,y,z,s1,s2,s3;
    printf("entrer x: ");
    scanf("%d",&x);
    printf("entrer y: ");
    scanf("%d",&y);
    printf("entrer z: ");
    scanf("%d",&z);
    s1=x+y;
    s2=x+z;
    s3=z+y;
    if(s1==z||s2==y||s3==x)
    {
        printf("\n\n effectivement lun des trois nombres est la somme des deux autres nombres\n\n" );

    }
    else
    {

        printf("\n\n aucun des nombres nest la somme des autres\n\n");
    }
    printf("*********** fin **********");


}
exercice3()
{
     printf("\n\n*********** exercice 3 **********\n\n");
     printf("\n-----> Donner votre note/20 et on vous dira votre mention\n\n");
    int note, age;
     char mention[10], nom[20];
    printf("\n entrer note: \n");
    scanf("%d",&note);
    printf("\n entrer nom: \n");
    scanf("%s",&nom);
    printf("\n entrer age: \n");
    scanf("%d",&age);
    printf("\n\n***********decision************\n\n");
    printf("");
    printf(" nom: ");
    printf("%s",nom);
    printf("\n\n");
    printf(" note: ");
    printf("%d",note);
    printf("\n\n");
    printf(" mention:  ");
    if(note<10)
    {
        printf("Mediocre  \n\n");
    }
    if(note>=10 && note<12)
    {
        printf("passable \n\n");
    }
    if(12<note && note<=14)
    {
        printf("assez bien \n\n");
    }
    if(14<note &&note<=16)
    {
        printf("bien  \n\n");
    }
    if(16<note)
    {
        printf("tres bien \n\n");
    }
    printf("\n\n**********FIN**********\n\n");
}
exercice4()
{
    printf("\n\n*******exercice 4**********\n\n");
    printf("\n-----> Donner nous une température de l'eau et on vous precisera son etat\n\n");
    char eau,vapeur,glasser;
    int temperature;
    printf("entrer temperature: ");
    scanf("%d",&temperature);
    printf(" \n-----Etat:    ");
    if(temperature<0)
    {
        printf("glasse");
    }
    if(0<temperature &&temperature<100)
    {
        printf("eau ");
    }
    if(100<temperature)
    {
        printf("vapeur ");
    }
    printf("\n\n************fin***********\n\n");
}
exercice5()
{
      printf("\n************exercice 5 *************\n");
      printf("\n-----> Trouver la valeur absolue d'un nombre\n\n");
    int x;
    printf("entrer x: ");
    scanf("%d",& x);
    if (x<0)
   {
        x=-1*x;
    printf("\n|x|= ");
   }
    else
    printf(" |x| = ");
    printf("%d", x);

      printf("\n\n********fin********\n\n");

}
exercice6()
{
        printf("\n\n********** exercice 6 **********\n\n");
        printf("\n-----> Valeur absolue de la difference de deux nombres\n\n");
int x,y,z;
printf("entrer la valeur de x: ");
scanf("%d",& x);
printf("entrer la valeur de y: ");
scanf("%d",& y);
if (x<y)
{
    printf("|x-y|= ");
    z=y-x;
    printf("%d",z);
}
else
{
    z=y-x;
    printf("|x-y|=  ");
    printf("%d",z);
}
printf("\n\n*********fin************\n\n");
}
exercice7()
{
   printf("\n*********exrcice 7 ************\n");
   printf("\n-----> Donner un nombre entre 1 et 7 et on vous dira a quel jour ça correspond\n\n");
int x;
char jour;
printf("entrer x:  ");
scanf("%d",& x);
if (x>7)
{
    printf("erreur");
}
if (x==1)
{
    printf("1= lundi");
}
if (x==2)
{
    printf("2= mardi");
}
if (x==3)
{
    printf("3= mercredi");
}
if (x==4)
{
    printf("4= jeudi");
}
if (x==5)
{
    printf("5= vendredi");
}
if (x==6)
{
    printf("6= samedi");
}
if (x==7)
{
    printf("7= dimenche");
}
if (x<1)
{
    printf("erreur");
}
printf("\n*********fin***********\n");

}
exercice8()
{
    int x;
    printf("\n\n*************** exercice 8 *****************\n\n");
    printf("entrer un nombre compris entre 1 et 8 x: ");
    scanf("%d",&x);
    while(x>8||x<1)
    {
        printf("\ndesoler ce nest pas le bon nombre entrer un autre nombre: ");
        scanf("%d",&x);
    }
    printf("\nbravooooooooooooooo vous avez entrez le bon nombre");
    printf("\n\n ************fin*************\n\n");


}
exercice9()
{
   int x;
    printf("\n\n**************exercice 9 *****************\n\n");
    printf("entrez un nombre compris entre 10 et 20: ");
    scanf("%d",&x);
    while(x<10 || x>20)
    {
        if (x<10)
        {
            printf("entrer un nombre plus grands: ");
            scanf("%d",&x);
        }
        else
        {
            printf("entrer un nombre plus petits: ");
            scanf("%d",&x);
        }

    }
    printf("\nBravoooooooooo vous avez trouve le bon nombe\n ");
     printf("\n\n*********** fin ***********\n\n");


}
exercice10()
{
    int x,s;
    printf("\n\n*********** exercice 10 ***********\n\n");
    printf("\n-----> Donner un nombre entier et vous affichera les dix entiers qui le suivent\n\n");
    printf("entrer un nombre : ");
    scanf("%d",&x);
    for(s=0;s<=9;s++)
    {
        x=x+1;
        printf("%d",x);
        printf("\n\n");
    }
    printf("\n\n********* fin ***********n\n");
}
exercice11()
{
    int x, s;
    printf("\n\n ********** exercice 11 ********** \n\n");
    printf("\n-----> Donner un nombre entier et vous affichera les dix entiers qui le suivent\n\n");
    printf("entrez le nombre : ");
    scanf("%d",&x);
    s=0;
    while (s<10)
    {
        x=x+1;
        printf("%d",x);
        printf("\n");
        s=s+1;
    }
    printf("\n\n************** fin **************\n\n");

}
exercice13()
{
    int x,a,s;
    printf("\n\n********** exercice 13 ***********\n\n");
    printf("\n-----> 5 : 0+1+2+3+4+5=15\n\n");
    printf("entrez x: ");
    scanf("%d",&x);
    s=0;
    a=0;
    while(x>0)
    {
        s=s+1;
        x=x-1;
        a=a+s;
    }
    printf("%d",a);
    printf("\n\n************ exercice 13 ************\n\n");
}
exercice15()
{
   int x,n,m,i,s;
    printf("\n\n*********** exercice 15 ***********\n\n");
    printf("\n-----> Moyenne des nombres\n\n");
    s=0;
    printf("entrer le nombre de note: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("entrez note %d", i);
        printf(": ");
        scanf("%d",&x);
        s=s+x;
    }
    m=s/n;
    printf("\n\n MOYENNE: ");
    printf("%d",m);
    if(m<10)
    {
       printf("\nechec\n") ;
    }
    else
    {
        printf("\nreussite\n");
    }
    printf("*********fin**********\n");

}
exercice1()
{
     printf("\n\n-------------------EXERCICCE 1 --------------------\n\n");
     printf("\n----> Dire si un nombre est pair ou impair\n\n");
    int x, reste;

    printf("ENTREZ VOTRE NOMBRE :  ");
    scanf("%d", &x);
    reste=x%2;
    if(reste==0)
    {
        printf("\nCONCLUSION:   VOTRE NOMBRE EST PAIR");
    }
    else
    {
        printf("\nCONCLUSION:   VOTRE NOMBRE EST IMPAIR");
    }

    printf("\n\n ------------------ FIN DE L'EXERCICE ---------------\n\n");
}
exercice12()
{
    int i, n;
    int T[500];
    printf("Entrez le nombre d'elements de votre tableau ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Entrer l'eleemnt numero %d", i);
        printf(" :   ");
        scanf("%d", &T[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d",T[i]);
        printf("  \t ");
    }
}
exercice14()
    {
        printf("\n\n\n**********Salut mon premier programme en C!****************\n\n\n\n");
    int a, b, c, d;
    printf("donne moi la valeur du premier nombre\n\n");
    scanf("%d", &a);
    printf("donne moi la valeur du deuxième nombre\n\n");
    scanf("%d", &b);

    c=a+b;
    d=a*b;
    printf("\n\n-------La valeur de l'addition de ces deux nombres est:  %d", c);
    printf("\n\n\n");
    printf("-------La valeur de la multipliction de ces deux nombres est:  %d", d);
    printf("\n\n");

    }
    exercice16()
    {
           char matiere[100][30];
                int coef[100];
                float moyenne,nc,somme,note[100];
                int i,n,sc,age;
                char nom[100],sexe[100],prenom[100],lieuxdenaissance[100],datedenaissance[100],classe[100];


                sc=0;
                nc=0;
                somme=0;
                printf("\n\n\n");
               printf("\n ------------------------------");
               printf("\n| **************************** |");
               printf("\n| *     BULLETIN DE NOTE      *|");
               printf("\n| **************************** |");
               printf("\n------------------------------");

               printf("\n\n entrer votre nom : ");
               scanf("%s",&nom);
               printf("\n\n entrer votre prénom : ");
               scanf("%s",&prenom);
               printf("\n\n entrer votre classe : ");
               scanf("%s",&classe);
               printf("\n entrer votre sexe: ");
               scanf("%s",&sexe);
               printf("\n entrer votre age: ");
               scanf("%d",&age);
               printf("\n entrer votre lieux de naissance: ");
               scanf("%s",&lieuxdenaissance);
               printf("\n entrer votre date de naissance: ");
               scanf("%s",&datedenaissance);
                system("cls");
               printf("\n\n ==> Binvenue dans le systeme de gestion des notes\n\n\n");
               printf("         --Entrez le nombre de matieres: ");
               scanf("%d",&n);
               printf("\n\n         --passons a lenregistrement des matieres\n\n");
                for (i=1;i<=n;i++)
               {
                   printf(" -Entrez la matière numero %d", i );
                   printf(" :  ");
                   scanf("%s",&matiere[i][30]);

               }
               printf(" \n\n         --passons a lenregistrement des coefficients ");

                for (i=1;i<=n;i++)
               {
                    printf(" \n-Entrez le coefficient de  %s", matiere[i+1] );
                   printf(" :  ");
                   scanf("%d",&coef[i]);
                   sc=sc+coef[i];
               }


              printf(" \n\n         --passons a lenregistrement des notes ");

                for (i=1;i<=n;i++)
               {
                    printf(" \n-Entrez la note obtenue en %s", matiere[i+1] );
                    printf(" :  ");
                    scanf("%f",&note[i]);
                    nc=note[i]*coef[i];
                    somme=somme+nc;
               }
               moyenne=somme/sc;

               system("cls");
               printf("\n\n");
             printf("\n------------------------------------------------------------------------------");
             printf("\n| NOMS: %s", nom );
             printf("\n| PRENON: %s", prenom);
             printf("\n| CLASSE: %s", classe);
             printf("\n| SEXE: %s", sexe);
             printf("\n| DATE DE NAISSANCE: %s", datedenaissance);
             printf("\n| LIEUX DE NAISSANCE: %s", lieuxdenaissance);
             printf("\n| Age : %d", age);
             printf("\n ------------------------------------------------------------------------------");



             printf("\n ____________________________________________________________________");
             printf("\n|  MATIERE               | NOTE           |    COEF   |   COEF*NOTE   |");
             printf("\n|________________________|________________|___________|_______________|\n\n");

             for(i=1;i<=n;i++)
             {
                 int s;
                 printf("| %23s", matiere[i+1]);

                 printf("| %15f", note[i]);

                 printf("| %10d", coef[i]);

                 s=note[i]*coef[i];
                 printf("| %14d", s);
                 printf("|");
                 printf("\n");
             }
             printf("|_____________________________________________________________________|");
             printf("\n|        TOTAL                            ");
             printf("|%11d", sc);
             printf("|%15f", somme);
             printf("|\n|_____________________________________________________________________|");
             printf("\n                       |                                 |");
             printf("\n                       |  MOYENNE : %17f", moyenne);
             printf("    |\n");
             printf("\n\n\n");
    }

    addition(float a, float b)
   {
        float s;
        s=a+b;
        return s;

    }
    multiplication(float a ,  float b)
    {
        float s;
        s=a*b;
        return s;
    }
    soustraction(float x, float y)
    {
        float s;
        s=x-y;
        return s;
    }
    division(float x, float y)
    {
          float s;
        s=x/y;
        return s;
    }

    menu()
    {

        printf("\n\n*------------------------------------*");
        printf("\n*          MINI CALCULATRICE         *");
        printf("\n*------------------------------------*");
        int choix;
        float x, y, reponse;
        printf("\n\n 1- Addition");
        printf("\n\n 2- multiplication");
        printf("\n\n 3- soustraction");
        printf("\n\n 4- division");
        printf("\n\nFaites votre choix....  ");
        scanf("%d", &choix);
        if(choix==1)
            {

                printf("\n\n*------------------------------------*");
                printf("\n*          ADDITION                   *");
                printf("\n*------------------------------------*");
                printf("\n\n Donner le premier nombre: ");
                scanf("%f", &x);
                printf("\n Donner le deuxième nombre: ");
                scanf("%f", &y);
                reponse=addition(x,y);
                printf("\n ----> le resultat est: %f",reponse);
                printf("\n\n");
                system("pause");
                system("cls");
                menu();
            }
            if(choix==2)
            {

                printf("\n\n*------------------------------------*");
                printf("\n*          MULTIPLICATION            *");
                printf("\n*------------------------------------*");
                printf("\n\n donner le premier nombre: ");
                scanf("%f",&x);
                printf("\n\n entrer le deuxieme nombre: ");
                scanf("%f",&y);
                reponse=multiplication(x,y);
                printf("\n\nle resultat de la multiplication est: %f",reponse );
                printf("\n\n");
                system("pause");
                system("cls");
                menu();
            }
            if(choix==3)
            {

                printf("\n\n*------------------------------------*");
                printf("\n*          SOUSTRACTION              *");
                printf("\n*------------------------------------*");
                printf("\n\n donner le premier nombre: ");
                scanf("%f",&x);
                printf("\n\n entrer le deuxieme nombre: ");
                scanf("%f",&y);
                reponse=soustraction(x,y);
                printf("\n\nle resultat de la soustraction est: %f",reponse );
                printf("\n\n");
                system("pause");
                system("cls");
                menu();

            }
            if(choix==4)
            {

                printf("\n\n*------------------------------------*");
                printf("\n*          DIVISION                   *");
                printf("\n*------------------------------------*");
                printf("\n\n donner le premier nombre: ");
                scanf("%f",&x);
                printf("\n\n entrer le deuxieme nombre: ");
                scanf("%f",&y);
                reponse=division(x,y);
                printf("\n\n le resultat de la division est: %f",reponse );
                printf("\n\n");
                system("pause");
                system("cls");
                menu();

            }
            else
            {
                printf("vous avez entrer un mauvais ");
                printf("\n\n");
                system("pause");
                system("cls");

            }



 }
exercice18()
{
    int choix,point;
    point=0;

    printf("\n\n");
    printf("\n_____________________________________________");
    printf("\n|                                             |");
    printf("\n|      JEUX DE QUESTIONS A CHOIX MULTPLE      |");
    printf("\n|_____________________________________________|");
    printf("\n\n");
    printf("\n\n\nA- Quel est le cosinus de 60?\n");
    printf("    \n1- 1/2         \n2- 2/3    \n3- 3/2        \n4- (-1/2)\n ");
    scanf("%d",&choix);
    if(choix==1)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\nnombre de point: %d", point);
    }
    else
    {
        printf("\nnmauvaise reponse    ");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }

    printf("\n\n\nB- quel est la planete la plus proche du soleil\n");
    printf("    \n1- mars         \n2- saturne    \n3- jupiter        \n4- mercure \n");
    scanf("%d",&choix);
    if(choix==4)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }
     printf("\n\n\nC- Octogone regulier a combien de cote\n");
    printf("    \n1- 8         \n2- 4    \n3- 16        \n4- 6 \n");
    scanf("%d",&choix);
    if(choix==3)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }
     printf("\n\n\nD- quel est lun des ports externe de l ordinateur parmi cest ports\n");
    printf("    \n1- ethernet         \n2- hdmi    \n3- jack        \n4- sata \n");
    scanf("%d",&choix);
    if(choix==3)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }
     printf("\n\n\nE- quel est le tiers de 12\n");
    printf("    \n1- 3         \n2- 4    \n3- 7        \n4- 6 \n");
    scanf("%d",&choix);
    if(choix==2)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d" , point);
    }
    printf("\n\n\nF- quel est la date de l'independance du cameroun \n");
    printf("    \n1- 1971         \n2- 1972    \n3- 1954        \n4- 1960 \n");
    scanf("%d",&choix);
    if(choix==4)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }

    printf("\n\n\nF- Qui a découvert l'Amerique ? \n");
    printf("    \n1- Fernado poo         \n2- Charles de Gaules    \n3- Christophe Colomb        \n4- Magelan \n");
    scanf("%d",&choix);
    if(choix==3)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }

        printf("\n\n\nF- Lequel de ces hommes a fait le tour du monde ? \n");
    printf("    \n1- Fernado poo         \n2- Charles de Gaules    \n3- Christophe Colomb        \n4- Magelan \n");
    scanf("%d",&choix);
    if(choix==4)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }

    printf("\n\n\nF- Quelle a ete la date de debut de la première guerre mondiale ? \n");
    printf("    \n1- 1939         \n2- 1814    \n3- 1918        \n4- 1914 \n");
    scanf("%d",&choix);
    if(choix==4)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }

        printf("\n\n\nF- En quelle année le traite Germano-Doaula a t-il ete signe ? \n");
    printf("    \n1- 1916         \n2- 1884    \n3- 1902        \n4- 1882 \n");
    scanf("%d",&choix);
    if(choix==2)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }
    printf("\n\n\nF- En quel année est mort Ruben Um Nyobe ? \n");
    printf("    \n1- 1945         \n2- 1958    \n3- 1961        \n4- 1959 \n");
    scanf("%d",&choix);
    if(choix==3)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }
    printf("\n\n\nF- Quelle est la date de réunification du Cameroun ? \n");
    printf("    \n1- 1972         \n2- 1960    \n3- 1860        \n4- 1961 \n");
    scanf("%d",&choix);
    if(choix==3)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }

    printf("\n\n\nF- Qui a découvert l'Amerique ? \n");
    printf("    \n1- Fernado poo         \n2- Charles de Gaules    \n3- Christophe Colomb        \n4- Magelan \n");
    scanf("%d",&choix);
    if(choix==3)
    {
        printf("\n\nBonne reponse");
        point=point+5;
        printf("\n nombre de point: %d", point);
    }
    else
    {
        printf("\nmauvaise reponse");
        point=point+0;
        printf("\n nombre de point: %d", point);
    }

     printf("\n______________________________");
     printf("\n| TOTAL DES POINTS:  %d", point);
     printf("\n------------------------------");


}
exercice19()
{


}
exercice20()
{

}
menuprinc()
{
   int choix ;

    printf("\n\n");
    printf("\n                 **************************************************");
    printf("\n                 *    ________________________________________    *");
    printf("\n                 *   |                                        |   *");
    printf("\n                 *   |   SYNTHESE DE LA PROGRAMMATION EN C    |   *");
    printf("\n                 *   |________________________________________|   *");
    printf("\n                 *                                                *");
    printf("\n                 **************************************************");
    printf("\n                             |   VACANCES+++ 2020     |             ");
    printf("\n                             |________________________|             ");

    printf("\n\n");



    printf("\n                 ******************************");
    printf("\n                 |         MENU               |");
    printf("\n                 ******************************");

        printf("\n\n");
        printf("\n 1 ---> Exercice 1                         11 ---> Exercice 11");
        printf("\n 2 ---> Exercice 2                         12 ---> Exercice 12(tableau)");
        printf("\n 3 ---> Exercice 3                         13 ---> Exercice 13   ");
        printf("\n 4 ---> Exercice 4                         14 ---> Exercice 14   ");
        printf("\n 5 ---> Exercice 5                         15 ---> Exercice 15");
        printf("\n 6 ---> Exercice 6                         16 ---> Exercice 16 (buletin)");
        printf("\n 7 ---> Exercice 7                         17 ---> Exercice 17(calculatrice)");
        printf("\n 8 ---> Exercice 8                         18 ---> Exercice 18 (QCM) ");
        printf("\n 9 ---> Exercice 9                         19 ---> Exercice 19");
        printf("\n 10 ---> Exercice 10                       21 ---> Exercice 20");

        printf("\n\n Quel est votre choix: ");
        scanf("%d",&choix);
        if(choix==1)
        {

            exercice1();
            system("pause");
            system("cls");
            menuprinc();
        }

         if(choix==2)
        {
            exercice2();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==3)
        {
            exercice3();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==4)
        {
            exercice4();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==5)
        {
            exercice5();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==6)
        {
            exercice6();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==7)
        {
            exercice7();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==8)
        {
            exercice8();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==9)
        {
            exercice9();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==10)
        {
            exercice10();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==11)
        {
            exercice11();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==12)
        {
            exercice12();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==13)
        {
            exercice13();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==14)
        {
            exercice14();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==15)
        {
            exercice15();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==16)
        {
            exercice16();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==17)
        {
           menu();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==18)
        {
          exercice18();
            system("pause");
            system("cls");
            menuprinc();
        }
         if(choix==19)
        {

        }
         if(choix==20)
        {

        }
        if(choix==1)
        {

        }

}

int main()
{
    menuprinc();
}
