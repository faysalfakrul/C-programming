#include<stdio.h>
struct Student {
    int id;
    char name[50];
    char department[30];
    float cgpa;
};

int main(){
    FILE *fptr;
    struct Student s;
    
 fptr= fopen("Student.txt","r");

if(fptr==NULL){
    printf("file cannot be opened\n");
    return 1;
}
fscanf(fptr,"%d",&s.id);
fscanf(fptr," %[^\n]",s.name);
fscanf(fptr," %[^\n]",s.department);
fscanf(fptr,"%f",&s.cgpa);

printf("-----STUDENT INFORMATION-----\n");
printf("ID: %d\n", s.id);
printf("Name: %s\n", s.name);
printf("Department: %s\n", s.department);
printf("CGPA: %f\n", s.cgpa);

fclose(fptr);
    return 0;
}