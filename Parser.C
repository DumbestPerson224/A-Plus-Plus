#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct instructions {
   const char* opcodes = new char [1000];
   const char* operand = new char [1000];
};
struct instructions* instructions;
int opcode_index = 0, operand_index = 0;

void get_opcode(const char *opcode){
   if(opcode_index < 100){
     if(strcmp(*opcode, "kadd") == 0 || strcmp(*opcode, "ksub") == 0 || strcmp(*opcode, "kmul") == 0 || strcmp(*opcode, "kdiv") == 0 || strcmp(*opcode, "kjmp") == 0){
      instructions.opcodes[opcode_index++] = *opcode;      
     }else{
          printf("Invalid opcode!\n");
     }
   }
}

void get_operands(const char* operand){
     if(opcode_index < 100){
          if(strcmp(*operand, "ah") == 0 || strcmp(*operand, "al") == 0 || strcmp(*operand, "dh") == 0 || strcmp(*operand, "ch") == 0 || strcmp(*operand, "cl") == 0){
               instructions->operands[operand_index++] = *operand;
          }
     }
}
x