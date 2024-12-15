#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct instructions {
   const char* opcodes [100];
   const char* operands [100];
};
struct instructions instructions;
int opcode_index = 0, operand_index = 0;

void get_opcode(const char* opcode){
   if(opcode_index < 100){
     if(strcmp(opcode, "kadd") == 0 || strcmp(opcode, "ksub") == 0 || strcmp(opcode, "kmul") == 0 || strcmp(opcode, "kdiv") == 0 || strcmp(opcode, "kjmp") == 0){
      instructions.opcodes[opcode_index++] = opcode;      
     }else{
          printf("Invalid opcode!\n");
     }
   }
}

void get_operands(const char* operand){
     if(opcode_index < 100){
          if(strcmp(operand, "ah") == 0 || strcmp(operand, "al")){
               instructions.operands[operand_index++] = operand;
          }
     }
}
