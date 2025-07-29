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

    //-----------------------------------------------
    /* *Isosceles/Pyramid Triangle* */
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<nTimes-1-i; j++)
    //     {
    //         cout <<" ";
    //     }
        
    //     for(int k=0; k<i+1; k++)
    //     {
    //         cout <<k+1;
    //     }
        
    //     for(int l=i; l>0; l--)
    //     {
    //         cout <<l;
    //     }
        
    //     cout <<"\n";
    // }

    /* *Hollow Diamond* */    
    // Top
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<nTimes-i-1; j++)
    //     {
    //         cout <<" ";
    //     }
        
    //     cout <<"*";
        
    //     if(i != 0)
    //     {
    //         for(int k=0; k<2*i-1; k++)
    //         {
    //             cout <<" ";
    //         }
    //         cout <<"*";
    //     }
    //     cout <<'\n';
    // }
    
    // Bottom
    // for(int i=0; i<nTimes-1; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout <<" ";
    //     }
        
    //     cout <<"*";
        
    //     if(i != nTimes-2)
    //     {
    //         // for(int k=0; k<2*(nTimes-i)-5; k++)
    //         for(int k=0; k<2*(nTimes-i-2)-1; k++)
    //         {
    //             cout <<" ";
    //         }
    //         cout <<"*";
    //     }
    //     cout <<'\n';
    // }
    
    /* *Butter Fly* */
    //Top
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<i+1; j++)
    //     {
    //         cout <<"*";
    //     }
        
    //     for(int k=0; k<2*(nTimes-i-1);k++)
    //     {
    //         cout <<" ";
    //     }
        
    //     for(int l=0; l<i+1; l++)
    //     {
    //         cout <<"*";
    //     }
    //     cout <<"\n";
    // }
    
    // //Bottom
    // for(int i=0; i<nTimes; i++)
    // {
    //     for(int j=0; j<nTimes-i; j++)
    //     {
    //         cout <<"*";
    //     }
        
    //     for(int k=0; k<2*(i);k++)
    //     {
    //         cout <<" ";
    //     }
        
    //     for(int l=0; l<nTimes-i; l++)
    //     {
    //         cout <<"*";
    //     }
    //     cout <<"\n";
    // }

    
    return 0;
}