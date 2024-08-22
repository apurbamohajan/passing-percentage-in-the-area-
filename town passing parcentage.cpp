#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;

	cin>> T;

	for (int i=0;i<T;i++)
	{
	    int X ,Y ,Z;

	    cin >>X>>Y>>Z;

	    int total_examers = X*Y;
	    double percentage = (Z * 100.00) / total_examers;

	    if(percentage <= 50.00)

	    {
	        cout<<"NO"<<endl;
	    }


	    else {
	      cout<<"YES"<<endl;
	    }

	}

	return 0;

}

