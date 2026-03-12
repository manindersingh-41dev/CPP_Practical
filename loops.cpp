#include <iostream>

using namespace std;

int main()
{
    // Loops

    // For - loop

    // for (int i = 0; i<=10; i++)
    // {
    //     cout<<i<<endl;
    // }

    // while-loop

    // int i = 11;

    // while(i<10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // cout<<"the loop ended"<<endl;


    // do-while loop

    // int i=11;

    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }while(i<10);

    // cout<<"the loop ended"<<endl;

    //nested loop

    // for (int i=0; i<3;i++)
    // {
    //     for (int j=0;j<5;j++)
    //     {
    //         cout<<i<<"  -  "<<j<<endl;
    //     }
    // }


    // break 


    int i=0;

    while(i<10)
    {
        cout<<i<<endl;
        i++;
        if (i==5)
        {
            break;
        }
    }

    return 0;
}