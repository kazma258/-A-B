#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 

int main(void){
	char ans[4] = {'1','2','3','4'}; //�b����J�ѵ� 
	char input[4];
	int conA=0 , conB=0;
	while(conA != 4){  //�YA�ƶq��=4�A�h�~����� 
		conA=0 , conB=0;
	    cin >>  input;
	    for(int checkA=0;checkA<4;checkA++){ //�P�_A�ƶq 
	    	if(input[checkA]==ans[checkA]){
	    		conA++;
	    		input[checkA]='#'; //�NA�ȭק��קKB�ƶq�A�P�_�@�� 
	    	}
	    }
	    
	    for(int a=0;a<4;a++){ //�P�_B�ƶq 
	    	for(int b=0;b<4;b++){
	    		if (input[a] == ans[b]){
	    			if(a!=b){
	    				conB++;
					}
				break;
				}
			}
		}
	cout << conA << "A" << conB << "B" <<endl;
	}
	
    return 0;
}
