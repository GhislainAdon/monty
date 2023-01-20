# Monty
## C - Stacks (LIFO) & Queues (FIFO)

### The Monty Language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### Monty Byte Code Files
Files containing Monty byte codes usually have the `.m` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument. Monty byte code files can contain blank lines (empty or made entirely of whitespace). Any additional text following an opcode and its required argument(s) is not taken into account.

### Instructions
|Opcode|Usage|Description|
|------|-----|-----------|
|add|`add`|Pop the topmost value off the stack & add it to its successor|
|div|`div`|Pop the topmost value off the stack & divide it into its successor|
|mod|`mod`|Pop the topmost value off the stack & mod it into its successor|
|mul|`mul`|Pop the topmost value off the stack & multiply it with its successor|
|nop|`nop`|Do nothing|
|pchar|`pchar`|Print the character corresponding to the topmost value|
|pall|`pall`|Print every value on the stack starting from the top|
|pint|`pint`|Print the value at the top of the stack|
|pop|`pop`|Remove the topmost value from the stack|
|pstr|`pstr`|Print a string starting from the top of the stack|
|push|`push N`|Push a value onto the stack|
|sub|`sub`|Pop the topmost value off the stack & subtract it from its successor|
|swap|`swap`|Swap the two topmost values|
|rotl|`rotl`|Rotate values toward the top of the stack|
|rotr|`rotr`|Rotate values toward the bottom of the stack|
|stack|`stack`|Operate as a "last-in, first-out" (LIFO) data structure (default)|
|queue|`queue`|Operate as a "first-in, first-out" (FIFO) data structure|
