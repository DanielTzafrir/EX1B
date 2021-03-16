#include <string>
#include "snowman.hpp"
#include <stdexcept>

namespace ariel{

enum bodyParts{
	HAT,
	NOSE,
	LEFTEYE,
	RIGHTEYE,
	LEFTARM,
	RIGHTARM,
	TORSO,
	BASE
};

 std::string snowman(int x){
 
 	if(x < 10000000 || x > 44444444 )
 		throw std::out_of_range("invalid code");
 		
 	std::string ans ="";
 	
 	int arr[8];
 	int i = 7;
 
    	while(x > 0){
        	int temp = x%10;
        	
        	if(temp > 4)
        		throw std::out_of_range("invalid code");
        		
        	arr[i--] = temp;
        	x /= 10; 
   	}
 	
 	switch (arr[HAT]){
 		case 1: ans += " _===_\n";
 			break;
		case 2: ans += "  ___\n .....\n";
 			break;
 		case 3: ans += "   _\n  /_\\\n";
 			break;
 		case 4: ans += "  ___\n  (_*_)\n";
 			break;		
 	}
 		
 	if(arr[LEFTARM] == 2)
 		ans += "\\"; 		//left arm
 	
 	else ans += " ";
	
	switch (arr[LEFTEYE]){
 		case 1: ans += "(.";
 			break;
 		case 2: ans += "(o";
 			break;
 		case 3: ans += "(O";
 			break;
 		case 4: ans += "(-";
 			break;		
 	}
 	
 	switch (arr[NOSE]){
 		case 1: ans += ",";
 			break;
 		case 2: ans += ".";
 			break;
 		case 3: ans += "_";
 			break;
 		case 4: ans += " ";
 			break;		
 	}
 	
 	switch (arr[RIGHTEYE]){
 		case 1: ans += ".)";
 			break;
 		case 2: ans += "o)";
 			break;
 		case 3: ans += "O)";
 			break;
 		case 4: ans += "-)";
 			break;		
 	}
 	
 	if(arr[RIGHTARM] == 2) 
 		ans += "/";		//right arm
 	
 	ans += "\n";
 	
 	switch (arr[LEFTARM]){
 		case 1: ans += "<";
 			break;
 		case 2: ans += " ";
 			break;
 		case 3: ans += "/";
 			break;
 		case 4: ans += " ";
 			break;		
 	}
 	
 	switch (arr[TORSO]){
 		case 1: ans += "( : )";
 			break;
 		case 2: ans += "(] [)";
 			break;
 		case 3: ans += "(> <)";
 			break;
 		case 4: ans += "(   )";
 			break;		
 	}
 	
 	switch (arr[RIGHTARM]){
 		case 1: ans += ">\n";
 			break;
 		case 2: ans += " \n";
 			break;
 		case 3: ans += "\\\n";
 			break;
 		case 4: ans += " \n";
 			break;		
 	}
 	
 	switch (arr[BASE]){
 		case 1: ans += " ( : )\n";
 			break;
 		case 2: ans += " (\" \")\n";
 			break;
 		case 3: ans += " (___)\n";
 			break;
 		case 4: ans += " (   )\n";
 			break;		
 	}
 	return ans;
	}			
 };
