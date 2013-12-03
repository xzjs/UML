#include "Object.h"


Object::Object(void)
{
}


Object::~Object(void)
{
}


string Object::Guid(void)
{
	 

	struct tm *ptr;
	time_t lt;
	lt =time(NULL);
	strstream ss;
	string s;
	ss << lt;
	ss >> s;
	return s;
}
