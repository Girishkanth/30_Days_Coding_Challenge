/*
Problem:
The apocalypse has arrived, and Alice and her 44 other family members (a total of 55 people) are now stuck in a shopping mall from where they have nowhere to run.
Fortunately, the place where they are stuck has frozen buns which they can eat and survive.
There are NN buns in the mall, and each member of the family needs to eat XX buns everyday to survive.
After the food supply runs out, the family can survive for a further DD days.
How many days can Alice and family survive under these conditions?
Note: If there aren't enough buns to feed the whole family, nobody will eat anything. The samples below showcase an example of this.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains three space-separated integers N,X,N,X, and DD
 — the total number of frozen buns, the number of buns every member 
needs everyday, and the number of days everyone can survive after food 
gets exhausted, respectively.

Output Format
For each test case, output on a new line the total number of days Alice and family can survive

Input
2
50 2 10
120 5 15

Output
15
19
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

        int nb,x,d,be;

        cin>>nb>>x>>d;

        be=x*5;

        d+=(nb/be);

        cout<<d<<endl;

    }

	return 0;

}

