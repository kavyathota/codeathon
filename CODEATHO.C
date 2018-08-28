#include<stdio.h>
#include<conio.h>
#include<string.h>
int price[100],quantity[100],i=0;
char name[100][30],cat[100][30];
char pdate[100][10],edate[100][10];
void add()
{
printf("\nenter name: ");
fflush(stdin);
gets(name[i]);
printf("\nenter price: ");
scanf("%d",&price[i]);
printf("\nenter category: ");
fflush(stdin);
gets(cat[i]);
printf("\nenter quantity: ");
scanf("%d",&quantity[i]);
printf("\nenter purchase date: ");
fflush(stdin);
gets(pdate[i]);
printf("\nenter expiry date : ");
fflush(stdin);
gets(edate[i]);
i++;
}
void print()
{
int j;
for(j=0;j<i;j++)
{
printf("product %d\n",j+1);
printf("name : %s\n",name[j]);
printf("price : %d\n",price[j]);
printf("category : %s\n",cat[j]);
printf("quantity : %d\n",quantity[j]);
printf("purchase date : %s\n",pdate[j]);
printf("expiry date : %s\n",edate[j]);
}
}
void pricef()
{
int j;
int s;
printf("select category :");
scanf("%d",&s);
for(j=0;j<i;j++)
{
if(price[j]==s)
{
printf("product %d\n",j+1);
printf("name : %s\n",name[j]);
printf("price : %d\n",price[j]);
printf("category : %s\n",cat[j]);
printf("quantity : %d\n",quantity[j]);
printf("purchase date : %s\n",pdate[j]);
printf("expiry date : %s\n",edate[j]);
}
}
}
void category()
{
int j;
char s[30];
printf("select category :");
fflush(stdin);
gets(s);
for(j=0;j<i;j++)
{
if(strcmp(s,cat[j])==0)
{
printf("product %d\n",j);
printf("name : %s\n",name[j]);
printf("price : %d\n",price[j]);
printf("category : %s\n",cat[j]);
printf("quantity : %d\n",quantity[j]);
printf("purchase date : %s\n",pdate[j]);
printf("expiry date : %s\n",edate[j]);
}
}
}
void filter()
{
int p;
printf("press\n");
printf("1.fliter based on price\n");
printf("2.filter based on category\n");
scanf("%d",&p);
switch(p)
{
case 1:
	pricef();
	break;
case 2:
	category();
	break;
}
}
void main()
{
 while(1)
 {
 int x;
 clrscr();
 printf("press\n");
 printf("1.add product details\n");
 printf("2.list products\n");
 printf("3.filter products\n");
 printf("4.exit\n");
 fflush(stdin);
 scanf("%d",&x);
 switch(x)
 {
 case 1:
	add();
	break;
 case 2:
	print();
	getch();
	break;
 case 3:
	filter();
	getch();
	break;
 case 4:
	exit(1);

 }
 }
}