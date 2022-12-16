#include<stdio.h>
#include<string.h>
#include <graphics.h>
#include <conio.h>
struct ad{
    char name[50];
    char disease[50];
    int cabin,phone,age;
}
x[100];
int n, i, j=0, a=0, sum=0, g, num=0;
void add();
void view();
void search();
void edit();
void del();
void show();

int main(){
     initwindow(688,388,"Simple Hospital Management System");
     readimagefile("System.jpg",0,0,688,388);
     getch();
     closegraph();

    int choice=0,i,q;
    printf("Simple Hospital Management System\n\n");
    while(choice!=5){
        printf("Choose Your Option\n\n");
        printf("1. Add Information\n2. View Information\n3. Edit Information\n4. Search Information\n5. Delete Information\n\n");
        printf("Option : ");
        scanf("%d",&choice);//choice for option
        fflush(stdin);//Clears the output stream
        if(choice==1)//add
        {
            system("cls");//Clears console
            add();
        }
        else if(choice==2)//view
        {
            system("cls");
            view();
        }
        else if(choice==3)//search
        {
            system("cls");
            edit();
        }
        else if(choice==4)//edit
        {
            system("cls");
            search();
        }
        else if(choice==5)//delete
        {
            system("cls");
            del();
        }
        else{
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
void add(){
    printf("Number of inputed data on the database = %d\n\n",num);//number of inputs
    printf("Number of entries you want to add : ");
    scanf("%d",&n);
    sum=n+num;
    printf("\n");
    for(i=1; i<=sum; i++){
        fflush(stdin);
        printf("Patient's Name: ");
        gets(x[i].name);

        fflush(stdin);
        printf("Disease Name: ");
        gets(x[i].disease);

        fflush(stdin);
        printf("Patient's Age: ");
        scanf("%d",&x[i].age);

        printf("Cabin no: ");
        scanf("%d",&x[i].cabin);

        printf("Phone number: ");
        scanf("%d",&x[i].phone);
        printf("\n");
        num++;
    }
}
void search(){
    int s,h,f;
    char u[100];
    printf("By what do you want to search?\n");
    printf("1.Serial Number.\n2.Name\n3.Disease\n4.Cabin Number\n5.Phone Number\n6.Age\n\nOption : ");
    scanf("%d",&h);
    if(h==1){
        printf("Enter Serial Number of the Patient : ");
        scanf("%d",&s);
        if(s<=num){
            printf("\n");
            printf("Serial Number : %d\n",s);
            printf("Name : ");
            printf(x[s].name);
            printf("Disease : ");
            puts(x[s].disease);
            printf("Age : %d\nCabin number : %d\nPhone Number : 0%d\n\n",x[s].age,x[s].cabin,x[s].phone);
        }
    }
    else if(h==2){
        fflush(stdin);
        printf("Enter Name of the Patient : ");
        gets(u);
        fflush(stdin);
        for(g=1; g<=num; g++){
            if(strcmp(u,x[g].name)==0){
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Age : %d\nCabin Number : %d\nPhone Number : 0%d\n\n",x[g].age,x[g].cabin,x[g].phone);
            }
        }
    }
    else if(h==3){
        fflush(stdin);
        printf("Enter Disease : ");
        gets(u);
        fflush(stdin);
        for(g=1; g<=num; g++){
            if(strcmp(u,x[g].disease)==0){
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Age : %d\nCabin Number : %d\nPhone Number : 0%d\n\n",x[g].age,x[g].cabin,x[g].phone);
            }
        }
    }
    else if(h==4){
        printf("Enter Cabin number : ");
        scanf("%d",&f);
        for(g=1; g<=num; g++){
            if(f==x[g].cabin){
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Age : %d\nCabin Number : %d\nPhone Number : 0%d\n\n",x[g].age,x[g].cabin,x[g].phone);
            }
        }
    }
    else if(h==5){
        //int f=1;
        printf("Enter Phone number : ");
        scanf("%d",&f);
        for(g=1; g<=num; g++){
            if(f==x[g].phone){
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Age : %d\nCabin Number : %d\nPhone number : 0%d\n\n",x[g].age,x[g].cabin,x[g].phone);
                //f=0;
            }

        }
    }
    else if(h==6){
        printf("Enter Age : ");
        scanf("%d",&f);
        for(g=1; g<=num; g++){
            if(f==x[g].age){
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Age : %d\nCabin Number : %d\nPhone Number : 0%d\n\n",x[g].age,x[g].cabin,x[g].phone);
            }
        }
    }
    else{
        printf("nInvalid input\n\n");
    }
}

void view(){
    for(i=1; i<=num; i++){
        printf("Serial Number: %d\n",i);
        printf("Name : ");
        puts(x[i].name);
        printf("Disease : ");
        puts(x[i].disease);
        printf("Cabin no : %d\n",x[i].cabin);
        printf("Phone number : 0%d\n",x[i].phone);
        printf("Age : %d\n\n",x[i].age);
    }
}

void edit(){
    int q,p;
    fflush(stdin);
    printf("Choose what you want to edit\n\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Cabin Number\n5.Phone Number\n");
    printf("Enter Your Choice : ");
    scanf("%d",&q);//option
    if(q<=5){
        printf("Enter the Serial Number of the patient : (1 - %d)=", num);
        scanf("%d",&p);//serial number
        if(p<=num){
            if(q==1){
                fflush(stdin);
                printf("Enter new name : ");
                gets(x[p].name);

            }
            else if(q==2){
                fflush(stdin);
                printf("Enter new Disease : ");
                gets(x[p].disease);
            }
            else if(q==3){
                fflush(stdin);
                printf("Enter new Age : ");
                scanf("%d",&x[p].age);
            }

            else if(q==4){
                fflush(stdin);
                printf("Enter new Cabin Number : ");
                scanf("%d",&x[p].cabin);
            }

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter new Phone Number : ");
                scanf("%d",&x[p].phone);
            }
        }
        else{
            printf("\nInvalid Serial Number\nTry Again !!\n\n");
        }
    }
    else{
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}

void del(){
    int f,h;
    printf("Enter the Serial Number of the patient that you want to delete : ");
    scanf("%d",&f);
    if(f<=num){
        printf("Choose What You Want to Remove.\n\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove Cabin\n6.Remove phone number\n\nOption : ");
        scanf("%d",&h);
        if(h==1){
            while(f<=num){
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].cabin=x[f+1].cabin;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].cabin=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

    }
