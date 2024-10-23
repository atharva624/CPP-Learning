Casting and Runtime Type Information in C++
Problem Definition
You need to implement a Shape hierarchy to demonstrate various C++ casting operators (const_cast, static_cast, reinterpret_cast, and dynamic_cast) and use runtime type information (typeid). The goal is to show how upcasting, downcasting, and casting operators work with classes that use inheritance.

Solution
The Shape class has two derived classes: Circle and Square. We perform various casts to showcase their behavior:

Upcasting: Converts derived objects to their base class pointer (Shape*).
Downcasting: Converts base class pointers back to derived objects using dynamic_cast.
Const cast: Removes the const qualifier from a constant object.
Static cast: Performs a straightforward cast between related types.
Reinterpret cast: Allows reinterpretation of memory (low-level casting).
RTTI: Uses typeid to get runtime information about the actual object type.