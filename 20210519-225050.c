#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE*file,*file1;
    char name1[100],name2[100];
    int math,science,english,id,sum;
    int math1, science1,english1,id1,sum1;
    float average, average1,total,total1;
    
 
    file = fopen("D:\\student1.txt","w");
    if(file == NULL)
    {
      printf("Unsupported file");
      return (-1);
    
    }
    
    printf ("Student name:");
    fgets(name1,sizeof(name1),stdin);
    
    printf ("ID Number:");
    scanf ("%d",&id1);
    
    printf ("Math Grade:");
    scanf ("%d",&math);
    printf ("Science Grade:");
    scanf ("%d",&science);
    printf ("English Grade:");
    scanf("%d",&english);
    
    sum=math+science+english;
    printf("Total sum of grade is %d\n",sum);
    
    
    total=math+science+english;
    average=total/3;
    
    printf ("Grade Average is %.2f", average);
    
    
    fprintf(file, "Student name: %s",name1);
    fprintf(file, "Student id: %d",id);
    
    fprintf(file, "Math grade:%d",math);
    fprintf(file, "Mcience grade:%d",science);
    fprintf(file, "English grade: %d",english);
    
    fprintf(file, "sum of grade:%d",sum);
    fprintf(file, "total average:%d", average);
    
    fclose(file);
    
    
    //stud3nt 2
    
    
    file1 = fopen ("D:\\student2.txt","w");
    if(file1 == NULL)
    {
     printf("Unsupported file");
    return(-1);
    }
    
    printf("\n\nstudent name:");
    fgetc(stdin);
    
    fgets(name2,sizeof(name2),stdin);
    printf ("ID number:");
    scanf ("%d",&id1);
    
    printf ("Math Grade:");
    scanf ("%d",&math1);
    printf ("Science Grade:");
    scanf ("%d",&science1);
    printf ("English Grade:");
    scanf("%d",&english1);
    
    sum=math+science+english;
    printf("Total sum of grade is %d\n",sum1);
    
    
    total1=math1+science1+english1;
    average1=total1/3;
    
    printf ("Grade Average is %.2f", average1);
    
    fprintf(file1, "Student name: %s",name2);
    fprintf(file1, "Student id: %d",id1);
    
    fprintf(file1, "Math grade:%d",math1);
    fprintf(file1,  "Science grade:%d",science1);
    fprintf(file1, "English grade: %d",english1);
    
    fprintf(file1, "sum of grade:%d",sum1);
    fprintf(file1, "total average:%d", average1);
    
    fclose(file1);
    
    return 0;
}