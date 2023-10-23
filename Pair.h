﻿#pragma once
template <class Type1, class Type2, class Type3 = Type1>
class Pair
{
public:
	Pair(Type1 a,Type2 b) : a(a),b(b){}

	Type3 Min();


private:
	Type1 a;
	Type2 b;
};


