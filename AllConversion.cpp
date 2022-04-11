#include <bits/stdc++.h>
using namespace std;
typedef long long l;
int bin2dec(l bin)
{
    int base=1,rem,dec=0;
    while (bin!=0)
    {
        rem=bin%10;
        bin/=10;
        dec+=base*rem;
        base*=2;
    }
    return dec;

}
void dec2bin(l dec)
{
   int a[30];
   int i=0;
   while (dec>0)
   {
       a[i]=dec%2;
       dec/=2;
       i++;
   }
   for (int j = i-1; j >=0; j--)
   {
       cout<<a[j];
   }
   
   

 
    

}

int main()

{
    int decision;
    cout<<"\t **WELCOME TO MY PROGRAM FOR NUMBER SYSTEM CONVERSION** \n";
    cout<<"Which conversion you want to do ? select any one:-\n1.Binary to Decimal\n2.Decimal to binary\n3.Binary to Octal\n4.Octal to Bianary\n5.Binary to Hexadecimal\n6.Hexadecimal to Binary\n7.Decimal to octal\n8.Octal to decimal\n9.Decimal to Hexadecimal\n10.Hexadecimal to Decimal\n";
    cin>>decision;
    if (decision==1)
    {
        l bin;
        cout<<"enter binary value:";
        cin>>bin;
        
        cout<<"The  decimal of binary is :"<<bin2dec(bin)<<"\n";
    }
    else if (decision==2)
    {
        l dec;
        cin>>dec;
      dec2bin(dec);
      cout<<"\'n";
        
    }
    // else if (decision==3)
    // {
    //     l bin;
    //     cin>>bin;
        
    //     cout<<bin2oct(bin);
    // }
    // else if (decision==4)
    // {
    //     l oct;
    //     cin>>oct;
    //    cout<<oct2bin(oct);
    // }
    
    // else if (decision==5)
    // {
    //     l bin;
    //     cin>>bin;
    //     cout<<bin2hex(bin);
    // }
    
    // else if (decision==6)
    // {
    //     l hex;
    //     cin>>hex;
    //     cout<<hex2bin(hex);
        
    // }
    
    // else if (decision==7)
    // {
    //     l dec;
    //     cin>>dec;
    //     cout<<dec2oct(dec);
    // }
    
    // else if (decision==8)
    // {
    //     l oct;
    //     cin>>oct;
    //     cout<<oct2dec(oct);
        
    // }
    
    // else if (decision==9)
    // {
    //     l dec;
    //     cin>>dec;
    //     cout<<dec2hex(dec);
    // }
    
    // else if (decision==10)
    // {
    //     l hex;
    //     cin>>hex;
    //     cout<<hex2dec(hex);
        
    // }
    
    
    
    
    
    

    return 0;

}