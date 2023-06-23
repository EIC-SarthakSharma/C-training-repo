#include<stdio.h>
void main()
{
	int acc[10]={1001,1002,1003,1004,1005,1006,1007,1008,1009,1010};
	int psw[10]={1201,1302,1403,1504,1605,1706,1807,1908,1109,1210};
	int bal = 0;
	int op_ch,amt;
	int rpt;
	//char admin_password="einfochips";
	
	int acc_ch,en_ps;
	// Showing present accounts in the bank
	
	printf("Select Account\n");
	for(int i=0;i<10;i++)
	{
		printf("%d ,",acc[i]);
	}
	printf("\n");
	
	//Selecting acc of your choice
	
	printf("Select Account of your choice:");
	scanf("%d",&acc_ch);
	printf("\n");
	
	printf("Type Password for account %d:",acc_ch);
	scanf("%d",&en_ps);
	printf("\n");
	
	
	switch(acc_ch)
	{
	case 1001:
	{
	if(en_ps==1201)
	{
		printf("Availibe Balance: %d",bal);
		printf("\n");
		printf("press 1 to Deposit and 0 to Withdraw\n");
		scanf("%d",&op_ch);
		switch(op_ch)
		{
			case 1:
			printf("Enter amount to be deposited: ");
			scanf("%d",&amt);
			bal=bal+amt;
			printf("Updated Balance: %d",bal);
			printf("\n");
			break;
			
			case 0:
			printf("Enter amount to be withdrawn: ");
			scanf("%d",&amt);
			bal=bal-amt;
			printf("Updated Balance: %d",bal);
			printf("\n");
			break;
			
			default:
			printf("Enter Valid choice");
			printf("\n");
			break;
		}
	}
	else
	{
		printf("Wrong Password !!");
	}
	printf("\n");
	break;
	}
	
	case 1002:
	{
	if(en_ps==1302)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1003:
	{
	if(en_ps==1403)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1004:
	{
	if(en_ps==1504)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1005:
	{
	if(en_ps==1605)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1006:
	{
	if(en_ps==1706)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1007:
	{
	if(en_ps==1807)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1008:
	{
	if(en_ps==1908)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1009:
	{
	if(en_ps==11109)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1010:
	{
	if(en_ps==1210)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	default:
			printf("Enter Valid Account Number!!");
			printf("\n");
			break;
	
	}
	
	printf("if You wish to repeat process , press 11 \n ");
	scanf("%d",&rpt);
	
	while(rpt==11)
	{
		printf("Select Account of your choice:");
	scanf("%d",&acc_ch);
	printf("\n");
	
	printf("Type Password for account %d:",acc_ch);
	scanf("%d",&en_ps);
	printf("\n");
	
	
	switch(acc_ch)
	{
	case 1001:
	{
	if(en_ps==1201)
	{
		printf("Availibe Balance: %d",bal);
		printf("\n");
		printf("press 1 to Deposit and 0 to Withdraw\n");
		scanf("%d",&op_ch);
		switch(op_ch)
		{
			case 1:
			printf("Enter amount to be deposited: ");
			scanf("%d",&amt);
			bal=bal+amt;
			printf("Updated Balance: %d",bal);
			printf("\n");
			break;
			
			case 0:
			printf("Enter amount to be withdrawn: ");
			scanf("%d",&amt);
			bal=bal-amt;
			printf("Updated Balance: %d",bal);
			printf("\n");
			break;
			
			default:
			printf("Enter Valid choice");
			printf("\n");
			break;
		}
	}
	else
	{
		printf("Wrong Password !!");
	}
	printf("\n");
	break;
	}
	
	case 1002:
	{
	if(en_ps==1302)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1003:
	{
	if(en_ps==1403)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1004:
	{
	if(en_ps==1504)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1005:
	{
	if(en_ps==1605)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1006:
	{
	if(en_ps==1706)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1007:
	{
	if(en_ps==1807)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1008:
	{
	if(en_ps==1908)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1009:
	{
	if(en_ps==11109)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	case 1010:
	{
	if(en_ps==1210)
		{
			printf("Availibe Balance: %d",bal);
			printf("\n");
			printf("press 1 to Deposit and 0 to Withdraw\n");
			scanf("%d",&op_ch);
			switch(op_ch)
			{
				case 1:
				printf("Enter amount to be deposited: ");
				scanf("%d",&amt);
				bal=bal+amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
			
				case 0:
				printf("Enter amount to be withdrawn: ");
				scanf("%d",&amt);
				bal=bal-amt;
				printf("Updated Balance: %d",bal);
				printf("\n");
				break;
				
				default:
			printf("Enter Valid choice");
			printf("\n");
			break;
			}
		}
	else
		{
			printf("Wrong Password !!");
		}
		printf("\n");
		break;
	}
	
	default:
			printf("Enter Valid Account Number!!");
			printf("\n");
			break;
	
	}
	
	printf("if You wish to repeat process , press 11 \n ");
	scanf("%d",&rpt);
	}
	 
}  
