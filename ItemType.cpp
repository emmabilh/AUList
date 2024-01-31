//
//  ItemType.cpp
//  AUList
//
//  Created by Emma Bilhimer on 1/29/24.
//

#include "ItemType.hpp"


ItemType::ItemType()
{
}

ItemType::~ItemType()
{
}

int ItemType::getValue()
{
    return value;
}

void ItemType::setValue(int value)
{
    this->value = value;
}

RelationType ItemType::compareTo(ItemType item)
{
    if(value < item.getValue())
        return LESS;
    else if(value > item.getValue())
        return GREATER;
    else
        return EQUAL;
}
/*// ItemType.cpp
 
 #include "ItemType.hpp"

 // Implementation of ItemType class

 // Constructor definition
 ItemType::ItemType(int val) : value(val) {}

 // Getter function definition
 int ItemType::getValue() const {
     return value;
 }
*/
