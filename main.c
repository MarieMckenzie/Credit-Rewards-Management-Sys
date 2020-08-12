#include<stdio.h>
#include<conio.h>

int main()
{



      char fname[10], lname[12] , pword[4], entrycode[1];
      double reward[6], regpoint[6],transamount[6], average, totreward, totpoint, tottransamount, htransamount[6];
      int  i, count, totcustomer ,crcardnum[6],crcardnumf[6], bonus[6],crcardcode[6];

      printf("PlantinumBlue-P    Supersaver-S    DiamondStone-D");

      tottransamount=0;
      totcustomer=0;
      crcardnum[i]=0;
      totpoint=0;
      totreward=0;
      pword[4]='OP3N';
      printf("To commence data entry please enter the password:");
      scanf("%d",& pword);

      if (pword[4]!='OP3N')
      {
        printf("Please re-enter the password:");
        scanf("%d",& pword[4]);
        if (pword[4]!='OP3N')
        {
          printf("Please re-enter the password if it is incorrect you will be locked out of the system-HINT-ALPHANUMERIC-:");
          scanf("%d",& pword[4]);
            if (pword[4]!= 'OP3N')
            {
             printf("Program will close, you repeated entered the incorrect password:");
            }
         }
       }

      entrycode[1]='0';
      do
      {
        printf("CREDIT WINNERS POOLING SYSTEM");
        printf("W-Store Credit Card Number");
        printf("X-Search for Credit Card");
        printf("Y-Display All Credit Card Number");
        printf("Z-Display Highest Transaction Amount");
        printf("E-Exit");
        printf("Select the letter than corresponds to the task you wish to complete");
        scanf("%d",& entrycode[1]);
      }
      while (entrycode[1]!='E');

      if (entrycode[1]=='W')
      {
         printf("STORE CREDIT CARD NUMBER");
          do
          {
          printf("Enter credit card number:\n");
          scanf("%d",& crcardnum[i]);
          printf("Please enter transaction amount:\n");
          scanf("%d",& transamount[i]);
            if (transamount[i]>htransamount[i])
            {
              htransamount[i]=transamount[i];
            }
            printf("Please enter the letter that corresponds to the card type");
            scanf("%d",& crcardcode[i]);
            if (crcardcode[i]!='S' && crcardcode[i]!='P' && crcardcode[i]!='D')
            {
              printf("The code you entered is invalid");
              printf("Please re-enter the letter that corresponds to your card type from the key above");
              scanf("%d",& crcardcode);
            }
            if (crcardcode[i]=='S')
            {
              if (transamount[i]>10500 && transamount[i]>42000)
              {
                reward[i]=0.05*transamount[i];
                bonus[i]=10000;
              }
              else
                  if (transamount[i]>10500 && transamount[i]<42000)
                  {
                      reward[i]=0.05*transamount[i];
                      bonus[i]=0;
                  }
                  else
                      reward[i]=0;
                      bonus[i]=0;
            }




            if (crcardcode[i]=='P')
            {
              if (transamount[i]>18500 && transamount[i]>76000)
              {
                reward[i]=0.105*transamount[i];
                bonus[i]=12000;
              }
              else
                 if (transamount[i]>18500 && transamount[i]<76000)
                 {
                   reward[i]=0.105*transamount[i];
                   bonus[i]=0;
                 }
                 else
                   reward[i]=0;
                   bonus[i]=0;
            }



            if (crcardcode[i]=='D')
            {
              if (transamount[i]>40500 && transamount[i]>102000)
              {
               reward[i]=0.15*transamount[i];
               bonus[i]=15000;
              }
              else
                 if (transamount[i]>40500 && transamount[i]<102000)
                 {
                   reward[i]=0.15*transamount[i];
                   bonus[i]='0';
                 }
                 else
                      reward[i]=0;
                      bonus[i]=0;
                 }


        if (bonus[i]==0)
        {
          printf("You do not qualify for a bonus");
        }

        if (reward[i]==0)
        {
          printf ("You do not qualify for a reward");
        }
        printf("Press 0 if you are finished with entry, otherwise enter the proceeding credit card number:");
        scanf("%d",& crcardnum);
        totreward = totreward + reward[i];
      }
      while (crcardcode!=0);

        if (entrycode[1]=='X')
        {
          printf("SEARCH FOR CREDIT CARD NUMBER");
          printf("Enter a credit card number");
          scanf("%d",& crcardnumf[i]);
              if (crcardnumf[i]==crcardnum[i])
              {
                printf("Credit Card Number:",crcardnum[i], "Credit Card Code",crcardcode[i],"Transaction Amount",transamount[i]);
              }
               else
                 printf("Credit Card Number not found");

          }

       if (entrycode[1]=='Y')
       {
          printf("DISPLAY ALL CREDIT CARD NUMBERS");
          printf("CARD NUMBER     CARD CODE       TRANSACTION AMOUNT   REWARD   REGULAR POINTS   BONUS POINTS");
        do
          {

            printf(crcardnum[i], "         ",crcardcode[i], "        ", transamount[i], "         ",reward[i], "        ",regpoint[i], "        ",bonus[i], "       ");
          }
          while (crcardnum!=0);
       }

      if (entrycode[1]== 'Z')
      {
         printf("DISPLAY HIGHEST TRANSACTION");
         printf("Highest Transaction:",htransamount[i]);
         printf("Credit Card Code:",crcardcode[i], "Credit Card Number:",crcardnum[i], "Transaction Amount", transamount[i]);
      }

      if (entrycode[1]== 'E')
      {
         printf("Existing Entry System");
      }

   do
   {
   printf("Please enter first name");
   scanf("%d",& fname[i]);
   printf("Please enter last name");
   scanf("%d",& lname[i]);

   if (bonus[i]+regpoint[i]<=9000 && bonus[i]+regpoint[i]>=12000)
   {
     printf("Your reward redeemable is a Restaurant Coupon");
   }
   if (bonus[i]+regpoint[i]<=12001 && bonus[i]+regpoint[i]>=18000)
   {
     printf("Your reward redeemable is a Hotel Day Pass");
   }
   if (bonus[i]+regpoint[i]>18000)
   {
   printf("Your reward redeemable is a Travel Ticket");
   }

  //Output Data//
    regpoint[i]=transamount[i] / 200;
    totcustomer=(totcustomer + 1);
	tottransamount=(tottransamount+transamount[i]);
	average=(tottransamount/totcustomer);
	totpoint=totpoint+bonus[i]+regpoint[i];

	printf("\nFirst Name:%s\n", fname);
	printf("\nLast Name:%s\n", lname);
	printf("\nCredit Card Code:%s\n", crcardcode[i]);
	printf("\nRegular Points:%d\n", regpoint[i]);
	printf("\nRewards:%d\n", reward[i], " dollars");
	printf("\nBonus:%d\n", bonus[i]);

    printf("Press 0 if you are finished with entry, otherwise enter the proceeding credit card number:");
    scanf("%d",& crcardnum);//end loop if data entry
}
            while (crcardnum[i]!=0);

	printf("\nTotal Customer:\n", totcustomer);
	printf("\nThe Total Transaction Amount:\n", tottransamount);
	printf("\nThe Average is:\n", average);
	printf("\nThe Total Cash Back is:\n", totreward);
	printff("\nThe Total Points are:\n", totpoint);
	getch();
	return 0;
}
}

