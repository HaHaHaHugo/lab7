#include<iostream>
#include<string>
using namespace std;

char before(char x){
    if(x>'@'&& x<'['){
       if(x=='A'){
          return 'Z';
       }
	return x-1;
	}
	return '0';
}
