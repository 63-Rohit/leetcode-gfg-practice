// Que 1)Add digit
// ex 24=2+4=6ans
// ex 635=6+3+5=14=1+4=5ans
// #include<iostream>
// using namespace std;
// int addDigit(int n)
// {
//     while(n>9)
//     {
//         int ans=0;
//         while(n>0)
//         {
//             int rem;
//             rem=n%10;
//             n=n/10;
//             ans=ans+rem;
//         }
//         n=ans;
//     }
// }
// int main()
// {
//   int n;
//   cout<<"Enter n: ";
//   cin>>n;

//   cout<<"Addition of digit is: ";
//   cout<<addDigit(n);
// }



// que 2 Check Leap Year
// ex 1600=> Leap year  1900=>not a leap year   2100=>Not a leap year   1700=>Not a leap year   2000=>Leap Year   2096=>Leap Year


// #include<iostream>
// using namespace std;
// void checkLeap(int n)
// {
//     if(n%400==0)
//     {
//         cout<<"It is a leap year";
//     }

// else if(n%4==0&&n%100!=0)
// {
//     cout<<"It is Leap Year";
// }
// else{
//     cout<<"Not a Leap Year";
// }
// }

// int main()
// {
//     int year;
//     cout<<"Enter the year: ";
//     cin>>year;

//     // Calling function
//     checkLeap(year);

// }


// que3 Reverse a integer
// example 234=432     
// exmaple 476=674


// #include<iostream>
// using namespace std;
// int reverse(int n)
// {
//     int ans=0;
//     while(n>0)
//     {
//         int rem=n%10;
//         n=n/10;
//         ans=ans*10+rem;
//     }
//     return ans;
// }
// int main()
// {
//   int n;
//   cout<<"enter the number you want to reverse: ";
//   cin>>n;
// //   Calling function 
// cout<<reverse(n);

// return 0;
// }



// que4) check a number is palindrome or not

#include<iostream>
using namespace std;
bool checkPalindrome(int n)
{
    int ans=0;
    int original_ans=n;
    while(n>0)
    {
        int rem=n%10;
        n=n/10;
        ans=ans*10+rem;
    }

    if(original_ans==ans)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{

    int n;
    cout<<"Enter the number: ";
    cin>>n;

      bool result = checkPalindrome(n);

    if (result)
    {
        cout << "Palindrome number";
    }
    else{
        cout << "Not a palindrome number";
    }
    return 0;
}