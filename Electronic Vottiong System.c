#include<stdio.h>
#include<string.h>
#define total_no_of_parties
#define party_no_1 "A"
#define party_no_2 "B"
#define party_no_3 "C"
#define party_no_4 "D"

int vote_Count1 = 0,
    vote_Count2 = 0,
    vote_Count3 = 0,
    vote_Count4 = 0,
    given_vote= 0,
    invalid_votes = 0;
int c=0;
int u=0;
int n=0;
char can[40];
int Vote()
{

    int choice;
    int i;
    printf("\n \n<#> <#> Please chooose your Candidate <#> <#>\n \n");
    printf("\n             1. %s", party_no_1);
    printf("\n             2. %s", party_no_2);
    printf("\n             3. %s", party_no_3);
    printf("\n             4. %s", party_no_4);
    printf("\n             5. %s", "None of the above\n");
    printf("\n \n     ** Input your choice ( 1 - 4 ) : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        vote_Count1++;
        given_vote++;
        break;
    case 2:
        vote_Count2++;
        given_vote++;
        break;
    case 3:
        vote_Count3++;
        given_vote++;
        break;
    case 4:
        vote_Count4++;
        given_vote++;
        break;
    case 5:
        invalid_votes++;
        given_vote++;
        break;
    default:
        printf(" \n***Error: Wrong Choice !! Please retry***\n\n");

    }
    printf(" \n****Thanks for your vote !!*****\n\n");
    return 0;
}

int votesCount()
{
    printf("\n \n##### Voting Statics #####\n");
    printf("\nTotal given vote - %d",given_vote);
    printf("\n%s - %d", party_no_1, vote_Count1);
    printf("\n%s - %d", party_no_2, vote_Count2);
    printf("\n%s - %d", party_no_3, vote_Count3);
    printf("\n%s - %d", party_no_4, vote_Count4);
    printf("\n%s - %d\n\n", "Spoiled Votes", invalid_votes);

}

int getLeadingCandiate()
{
    printf("\n \n##### Leading Candiate #####\n \n");
    if(vote_Count1 > vote_Count2 && vote_Count1 > vote_Count3 && vote_Count1 > vote_Count4)
    {
        printf("The Leading Candiate is : %s", party_no_1);
    }
    else if(vote_Count2 > vote_Count1 && vote_Count2 > vote_Count3 && vote_Count2 > vote_Count4)
    {
        printf("The Leading Candiate is : %s", party_no_2);
    }
    else if(vote_Count3 > vote_Count2 && vote_Count3 > vote_Count1 && vote_Count3 > vote_Count4)
    {
        printf("The Leading Candiate is : %s", party_no_3);
    }
    else if(vote_Count4 > vote_Count2 && vote_Count4> vote_Count3 && vote_Count4 > vote_Count1)
    {
        printf("The Leading Candiate is : %s", party_no_4);
    }
    else
    {
        printf("+++++ Warning!! No Win-Win Situation +++++++\n\n");
    }
}
int user()
{
    int chose;
    int n;
    int count=0;
    if((c>u)&&(c>n))
    {
        printf("\nThis is a City Corporation Election\n");
    }
    else if((u>c)&&(u>n))
    {
        printf("\nThis is a Union Election\n");
    }
    else
    {
        printf("\nThis is a National Election\n");
    }
    printf("\nPlease Give Your Vote\n");
    printf("\nEnter Your Nid Number: \n");
    scanf("%d",&n);
    printf("\n 1. Choose Your candidate\n");
    scanf("%d", &chose);
    if(chose==1)
    {
        Vote();
        count++;
    }
    else
    {
        printf("\nPlease Enter right number\n");
    }
    printf("\n Your Nid Card Number Is %d\n",n);
    printf("\n Your Total Given Vote Is %d\n\n\n",count);
}
int add_can()
{
    int c;
    printf("********************************************\n\n");
    printf("Enter how many candidate you want to add:\n");
    scanf("%d",&c);
    printf("********************************************\n");
    printf("********Enter The Name Of Candidates********\n");
    for(int i=0; i<c; i++)
    {
        scanf("%s",&can[i]);
    }
    printf("*******Successfully Candidates Added********\n\n\n");
}
int election()
{
    int e;
    printf("\n 1. City Corporation \n");
    printf("\n 2. Union Election\n");
    printf("\n 3. National Election\n");
    printf("\n Please select election type:\n");
    scanf("%d",&e);
    switch(e)
    {
    case 1:
        printf("\n Successfully Selected Election Type\n");
        c++;
        break;
    case 2:
        printf("\n Successfully Selected Election Type\n");
        u++;
        break;
    case 3:
        printf("\n Successfully Selected Election Type\n");
        n++;
        break;
    default:
        printf("\n Invalid Keyword !!!!\n");

    }
    if((c>u)&&(c>n))
    {
        printf("\nThis is a City Corporation Election\n\n\n");
    }
    else if((u>c)&&(u>n))
    {
        printf("\nThis is a Union Election\n\n\n");
    }
    else
    {
        printf("\nThis is a National Election\n\n\n");
    }

}
int number()
{
    int num;
    printf("\n  ** Please Enter The Voter Number: \n\n");
    scanf("%d",&num);
}
int front()
{
    int choice;
    do
    {
        printf("********************************************\n");
        printf("\n          Successfully Login  \n");
        printf("********************************************\n");
        printf("\n   1.Find the vote count\n");
        printf("\n   2.Find The leading Candidate\n");
        printf("\n   3.Add Candidates\n");
        printf("\n   4.Select Election Type\n");
        printf("\n   5.Input total Voter Number\n");
        printf("\n   0.Exit \n");
        printf("\n   Please Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            votesCount();
            break;
        case 2:
            getLeadingCandiate();
            break;
        case 3:
            add_can();
            break;
        case 4:
            election();
            break;
        case 5:
            number();
            break;
        default:
            printf("**Wrong entry! please retry**");
        }
    }
    while (choice!=0);

    return 0;
}

int admin()
{
    char username[50];
    char password[50];
    printf("********************************************\n");
    printf("\n         ENTER USERNAME:  \n");
    scanf("%s",&username);
    printf("\n         ENTER PASSWORD:   \n");
    scanf("%s",&password);

    if(strcmp(username,"admin")==0)
    {
        if( strcmp(password,"1234")==0)
        {
            front();
        }
        else
        {
            printf("\n Invalid Password \n");
        }
    }

}
int main()
{

    int users;
    do
    {
        printf("********************************************\n");
        printf("****      welcome To Voting System      ****\n");
        printf("********************************************\n");
        printf("\n            1. Admin\n");
        printf("\n            2.Voter\n");
        printf("\n            3.Exit\n");
        printf("\n       Please Enter User Type:\n");
        scanf("%d",&users);
        if(users==1)
        {

            admin();

        }
        else if(users==2)
        {
            user();
        }
        else if(users==3)
        {
            printf("The Voting Machine Is off\n");
            break;
        }
        else
        {
            printf("Please Enter The Valid Number!!!\n");
        }
    }
    while (users!=0);

}
