//
//  AUList.cpp
//  AUList
//
//My test driver is not finished but I did as much as I got along.

#include "AUList.hpp"


AUList::AUList()
{
    length = 0;
    loc = -1;
}

AUList::~AUList()
{
}

void AUList::MakeEmpty()
{
    length = 0;
}

bool AUList::IsFull() const
{
    if(length == MAX_ITEMS)
        return true;
    else
        return false;
}

ItemType AUList::GetItem(ItemType item, bool& found)
{
    found = false;
    
    int index = findItem(item);

    if (index != -1)
    {
        found = true;
        return Items[index];
    }
    else
        return item;
}

void AUList::PutItem(ItemType item)
{
    Items[length] = item;
    length++;
}

void AUList::DeleteItem(ItemType item)
{
    int index = findItem(item);
    if(index != -1)
    {
        while(index < length - 1)
        {
            Items[index] = Items[index + 1];
            index++;
        }
        length--;
    }
}

void AUList::ResetList()
{
    loc = -1;
}

ItemType AUList::GetNextItem()
{
    loc++;
    return Items[loc];
}



int AUList::findItem(ItemType item)
{
    int i = 0;
    while (length > i)
    {
        if (Items[i].getValue() == item.getValue())
        {
            return i;
        }
        else
            i++;
    }
    return -1;
}

//test driver - Emma Bilhimer

//CANCELEDuse std::cout << " " << (?() ? "No" : "Yes") << std::endl; for user output

int main() {
    // create AUList class
    AUList myList;

    // 1. test the MakeEmpty function
    myList.MakeEmpty();
    
   

    // 2. test the PutItem function
    ItemType item1(10);  // Assuming ItemType has a constructor that takes an integer value
    myList.PutItem(item1);
   

    // 3. test the GetItem function
    bool found = false;
    ItemType getItem = myList.GetItem(item1, found);

    // 4. test the DeleteItem function
    myList.DeleteItem(item1);

    // 5. test the ResetList and GetNextItem functions
    ItemType item2(20);
    myList.PutItem(item1);
    myList.PutItem(item2);
    
    myList.ResetList();
    while (!myList.IsFull()) {
        ItemType currentItem = myList.GetNextItem();
    }

    return 0;
}




