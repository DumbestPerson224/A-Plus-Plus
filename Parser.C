#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct instructions {
    const char* opcodes[100];
    const char* operands[100];
};
int opcode_index = 0, operand_index = 0;

struct instructions instructions;
void get_opcode(const char* opcode){
    if(opcode_index < 100){
       if(strcmp(opcode, "kadd") || strcmp(opcode, "ksub") == 0 || strcmp(opcode, "kmul") || strcmp(opcode, "kdiv")){
           instructions.opcodes[opcode_index++] = opcode;
       }
    }
}

void get_operand(const char* operand){
    if(operand_index < 100){
        if(strcmp(opcode, "eax") == 0){
            instructions.operands[operand_index++] = opcode;
        }
    }
}


int main(){
    get_opcode("PUSH");
}
