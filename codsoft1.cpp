#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    cout<<"\t\tNUMBER GUESSING GAME\n";
    srand(time(0));
    int secret_number,guessing_number,i,target,n=1;
    secret_number=(rand() % 100)+1;
    
    while(n==1)
    {
    cout<<"enter you target(i.e How many attempts you are going to take??)";
    cin>>target;
    cout<<endl;
    for(i=1;i<=target;i++)
    {
        cout<<"enter guessing number: ";
        cin>>guessing_number;
        if(guessing_number>secret_number)
        {
            cout<<"guessing number is greater than secret number!! guess smaller number!!\n";
            cout<<"**************\n";
        }
        else if(guessing_number<secret_number)
        {
            cout<<"guessing number is smaller than secret number!! guess greater number!!\n";
            cout<<"**************\n";
        }
        else if(guessing_number==secret_number)
        {
            cout<<"great!! you guessed correctly!!\n";
            cout<<"**************\n";
            break;
        }
        else
        {
            cout<<"sorry!! invalid input!!\n";
            cout<<"**************\n";
        }
        
    } 
    if(secret_number!=guessing_number)
    cout<<"sorry !! you failed to get it!!\n";
    cout<<endl;
    cout<<"do u want to play again ?? if yes press 1: ";
    cin>>n;
    cout<<endl;
    }
    return 0;
}