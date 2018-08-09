//
//  Variable.hpp
//  pseudo
//
//  Created by Javax on 09/08/2018.
//  Copyright © 2018 Javax Inc. All rights reserved.
//

#ifndef Variable_hpp
#define Variable_hpp

#include <string>

using namespace std;

enum Primitive {
	pint,
	pstring,
	pbool,
};

class Variable {
public:
	string name;
	
	string stringValue;
	int intValue;
	bool boolValue;
	
	Primitive type;
	
	Variable (string n, Primitive t, string sv = "", int iv = 0, bool bv = false);
};

#endif /* Variable_hpp */
