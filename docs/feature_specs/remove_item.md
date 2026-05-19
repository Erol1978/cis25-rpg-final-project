# Remove Item From Inventory — Spec

## Problem statement
The player can remove an item from their inventory by item name.
The inventory updates immediately after the item is removed.

## Types involved
- Player
- Inventory
- Item

## Public interface
- bool Inventory::removeItem(const std::string& itemName);
- bool Player::removeItem(const std::string& itemName);

## Inputs and outputs
Input:
- Item name entered by the user

Output:
- "Item removed successfully"
- or "Item not found"

## Edge cases
- Removing from an empty inventory
- Removing an item that does not exist
- Multiple items with the same name
- Empty item name

## Three tests (English version)
- Normal: remove an existing item from inventory
- Edge: attempt to remove item from empty inventory
- Boundary: remove the first item in inventory

## Design decisions
I chose a simple linear search using std::vector because the project already uses vectors and simple loops.
The feature updates both Inventory and Player classes without adding unnecessary complexity.
