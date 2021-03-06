//
//  Token.hpp
//  pseudo
//
//  Created by Javax on 09/08/2018.
//  Copyright © 2018 Javax Inc. All rights reserved.
//

#ifndef Token_hpp
#define Token_hpp

#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

enum TokenType {
	intLiteral,
	stringLiteral,
	boolLiteral,
	undefined,
	keyword,
	memoryReference,
	variableReference
};

class Token {
public:
	string stringValue;
	int intValue;
	bool boolValue;
	int memoryReference;
	string variableReference;
	
	TokenType type;
	
	Token (string sv = "", int iv = 0, bool bv = false, int mr = 0, string vr = "", TokenType t = TokenType::undefined);
};

#endif /* Token_hpp */
