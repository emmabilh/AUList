//
//  ItemType.hpp
//  AUList
//
//  Created by Emma Bilhimer on 1/29/24.
//

#ifndef ITEM_TYPE_H
#define ITEM_TYPE_H

// MAX_ITEMS is the maximum number of items in the list
const int MAX_ITEMS = 100;
enum RelationType {LESS, GREATER, EQUAL};

class ItemType
{
public:
    ItemType(int val);
    ~ItemType();

    int getValue() const;
    void setValue(int value);
    RelationType compareTo(ItemType item);

private:
    int value;
};

#endif // ITEM_TYPE_H

/*

 class ItemType {
 private:
     int value;

 public:
     // Constructor that takes an integer value
     ItemType(int val);

     // Getter function for value
     int getValue() const;
 };

 #endif // ITEMTYPE_HPP
*/
