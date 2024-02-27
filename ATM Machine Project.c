/* This ATM will handle only specific accounts (pin) listed below:
 1520,2530,3540,4550,5560,6570,7580,8590.*/
#include<stdio.h>
int main()
{
    int x,a,b,c,credit;
    int pin;
	printf("\n");    
	printf("                            ======\n");
	printf("                        ==============\n");
    printf("                    ======================\n");
    printf("                  ===== Welcome to ATM ======\n");
    printf("                    ======================\n");
    printf("                        ==============\n");
    printf("                            ======\n\n");
    printf("                  ============================\n");
	printf("                  >> Enter your 4 digit PIN <<\n");
	printf("                  ============================\n");
	printf("\t\t\t");
	scanf("%d",&pin);
    switch(pin)
    {
    	case 1520:
    		printf("\n");
    		printf("                  Wellcome Mr Ali\n\n");
    		printf("                  > For Credit Inquiry Press 1\n");
            printf("                  > For Cash Deposit press 2\n");
            printf("                  > For Cash withdrawal press 3\n");
            printf("                  > To Exit press 0\n");
        credit=10000;
        printf("\t\t\t");
        scanf("%d",&a);
        while(a!=0)
        {
        if(a==1)
        {
           printf("                --------------------------\n");
           printf("                Credit Inquiry Successful\n");
           printf("                > Your Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==2)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&b);
           credit+=b;
           printf("                --------------------------\n");
           printf("                -Cash Deposit Successfull-\n");
           printf("                > Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==3)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&c);
           credit-=c;
           printf("                --------------------------\n");
           printf("                Cash Withdrawal successfull\n");
           printf("                > Current Credit: %d\n\n",credit);
           printf("                --------------------------\n");
        }
		printf("                 > For Credit Inquiry Press 1\n");
        printf("                 > For Cash Deposit press 2\n");
        printf("                 > For Cash withdrawal press 3\n");
        printf("                 > To Exit press 0\n");
		printf("\t\t\t");
        scanf("%d",&a);
		}
        break;
        case 2530:
    		printf("\n");
    		printf("                  Wellcome Mr Asif\n\n");
			printf("                  > For Credit Inquiry Press 1\n");
            printf("                  > For Cash Deposit press 2\n");
            printf("                  > For Cash withdrawal press 3\n");
            printf("                  > To Exit press 0\n");
		credit=25000;
		printf("\t\t\t");
        scanf("%d",&a);
        while(a!=0)
        {
        if(a==1)
        {
           printf("                --------------------------\n");
           printf("                Credit Inquiry Successful\n");
           printf("                > Your Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==2)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&b);
           credit+=b;
           printf("                --------------------------\n");
           printf("                -Cash Deposit Successfull-\n");
           printf("                > Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==3)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&c);
           credit-=c;
           printf("                --------------------------\n");
           printf("                Cash Withdrawal successfull\n");
           printf("                > Current Credit: %d\n\n",credit);
           printf("                --------------------------\n");
        }
		printf("                 > For Credit Inquiry Press 1\n");
        printf("                 > For Cash Deposit press 2\n");
        printf("                 > For Cash withdrawal press 3\n");
        printf("                 > To Exit press 0\n");
		printf("\t\t\t");
        scanf("%d",&a);
		}
        break;
        case 3540:
			printf("\n");
    		printf("                  Wellcome Mr Ahmad\n\n");
			printf("                  > For Credit Inquiry Press 1\n");
            printf("                  > For Cash Deposit press 2\n");
            printf("                  > For Cash withdrawal press 3\n");
            printf("                  > To Exit press 0\n");
		credit=16000;
		printf("\t\t\t");
        scanf("%d",&a);
        while(a!=0)
        {
        if(a==1)
        {
           printf("                --------------------------\n");
           printf("                Credit Inquiry Successful\n");
           printf("                > Your Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==2)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&b);
           credit+=b;
           printf("                --------------------------\n");
           printf("                -Cash Deposit Successfull-\n");
           printf("                > Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==3)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&c);
           credit-=c;
           printf("                --------------------------\n");
           printf("                Cash Withdrawal successfull\n");
           printf("                > Current Credit: %d\n\n",credit);
           printf("                --------------------------\n");
        }
		printf("                 > For Credit Inquiry Press 1\n");
        printf("                 > For Cash Deposit press 2\n");
        printf("                 > For Cash withdrawal press 3\n");
        printf("                 > To Exit press 0\n");
		printf("\t\t\t");
        scanf("%d",&a);
		}
        break;
        case 4550:
    		printf("\n");
    		printf("                  Wellcome Mr Amir\n\n");
			printf("                  > For Credit Inquiry Press 1\n");
            printf("                  > For Cash Deposit press 2\n");
            printf("                  > For Cash withdrawal press 3\n");
            printf("                  > To Exit press 0\n");    
		credit=14000;
		printf("\t\t\t");
        scanf("%d",&a);
        while(a!=0)
        {
        if(a==1)
        {
           printf("                --------------------------\n");
           printf("                Credit Inquiry Successful\n");
           printf("                > Your Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==2)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&b);
           credit+=b;
           printf("                --------------------------\n");
           printf("                -Cash Deposit Successfull-\n");
           printf("                > Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==3)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&c);
           credit-=c;
           printf("                --------------------------\n");
           printf("                Cash Withdrawal successfull\n");
           printf("                > Current Credit: %d\n\n",credit);
           printf("                --------------------------\n");
        }
		printf("                 > For Credit Inquiry Press 1\n");
        printf("                 > For Cash Deposit press 2\n");
        printf("                 > For Cash withdrawal press 3\n");
        printf("                 > To Exit press 0\n");
		printf("\t\t\t");
        scanf("%d",&a);
		}
        break;
        case 5560:
    		printf("\n");
    		printf("                  Wellcome Mr Bilal\n\n");
			printf("                  > For Credit Inquiry Press 1\n");
            printf("                  > For Cash Deposit press 2\n");
            printf("                  > For Cash withdrawal press 3\n");
            printf("                  > To Exit press 0\n");
		credit=45000;
		printf("\t\t\t");
        scanf("%d",&a);
        while(a!=0)
        {
        if(a==1)
        {
           printf("                --------------------------\n");
           printf("                Credit Inquiry Successful\n");
           printf("                > Your Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==2)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&b);
           credit+=b;
           printf("                --------------------------\n");
           printf("                -Cash Deposit Successfull-\n");
           printf("                > Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==3)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&c);
           credit-=c;
           printf("                --------------------------\n");
           printf("                Cash Withdrawal successfull\n");
           printf("                > Current Credit: %d\n\n",credit);
           printf("                --------------------------\n");
        }  
		printf("                 > For Credit Inquiry Press 1\n");
        printf("                 > For Cash Deposit press 2\n");
        printf("                 > For Cash withdrawal press 3\n");
        printf("                 > To Exit press 0\n");
		printf("\t\t\t");
        scanf("%d",&a);
		}
        break;
        case 6570:
    		printf("\n");
    		printf("                  Wellcome Mr Kamran\n\n");
			printf("                  > For Credit Inquiry Press 1\n");
            printf("                  > For Cash Deposit press 2\n");
            printf("                  > For Cash withdrawal press 3\n");
            printf("                  > To Exit press 0\n");
	    credit=7000;
	    printf("\t\t\t");
        scanf("%d",&a);
        while(a!=0)
        {
        if(a==1)
        {
           printf("                --------------------------\n");
           printf("                Credit Inquiry Successful\n");
           printf("                > Your Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==2)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&b);
           credit+=b;
           printf("                --------------------------\n");
           printf("                -Cash Deposit Successfull-\n");
           printf("                > Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==3)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&c);
           credit-=c;
           printf("                --------------------------\n");
           printf("                Cash Withdrawal successfull\n");
           printf("                > Current Credit: %d\n\n",credit);
           printf("                --------------------------\n");
        }
		printf("                 > For Credit Inquiry Press 1\n");
        printf("                 > For Cash Deposit press 2\n");
        printf("                 > For Cash withdrawal press 3\n");
        printf("                 > To Exit press 0\n");
		printf("\t\t\t");
        scanf("%d",&a);
		}
        break;
        case 7580:
    		printf("\n");
    		printf("                  Wellcome Mr Hashim\n\n");
			printf("                  > For Credit Inquiry Press 1\n");
            printf("                  > For Cash Deposit press 2\n");
            printf("                  > For Cash withdrawal press 3\n");
            printf("                  > To Exit press 0\n");    
		credit=50000;
		printf("\t\t\t");
        scanf("%d",&a);
        while(a!=0)
        {
        if(a==1)
        {
           printf("                --------------------------\n");
           printf("                Credit Inquiry Successful\n");
           printf("                > Your Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==2)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&b);
           credit+=b;
           printf("                --------------------------\n");
           printf("                -Cash Deposit Successfull-\n");
           printf("                > Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==3)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&c);
           credit-=c;
           printf("                --------------------------\n");
           printf("                Cash Withdrawal successfull\n");
           printf("                > Current Credit: %d\n\n",credit);
           printf("                --------------------------\n");
        }
		printf("                 > For Credit Inquiry Press 1\n");
        printf("                 > For Cash Deposit press 2\n");
        printf("                 > For Cash withdrawal press 3\n");
        printf("                 > To Exit press 0\n");
		printf("\t\t\t");
        scanf("%d",&a);
		}
        break;
        case 8590:
    		printf("\n");
    		printf("                  Wellcome Mr Noman\n\n");
			printf("                  > For Credit Inquiry Press 1\n");
            printf("                  > For Cash Deposit press 2\n");
            printf("                  > For Cash withdrawal press 3\n");
            printf("                  > To Exit press 0\n");
		credit=36000;
		printf("\t\t\t");
        scanf("%d",&a);
        while(a!=0)
        {
        if(a==1)
        {
           printf("                --------------------------\n");
           printf("                Credit Inquiry Successful\n");
           printf("                > Your Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==2)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&b);
           credit+=b;
           printf("                --------------------------\n");
           printf("                -Cash Deposit Successfull-\n");
           printf("                > Current Credit: %d\n",credit);
           printf("                --------------------------\n");
        }
        else if(a==3)
        {
           printf("                > Enter Amount: \n");
           	printf("\t\t\t");
		   scanf("                 %d",&c);
           credit-=c;
           printf("                --------------------------\n");
           printf("                Cash Withdrawal successfull\n");
           printf("                > Current Credit: %d\n\n",credit);
           printf("                --------------------------\n");
        }    
		printf("                 > For Credit Inquiry Press 1\n");
        printf("                 > For Cash Deposit press 2\n");
        printf("                 > For Cash withdrawal press 3\n");
        printf("                 > To Exit press 0\n");
		printf("\t\t\t");
        scanf("%d",&a);
		}
        break;
    }
    printf("                 ==============================\n");
    printf("                 //   Thanks for using our   //\n");
    printf("                 //         Services         //\n");
    printf("                 ==============================\n");
    return 0;
}
