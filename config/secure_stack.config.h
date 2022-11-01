/*! 
 * @file
 * @brief This is config file for secure_stack.c
 */

#include <inttypes.h>

#define ON  1
#define OFF 0

/*!
 * Checking the stack for integrity in each operation on it.
 */
#define VALIDATION ON

 /*!
  * Protective barriers at the edges of the structure and data of the stack.
  */
#define CANARIES   ON

/*! 
* A unique value for each state of the stack, which is recalculated,
* when the stack changes.
*/
#define HASH       ON 

#define POISON     ((uint8_t)  145                  )
#define POISON_PTR ((void*)    300                  )
#define CANARY     ((uint64_t) 0x47C0DAB1EC0DEBEFULL)
