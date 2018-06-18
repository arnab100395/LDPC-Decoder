#include <stdio.h>
#include <stdlib.h>  /* For exit() function */
int main()
{
   int array[2000];
   int i;
   FILE *fptr;
   fptr = fopen("array.txt", "r");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
	i=0;
	int data;
  int j;
	while (!feof(fptr))
	{
		fscanf(fptr,"%d",&data);
		array[i]=data;
		i++;
	}  
  fclose(fptr);
 	for (i=0;i<1824;i++)
	{
		printf("%d\n",array[i]);
	} 
  FILE *fptr1;
  fptr1=fopen("output_vnu.txt","w");
  if(fptr1==NULL)
  {
      printf("Error!");
      exit(1);
  }
  for(j=1;j<=48;j++)
  {
   fprintf(fptr1,"VNU_3 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t\t\t\t\t\t\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t\t\t\t\t\t\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[3*j-3],array[3*j-2],array[3*j-1],array[3*j-3],array[3*j-2],array[3*j-1],j,j-1);
   fprintf(fptr1,"\n");
  }
  
    for(j=49;j<=72;j++)
  {
   fprintf(fptr1,"VNU_6 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t,.Q4(Q[%d])\t,.Q5(Q[%d])\t,.Q6(Q[%d])\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t,.R4(R[%d])\t,.R5(R[%d])\t,.R6(R[%d])\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[6*(j-25)],array[6*(j-25)+1],array[6*(j-25)+2],array[6*(j-25)+3],array[6*(j-25)+4],array[6*(j-25)+5],array[6*(j-25)],array[6*(j-25)+1],array[6*(j-25)+2],array[6*(j-25)+3],array[6*(j-25)+4],array[6*(j-25)+5],j,j-1);
   fprintf(fptr1,"\n");
  }
  
  for(j=73;j<=120;j++)
  {
   fprintf(fptr1,"VNU_3 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t\t\t\t\t\t\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t\t\t\t\t\t\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[3*j+69],array[3*j+70],array[3*j+71],array[3*j+69],array[3*j+70],array[3*j+71],j,j-1);
   fprintf(fptr1,"\n");
  }
  
  for(j=121;j<=144;j++)
  {
   fprintf(fptr1,"VNU_6 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t,.Q4(Q[%d])\t,.Q5(Q[%d])\t,.Q6(Q[%d])\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t,.R4(R[%d])\t,.R5(R[%d])\t,.R6(R[%d])\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[6*(j-49)],array[6*(j-49)+1],array[6*(j-49)+2],array[6*(j-49)+3],array[6*(j-49)+4],array[6*(j-49)+5],array[6*(j-49)],array[6*(j-49)+1],array[6*(j-49)+2],array[6*(j-49)+3],array[6*(j-49)+4],array[6*(j-49)+5],j,j-1);
   fprintf(fptr1,"\n");
  }
  
   for(j=145;j<=168;j++)
  {
   fprintf(fptr1,"VNU_3 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t\t\t\t\t\t\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t\t\t\t\t\t\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[3*(j+47)],array[3*(j+47)+1],array[3*(j+47)+2],array[3*(j+47)],array[3*(j+47)+1],array[3*(j+47)+2],j,j-1);
   fprintf(fptr1,"\n");
  }
   
   for(j=169;j<=192;j++)
  {
   fprintf(fptr1,"VNU_6 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t,.Q4(Q[%d])\t,.Q5(Q[%d])\t,.Q6(Q[%d])\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t,.R4(R[%d])\t,.R5(R[%d])\t,.R6(R[%d])\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[6*(j-61)],array[6*(j-61)+1],array[6*(j-61)+2],array[6*(j-61)+3],array[6*(j-61)+4],array[6*(j-61)+5],array[6*(j-61)],array[6*(j-61)+1],array[6*(j-61)+2],array[6*(j-61)+3],array[6*(j-61)+4],array[6*(j-61)+5],j,j-1);
   fprintf(fptr1,"\n");
  }
   
   for(j=193;j<=216;j++)
  {
   fprintf(fptr1,"VNU_3 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t\t\t\t\t\t\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t\t\t\t\t\t\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[3*(j+71)],array[3*(j+71)+1],array[3*(j+71)+2],array[3*(j+71)],array[3*(j+71)+1],array[3*(j+71)+2],j,j-1);
   fprintf(fptr1,"\n");
  }
   
   for(j=217;j<=240;j++)
  {
   fprintf(fptr1,"VNU_6 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t,.Q4(Q[%d])\t,.Q5(Q[%d])\t,.Q6(Q[%d])\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t,.R4(R[%d])\t,.R5(R[%d])\t,.R6(R[%d])\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[6*(j-73)],array[6*(j-73)+1],array[6*(j-73)+2],array[6*(j-73)+3],array[6*(j-73)+4],array[6*(j-73)+5],array[6*(j-73)],array[6*(j-73)+1],array[6*(j-73)+2],array[6*(j-73)+3],array[6*(j-73)+4],array[6*(j-73)+5],j,j-1);
   fprintf(fptr1,"\n");
  }
  
    for(j=241;j<=264;j++)
  {
   fprintf(fptr1,"VNU_3 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t\t\t\t\t\t\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t\t\t\t\t\t\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[3*(j+95)],array[3*(j+95)+1],array[3*(j+95)+2],array[3*(j+95)],array[3*(j+95)+1],array[3*(j+95)+2],j,j-1);
   fprintf(fptr1,"\n");
  }
    
  for(j=265;j<=288;j++)
  {
   fprintf(fptr1,"VNU_6 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t,.Q4(Q[%d])\t,.Q5(Q[%d])\t,.Q6(Q[%d])\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t,.R4(R[%d])\t,.R5(R[%d])\t,.R6(R[%d])\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[6*(j-85)],array[6*(j-85)+1],array[6*(j-85)+2],array[6*(j-85)+3],array[6*(j-85)+4],array[6*(j-85)+5],array[6*(j-85)],array[6*(j-85)+1],array[6*(j-85)+2],array[6*(j-85)+3],array[6*(j-85)+4],array[6*(j-85)+5],j,j-1);
   fprintf(fptr1,"\n");
  }
  
   for(j=289;j<=312;j++)
  {
   fprintf(fptr1,"VNU_3 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t,.Q3(Q[%d])\t\t\t\t\t\t\t,.R1(R[%d])\t,.R2(R[%d])\t,.R3(R[%d])\t\t\t\t\t\t\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[3*(j+119)],array[3*(j+119)+1],array[3*(j+119)+2],array[3*(j+119)],array[3*(j+119)+1],array[3*(j+119)+2],j,j-1);
   fprintf(fptr1,"\n");
  }
  
  for(j=313;j<=576;j++)
  {
   fprintf(fptr1,"VNU_2 VNU%d\t(.Q1(Q[%d])\t,.Q2(Q[%d])\t\t\t\t\t\t\t\t\t,.R1(R[%d])\t,.R2(R[%d])\t\t\t\t\t\t\t\t\t,.clk(clk)\t,.L(L%d)\t,.P(P[%d])\t,.reset(reset)\t);",j,array[2*(j+335)],array[2*(j+335)+1],array[2*(j+335)],array[2*(j+335)+1],j,j-1);
   fprintf(fptr1,"\n");
  }
  
  fclose(fptr1);
   return 0;
}