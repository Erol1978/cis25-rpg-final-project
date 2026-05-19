# Initial Feature Test Cases

## Feature: Display Player Status

### Test 1: Normal Operation
- What it tests: Player status display with name, health, attack, and inventory count
- Expected result: Output includes player name, health, and inventory count
- Result: Pass

### Test 2: Edge Case
- What it tests: Player with empty inventory
- Expected result: Inventory size is 0
- Result: Pass

### Test 3: Boundary Condition
- What it tests: Map first and last valid positions, plus invalid outside positions
- Expected result: Inside positions return true, outside positions return false
- Result: Pass

### CTest Output
All tests passed.
