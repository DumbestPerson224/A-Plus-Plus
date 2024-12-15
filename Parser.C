#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct instructions {
    const char* opcodes[100];
    const char* operands[100];
};


struct instructions instructions;
void get_opcode(const char* opcode){
    for(int i = 0; i < sizeof(instructions.opcodes); i++){
        if(strcmp(opcode, "KMOV") == 0){
            instructions.opcodes[i] = opcode;
        }else if(strcmp(opcode, "KADD") == 0){
            instructions.opcodes[i] = opcode;
        }else if(strcmp(opcode, "KPUSH") == 0){
            instructions.opcodes[i] = opcode;
        }else if(strcmp(opcode, "KPOP") == 0){
            instructions.opcodes[i] = opcode;
        }else if(strcmp(opcode, "KXOR") == 0){
            instructions.opcodes[i] = opcode;
        }else{
            printf("%s %s", opcode, " is not a valid opcode");
        }
        break;
    }
}

void get_operand(const char* operand){
    for(int i = 0; i < sizeof(instructions.opcodes); i++){
        if(strcmp(operand, "EAX") == 0){
            instructions.opcodes[i] = operand;
        }
        break;
    }
}


int main(){
    get_opcode("PUSH");
}
