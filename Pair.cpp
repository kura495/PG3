#include "Pair.h"

template<typename Type1, typename Type2, typename Type3>
Type3 Pair<Type1, Type2, Type3>::Min()
{
	return a < b ? static_cast<Type3>(a) : static_cast<Type3>(b);
}

