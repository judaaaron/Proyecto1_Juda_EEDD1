

#ifndef OBJECT_H
#define OBJECT_H
#include<string>

using namespace std;

class Object {
public:
virtual string toString()=0;
virtual bool equals(Object*)=0;
private:

};

#endif /* OBJECT_H */

