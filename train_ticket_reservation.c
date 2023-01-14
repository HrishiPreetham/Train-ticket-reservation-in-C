#include <stdio.h>
int main()
{   
    char dep[100],arr[100];
    char ban[100]="bangalore";
    char che[100]="chennai";
    char mum[100]="mumbai";
    char day[12];
    char c;
    char c1[100];
    int t,k,m,i,j;
    struct bc {
        char name[150][100];
        int cost;
        int a[50][3];
    }mondaybc,fridaybc;
    struct cb {
        char name[150][100];
        int cost;
        int a[50][3];       
    }tuesdaycb,saturdaycb;
    struct bm {
        char name[150][100];
        int cost;
        int a[50][3];              
    }mondaybm,wednesdaybm;
    struct mb {
        char name[150][100];
        int cost;
        int a[50][3];       
    }tuesdaymb,fridaymb;
    struct cm {
        char name[150][100];
        int cost;
        int a[50][3];       
    }tuesdaycm,fridaycm;
    struct mc {
        char name[150][100];
        int cost;
        int a[50][3];       
    }wednesdaymc,saturdaymc;
    printf("available stations :%s,%s,%s\nyour departure station:",ban,che,mum);
    scanf("%s",dep);
    printf("\narrival station:  ");
    scanf("%s",arr);
    if ((dep[0]=='b'||dep[0]=='B') && (arr[0]=='c'||arr[0]=='C'))
    {
     printf("\nplease select your date of travel:monday,friday ----- ");
     scanf("%s",day);
     if (*day=='m' || *day=='M')
     {  t=0;
        mondaybc.cost=100;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (mondaybc.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {mondaybc.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&mondaybc.name[i][0]);}
        else if (c=='B')
        {mondaybc.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&mondaybc.name[i][0]);}
        else
        {mondaybc.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&mondaybc.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(mondaybc.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
     if (*day=='f' || *day=='F')
     {  t=0;
        fridaybc.cost=100;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (fridaybc.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {fridaybc.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaybc.name[i][0]);}
        else if (c=='B')
        {fridaybc.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaybc.name[i][0]);}
        else
        {fridaybc.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaybc.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(fridaybc.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
    }

    if ((dep[0]=='c'||dep[0]=='C') && (arr[0]=='b'||arr[0]=='B'))
    {
     printf("\nplease select your date of travel:tuesday,saturday ----- ");
     scanf("%s",day);
     if (*day=='t' || *day=='T')
     {  t=0;
        tuesdaycb.cost=100;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (tuesdaycb.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {tuesdaycb.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaycb.name[i][0]);}
        else if (c=='B')
        {mondaybc.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaycb.name[i][0]);}
        else
        {tuesdaycb.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaycb.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(tuesdaycb.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
     if (*day=='s' || *day=='S')
     {  t=0;
        saturdaycb.cost=100;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (saturdaycb.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {saturdaycb.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&saturdaycb.name[i][0]);}
        else if (c=='B')
        {saturdaycb.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&saturdaycb.name[i][0]);}
        else
        {saturdaycb.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&saturdaycb.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(saturdaycb.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
    }

    if ((dep[0]=='b'||dep[0]=='B') && (arr[0]=='m'||arr[0]=='M'))
    {
     printf("\nplease select your date of travel:monday,wednesday ----- ");
     scanf("%s",day);
     if (*day=='m' || *day=='M')
     {  t=0;
        mondaybm.cost=175;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (mondaybm.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {mondaybm.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&mondaybm.name[i][0]);}
        else if (c=='B')
        {mondaybm.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&mondaybm.name[i][0]);}
        else
        {mondaybm.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&mondaybm.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(mondaybm.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
     if (*day=='w' || *day=='W')
     {  t=0;
        wednesdaybm.cost=175;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (wednesdaybm.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {wednesdaybm.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&wednesdaybm.name[i][0]);}
        else if (c=='B')
        {wednesdaybm.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&wednesdaybm.name[i][0]);}
        else
        {wednesdaybm.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&wednesdaybm.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(wednesdaybm.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
    }
    
    if ((dep[0]=='m'||dep[0]=='M') && (arr[0]=='b'||arr[0]=='B'))
    {
     printf("\nplease select your date of travel:tuesday,friday ----- ");
     scanf("%s",day);
     if (*day=='t' || *day=='T')
     {  t=0;
        tuesdaymb.cost=175;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (tuesdaymb.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {tuesdaymb.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaymb.name[i][0]);}
        else if (c=='B')
        {tuesdaymb.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaymb.name[i][0]);}
        else
        {tuesdaymb.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaymb.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(tuesdaymb.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
     if (*day=='f' || *day=='F')
     {  t=0;
        fridaymb.cost=175;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (fridaymb.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {fridaymb.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaymb.name[i][0]);}
        else if (c=='B')
        {fridaymb.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaymb.name[i][0]);}
        else
        {fridaymb.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaymb.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(fridaymb.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
    }

    if ((dep[0]=='c'||dep[0]=='C') && (arr[0]=='m'||arr[0]=='M'))
    {
     printf("\nplease select your date of travel:tuesday,friday ----- ");
     scanf("%s",day);
     if (*day=='t' || *day=='T')
     {  t=0;
        tuesdaycm.cost=300;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (tuesdaycm.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {tuesdaycm.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaycm.name[i][0]);}
        else if (c=='B')
        {tuesdaycm.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaycm.name[i][0]);}
        else
        {tuesdaycm.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&tuesdaycm.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(tuesdaycm.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
     if (*day=='f' || *day=='F')
     {  t=0;
        fridaycm.cost=300;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (fridaycm.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {fridaycm.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaycm.name[i][0]);}
        else if (c=='B')
        {fridaycm.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaycm.name[i][0]);}
        else
        {fridaycm.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&fridaycm.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(fridaycm.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
    }

    if ((dep[0]=='m'||dep[0]=='M') && (arr[0]=='c'||arr[0]=='C'))
    {
     printf("\nplease select your date of travel:wednesday,saturday ----- ");
     scanf("%s",day);
     if (*day=='w' || *day=='W')
     {  t=0;
        wednesdaymc.cost=300;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (wednesdaymc.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {wednesdaymc.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&wednesdaymc.name[i][0]);}
        else if (c=='B')
        {wednesdaymc.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&wednesdaymc.name[i][0]);}
        else
        {wednesdaymc.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&wednesdaymc.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(wednesdaymc.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
     if (*day=='s' || *day=='S')
     {  t=0;
        saturdaymc.cost=300;

        printf("\nHow many seats you want to book?");
        scanf("%d",&t);
        for (k=0;k<t;k++)
        {
        printf("\nThe available seats are :\n");
        for (i=0;i<50;i++)
        {
           for (j=0;j<3;j++)
           {
               if (saturdaymc.a[i][j]!=1)
               {      
                    if (j==0)
                    printf("\n%dA\t",i);
                    else if (j==1)
                    printf("%dB\t",i);
                    else
                    printf("%dC\t",i);
               }
            }
        }

        printf("\nPlease select your seat by typing seat number:");
        scanf("%d%c",&i,&c);
        if (c=='A')  
        {saturdaymc.a[i][0]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&saturdaymc.name[i][0]);}
        else if (c=='B')
        {saturdaymc.a[i][1]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&saturdaymc.name[i][0]);}
        else
        {saturdaymc.a[i][2]=1;
        printf("\nplease enter your name:");
        scanf("\n%[^\n]s",&saturdaymc.name[i][0]);}
        }
        printf("\nDo you want to opt for meal?- normal(1) or classic(2) or special(3)\n");
        scanf("%d",&m);
        printf("\ntotal cost of payment is Rs%d\nplease process your purchase for the train by selecting UPI or card\n",(saturdaymc.cost)*t+(50*m*t));
        printf("\nUPI or card\n");
        scanf("%s",c1);
        printf("\nYour purchase is processed and your tickets are confirmed");

        
     }
    }
}