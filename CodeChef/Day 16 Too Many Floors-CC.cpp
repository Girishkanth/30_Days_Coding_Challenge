/*
Too Many Floors:

Problem
Chef and Chefina are residing in a hotel.
There are 1010 floors in the hotel and each floor consists of 1010 rooms.
Floor 11 consists of room numbers 11 to 1010.
Floor 22 consists of room numbers 1111 to 2020.
……
Floor ii consists of room numbers 10⋅(i−1)+110⋅(i−1)+1 to 10⋅i10⋅i.

You know that Chef's room number is XX while Chefina's Room number is YY.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X,YX,Y, the room numbers of Chef and Chefina respectively.

Output Format
For each test case, output the number of floors Chef needs to travel to reach Chefina's room.

Constraints
1≤T≤10001≤T≤1000
1≤X,Y≤1001≤X,Y≤100
X≠Y

Sample 1:
Input
4
1 100
42 50
53 30
81 80

Output
9
0
3
1
*/

//Solution:
#include <iostream>

using namespace std;



int main() 

{

    int t;

    cin>>t;

    while(t--)

    {

        int x,y,chef,fina;

        cin>>x>>y;

        if(x%10==0)

            chef=x/10;

        else if(x%10!=0)

            chef=(x/10)+1;

        if(y%10==0)

            fina=y/10;

        else if(y%10!=0)

            fina=(y/10)+1;

        cout<<max(chef,fina)-min(chef,fina)<<endl;

    }

	return 0;

}

