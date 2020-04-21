#include <stdio.h>

/*
Problem 1

Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".

* An IP address is the unique number assigned to every computer/device on the internet.

* IP address consists of four sets of numbers from 0 to 255.
    E.g., 203.252.96.77,  11.43.201.100

* The user's input has to be a valid IPv4 address, which is ranging between 0.0.0.0 and 255.255.255.255.
   
 For example, the following IP addresses are NOT valid:  257.2.48.101,  33.555.10.3,  45.-1.0.5  

Example runs:
Enter an IP address: 1.1.1.1
Output: 1[.]1[.]1[.]1

Enter an IP address: 255.100.50.0
Output: 255[.]100[.]50[.]0

Enter an IP address: 11.43.201.100
Output: 11[.]43[.]201[.]100

Enter an IP address: 257.2.48.101
Output: Not valid

Enter an IP address: 45.-1.0.5
Output: Not valid
*/

int main(void){
	int n1, n2, n3, n4;
	
	printf("Enter an IP address: ");
	scanf("%d.%d.%d.%d", &n1, &n2, &n3, &n4);
	
	if (n1 < 0 || n1 > 255 || n2 < 0 || n2 > 255
	|| n3 < 0 || n3 > 255 || n4 < 0 || n4 > 255) {
	  printf("Output: Not valid");
	}
	else {
	  printf("Output: %d[.]%d[.]%d[.]%d", n1,n2,n3,n4);
	}
	
  return 0;
}