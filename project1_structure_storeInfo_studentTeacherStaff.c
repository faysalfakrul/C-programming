#include<stdio.h>

struct student{
    int id;
    char name[100];
    char department[50];
    float cgpa;
    int attendance;
};
struct teacher{
    int id;
    char name[100];
    char subject[50];
    float salary;
};
struct staff{
    int id;
    char name[100];
    char position[50];
    float salary;
};

int main(){
    struct student stu[100];  //makes array of structure
    struct teacher tec[50];
    struct staff sta[50];

int nstu,ntec,nsta;

printf("How many student?\n");
scanf("%d",&nstu);

for( int i=0; i<nstu; i++){
    printf("\nEnter the information of student %d\n",i+1);

    printf("ID: ");
    scanf("%d",&stu[i].id);

     printf("Name: ");
    scanf("%s",stu[i].name);

     printf("Department: ");
    scanf("%s",stu[i].department);

     printf("CGPA: ");
    scanf("%f",&stu[i].cgpa);

     printf("Attendance percentage: ");
    scanf("%d",&stu[i].attendance);
}

printf("How many teacher?\n");
scanf("%d",&ntec);

for(int i=0; i<ntec; i++){
    printf("\nEnter the information of teacher %d\n",i+1);

    printf("ID: ");
    scanf("%d",&tec[i].id);

     printf("Name: ");
    scanf("%s",tec[i].name);

     printf("Subject: ");
    scanf("%s",tec[i].subject);

     printf("Salary: ");
    scanf("%f",&tec[i].salary);
}


printf("How many staff?\n");
scanf("%d",&nsta);

for(int i=0; i<nsta; i++){
    printf("\nEnter the information of staff %d\n",i+1);

    printf("ID: ");
    scanf("%d",&sta[i].id);

     printf("Name: ");
    scanf("%s",sta[i].name);

     printf("Position: ");
    scanf("%s",sta[i].position);

     printf("Salary: ");
    scanf("%f",&sta[i].salary);
}

   printf("\nSTUDENT INFORMATION\n");
    for (int i = 0; i < nstu; i++) {
        printf("\nID: %d", stu[i].id);
        printf("\nName: %s", stu[i].name);
        printf("\nDepartment: %s", stu[i].department);
        printf("\nCGPA: %f", stu[i].cgpa);
        printf("\nAttendance: %d\n", stu[i].attendance);
    }

    printf("\nTEACHER INFORMATION\n");
    for (int i = 0; i < ntec; i++) {
        printf("\nID: %d", tec[i].id);
        printf("\nName: %s", tec[i].name);
        printf("\nSubject: %s", tec[i].subject);
        printf("\nSalary: %f\n", tec[i].salary);
    }

    printf("\nSTAFF INFORMATION\n");
    for (int i = 0; i < nsta; i++) {
        printf("\nID: %d", sta[i].id);
        printf("\nName: %s", sta[i].name);
        printf("\nPosition: %s", sta[i].position);
        printf("\nSalary: %f\n", sta[i].salary);
    }

    return 0;
}