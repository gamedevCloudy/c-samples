#include<stdio.h>

struct stuDat
{
    char name[10];
    int rollN0;
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int ttl;
};

int main()
{
    struct stuDat sDat[5];
     for(int i =0; i<5; i++)
    {
        char ch; 
        printf("\n\n Roll no:- "); 
        scanf("%ld", &sDat[i].rollN0); 
        ch = getchar(); 
        printf("\n Enter Student Name:- ");
        scanf("%s", sDat[i].name);
		ch = getchar(); 
        printf("\n\n Enter Marks of Physics: "); 
        scanf("%ld", &sDat[i].s1); 
        ch = getchar(); 
        printf("\n\n Enter Marks of Chemistry: "); 
        scanf("%ld", &sDat[i].s2); 
        ch = getchar(); 
        printf("\n\n Enter Marks of Math: "); 
        scanf("%ld", &sDat[i].s3); 
        ch = getchar(); 
        printf("\n\n Enter Marks of Hindi: "); 
        scanf("%ld", &sDat[i].s4); 
        ch = getchar(); 
        printf("\n\n Enter Marks of English: "); 
        scanf("%ld", &sDat[i].s5); 
        ch = getchar(); 
        sDat[i].ttl = sDat[i].s1 + sDat[i].s2 + sDat[i].s3 + sDat[i].s4 + sDat[i].s5;
    }

    //print data
      for(int i = 0; i < 5; i++)
        {
            printf("\n Roll no. %d\t  %s  Total Marks:- %d  Phy:- %d  Chem:- %d  Math:- %d  Hin:- %d  Eng:- %d", sDat[i].rollN0, sDat[i].name, sDat[i].ttl, sDat[i].s1, sDat[i].s2, sDat[i].s3, sDat[i].s4, sDat[i].s5 );
			printf("\n \n"); 
        }
    return 0;

}
