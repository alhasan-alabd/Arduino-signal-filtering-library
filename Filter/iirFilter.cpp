// Arduino Signal Filtering Library
// Copyright 2012-2015 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>
#include <iirFilter.h>

/// Constructor
iirFilter::iirFilter()
{
 v[0]=0.0;
			v[1]=0.0;
}

/// Begin function: set default filter options
void iirFilter::begin()
{
}

int iirFilter::run(int data)
{
// not an iirFilter implementation (just a placeholder)
  v[0] = v[1];
			v[1] = v[2];
			v[2] = (9.446918438402e-4 * x)
				 + ( -0.9149758348 * v[0])
				 + (  1.9111970674 * v[1]);
			return 
				 (v[0] + v[2])
				+2 * v[1];                           // round and downshift fixed point /2097152
return 
				 (v[0] + v[2])
				+2 * v[1];
}
