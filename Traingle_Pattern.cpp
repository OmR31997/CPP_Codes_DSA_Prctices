#include <iostream>

using namespace std;

int main()
{
    int nTimes = 6;

    /* *Star Pattern* */
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<i+1; j++)   //when j becomes i+1 < i+1 will be geting false
    //     {
    //         cout <<"* ";
    //     }
    //     cout <<endl;
    // }

    /* *Number* */
    // for(int i=0; i<nTimes;i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout <<(i+1)<<' ';
    //     }
    //     cout <<endl;
    // }

    /* *Alphabet* */
    // char ch = 'A';
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout <<ch<<' ';
    //     }

    //     ch = ch+1;
    //     cout <<endl;
    // }

    //--------------------------------------------------------
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=1; j<=i+1; j++)
    //     {
    //         cout <<j<<' ';
    //     }
    //     cout<<endl;
    // }


    // for(int i =0; i<nTimes; i++)
    // {
    //     char ch='A';
    //     for(int j=1; j<=i+1; j++)
    //     {
    //         cout <<ch<<' ';
    //         ch++;
    //     }
    //     cout <<endl;
    // }

    //---------------------------------------------------
    /* *Reverse Number* */
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=i+1; j>0; j--)
    //     {
    //         cout << j<<' ';
    //     }
    //     cout <<endl;
    // }

    // for(int i=0; i<nTimes; i++)
    // {
    //     char ch = 'A';
    //     for(int j=i+1; j>0; j--)
    //     {
    //         char temp = ch + j - 1;
    //         cout <<temp<<' ';
    //     }
    //     cout <<'\n';
    // }
//------------------------------------------------------
    /* *Foly's Triangle Pattern* */
    // int num=1;
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout << num<<' ';
    //         num++;
    //     }
    //     cout <<'\n';
    // }

    // char ch = 'A';

    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout<<ch<<' ';
    //         ch++;
    //     }
    //     cout <<'\n';
    // }
    
//-----------------------------------------------------------

    /* *Invert Right Triangle* */
    // for(int i=0; i<=nTimes; i++)
    // {
    //     for(int j=0; j<i; j++)
    //     {
    //         cout <<' ';
    //     }

    //     for(int k=0; k<nTimes-i; k++)
    //     {
    //         cout <<(i+1);
    //     }
    //     cout <<'\n';
    // }

    // char ch='A';
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout <<' ';
    //     }

    //     for(int k=0; k<nTimes-i; k++)
    //     {
    //         cout <<ch;
    //     }
    //     cout <<'\n';
    //     ch++;
    // }

    
    return 0;
}