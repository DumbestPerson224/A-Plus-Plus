#include <string.h>
#include <stdlib.h>
#include <stdio.h>
enum opcodes{
    ADD_OPERATION,
    SUBTRACT_OPERATION,
    MOVE_OPERATION,
    DIVIDE_OPERATION,
    MULTIPLY_OPERATION,
    XOR_OPERATION,
    OR_OPERAION,
    JUMP_OPERATION,
};

int saved_opcode, opcode_index = 0;
const char* opcodes[10] = {};

void convert_opcode(){
    switch(saved_opcode){
        case ADD_OPERATION:
           opcodes[opcode_index] = "add";
           printf("+: %s\n", opcodes[opcode_index]);
           opcode_index += 1;
           break;
        
        case SUBTRACT_OPERATION:
           opcodes[opcode_index] = "sub";
           printf("-: %s\n", opcodes[opcode_index]);
           opcode_index += 1;
           break;
           
        case MOVE_OPERATION:
           opcodes[opcode_index] = "mov";
           printf("MOVE: %s\n", opcodes[opcode_index]);
           opcode_index += 1;
           break;
           
        case DIVIDE_OPERATION:
           opcodes[opcode_index] = "div";
           printf("/: %s\n", opcodes[opcode_index]);
           opcode_index += 1;
           break;
           
        case MULTIPLY_OPERATION:
           opcodes[opcode_index] = "mul";
           printf("*: %s\n", opcodes[opcode_index]);
           opcode_index += 1;
           break;
        case XOR_OPERATION:
          opcodes[opcode_index] = "xor";
          opcode_index += 1;
          break;  
        case OR_OPERATION:
           opcodes[operand_index] = "or";
           opcode_index += 1;
           break;
        case JUMP_OPERATION:
           opcodes[operand_index] = "jmp"; 
           opcode_index += 1;
           break;
    }
}

void get_opcode(const char* opcode){
    if(strcmp(opcode, "+") == 0){
        saved_opcode = ADD_OPERATION;
    }else if(strcmp(opcode, "-") == 0){
        saved_opcode = SUBTRACT_OPERATION;
    }else if(strcmp(opcode, "move") == 0){
        saved_opcode = MOVE_OPERATION;
    }else if(strcmp(opcode, "/") == 0){
        saved_opcode = DIVIDE_OPERATION;
    }else if(strcmp(opcode, "*") == 0){
        saved_opcode = MULTIPLY_OPERATION;
    }else if(strcmp(opcode, "^") == 0){
         saved_opcode = XOR_OPERATION;
    }else if(strcmp(opcode, "||") == 0){
         saved_opcode = OR_OPERATION;
    }else if(strcmp(opcode, "JUMP") == 0){
         saved_opcode = JUMP_OPERATION;
    }
    convert_opcode();
}
