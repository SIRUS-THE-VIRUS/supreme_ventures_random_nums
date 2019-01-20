#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu();
int gen();
void dollaz(int a);
void super_lotto();
void lotto();

int main()
{
    int choice=0;
    int num=0;
    srand(time(0));//Create the seed for rand() function
    while(choice<4){
        choice = menu();
        if(choice==3){
            printf("\nHow many plays 3-10\n===>>> ");
            scanf("%d",&num);
        }
        run(choice,num);
    }
}
int menu(){
    int a;
    system("pause");
    system("cls");
    printf("1) Lotto\n");
    printf("2) Super Lotto\n");
    printf("3) Dollaz\n");
    printf("4) Exit\n====>>> ");
    scanf("%d",&a);
    return a;
}

int gen(){
    int a;
    a= 1+rand()%36;//Stores a random number between 1 and 36 inclusive
    return a;
}
void run(int a,int b){
    int i;
    switch(a){
    case 1:
        lotto();
        printf("\n");
        break;
    case 2:
        super_lotto();
        printf("\n");
        break;
    case 3:
        dollaz(b);
        printf("\n");
    }
}
void dollaz(int a){
    int i;
    printf("Dollaz Numbers : ");
        for(i=0;i<a;i++)
            printf("%d ",gen());
}
void super_lotto(){
    int i;
    printf("Super Lotto Numbers : ");
        for(i=0;i<5;i++)
            printf("%d ",gen());
}
void lotto(){
    int i;
    printf("Lotto Numbers : ");
        for(i=0;i<6;i++)
            printf("%d ",gen());
}
