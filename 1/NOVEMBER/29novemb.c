#include<stdio.h>
#define max 50
int main()
{
	int con,n=0,op,i,a[max],flag=0,s=0,t=0,j,e,f,mid,c,v;
	char ch;
	do
	{
	printf("\n\t\tMENU OF ARRAY OPERATION");
	printf("\n\t----------------------------------------");
	printf("\n\t\t1.FILLING OPERATION");
	printf("\n\t\t2.TRANSVERSE OPERATION");
	printf("\n\t\t3.SEARCHING OPERATION");	
	printf("\n\t\t\t3.A LINEAR SEARCH");
	printf("\n\t\t\t3.B BINARY SEARCH");
	printf("\n\t\t4.SORTING OPERATION");
	printf("\n\t\t5.ISERTING AN ELEMENT");
	printf("\n\t\t6.DELETION OF AN ELEMENT");
	printf("\n\t\tENTER YOUR OPTION");
	scanf("%d",&op);
	switch(op)
		{
			case 1:printf("\nENTER the no of values you have");
					scanf("%d",&n);
					for(i=0;i<n;i++)
					{
						printf("\nENTer the ELEMent of the aRRay");
						scanf("%d",&a[i]);
					}	
					break;
			case 2:if(n==0)
					printf("\nSORRY IT IS AN EMPTY ARRAY");
					else
					{
						for(i=0;i<n;i++)
						{
							printf("\na[%d]=%d",i,a[i]);
						}	
					}
					break;
			case 3:if(n==0)
					printf("\nSORRY IT IS AN EMPTY ARRAY");
					else
					{
							printf("\n\t\tWHICH SEARCH YOU WANT TO DO");
							printf("\nA LINEAR SEARCH");
							printf("\nB BINARY SEARCH");
							scanf("%c",&ch);
							printf("\n ENTER the value you want to search");
							scanf("%d",s);
							switch(ch)
							{
								case 'a':
								case 'A':	for(i=0;i<n-1;i++)
											{
												if(s==a[i])
												{
													printf("\nTHE ELEMENT WHICH YOU WANT TO SEARCH IS FOUND");
												flag=1;
												}
											}
											if(flag==0)
											printf("\nTHE ELEMENT WHICH YOU WANT TO SEARCH IS not FOUND ");
											break;
								case 'b':
								case 'B':e=n;
										printf("\nENTER the no  you want to find");
										scanf("%d",&f);
										while(s<=e)
										{
											mid=(s+e)/2;
											if(a[mid]==f)
											{
												c=1;
												break;
											}
											else if(a[mid]>f)
											e=mid-1;
											else 
											s=mid+1;
											}
											if(c==1)
											printf("\nthe element which you are searching is found ");
											else
											printf("\nthe element which you are searching is not found ");
										 break;
								default:printf("\nWRONG INPUT");
							}
		
					}
			case 4:if(n==0)
					printf("\nSORRY IT IS AN EMPTY ARRAY");
					else
					{
						for(i=0;i<n-1;i++)
						{
							for(j=i+1;j<n;j++)
							{
								if(a[i]>a[j])
								{
									t=a[i];
									a[i]=a[j];
									a[j]=t;		
								}
							}
						}
					}
					break;
			case 5:if(n==0)
					printf("\nSORRY IT IS AN EMPTY ARRAY");
					else
					{
						printf("\nENTER the location where you wish to insert element");
						scanf("%d",&s);
						printf("\nENTER the value to insert");
						scanf("%d",&v);
						for(i=n-1;i>=s-1;i--)
						a[i+1]=a[i];
						a[s-1]=v;
						printf("\nresultant array");
						for(i=0;i<=n;i++)
			    		printf("\na[%d]=%d",i,a[i]);
			    	}
				 	break;
			case 6:
					printf("\nUnder construction");
					break;
			default:printf("\nWRONG INPUT");
		}
	printf("\nDO YOU WNAT TO CONTINUE IF YES THEN ENTER 1 TO CONTINUE ELSE ENTER 0");
	scanf("%d",&con);
	}

    while(con==1);
    return 0;
}