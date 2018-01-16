/**
 * @file
 * @author The CS2 TA Team
 * @version 1.0
 * @date 2013-2014
 * @copyright This code is in the public domain.
 *
 * @brief The gift wrapping and Graham scan convex hull algorithms
 * (implementation).
 *
 */
#include "HullAlgorithms.hpp"

/**
 * TO STUDENTS: In all of the following functions, feel free to change the
 * function arguments and/or write helper functions as you see fit. Remember to
 * add the function header to HullAlgorithms.hpp if you write a helper function!
 *
 * Our reference implementation has four helper functions and the function(s)
 * copied over from angleSort.cpp.
 */

/**
 * TODO: Implement this function.
 */
void DoGiftWrap(vector<Tuple*> points, ConvexHullApp *app)
{
    for (unsigned int i = 0; i < points.size(); ++i)
    {
        app->add_to_hull(points[i]);
    }
    app->add_to_hull(points[0]);
}
Tuple* Return_left(vector<double> points)
{
	Tuple* leftvalue = points[0];
	for(int i = 0; i < points.size() - 1; i++)
	{
		if (points[i]->x < leftvalue->x)
		{
			leftvalue = points[i]
			
		}
	}
	return leftvalue;
}
Tuple* get_next_point(vector<Tuple*> points, Tuple* current)
{
	int current = 1;t
	for (int i = 0; i < points.size() - 1; i++)
	{
		for (int j = 0; j < points.size() -1; j++)
		{
			if(points[j] != points[i] and points[j] != current)
			{
				if (is_left(current, points[i], points[j]) == False)
				{
					current = 0;
				}
			}
		}
		if (current == 1)
		{
			return points[i];
		}
		current = 1;
		
	}
	
}
bool is_left(Tuple* current, Tuple* linepoint, Tuple* testpoint)
{
	if(((linepoint->x - current->x) * (testpoint->y - current->y))-
	((linepoint->y - current->y) * (testpoint->x - linepoint->x)) > 0)
	{
		return True;
	}
	return False;
}
	
	

 /**
 * TODO: Implement this function.
 */
void DoGrahamScan(vector<Tuple*> points, ConvexHullApp *app)
{
    for (unsigned int i = 0; i < points.size(); ++i)
    {
        app->add_to_hull(points[i]);
    }
    app->add_to_hull(points[0]);
}
