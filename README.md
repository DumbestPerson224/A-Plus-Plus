# A++ Compiler

A++ is a high-level version of assembly designed to balance readability, portability, and efficient execution. By abstracting away architecture-specific details, A++ allows for easy adaptation to various hardware platforms while maintaining the power and control of low-level programming.

## Features

- **High-level abstraction**: Simplifies programming by introducing enumerators.
- **Portability**: This will eventually compile for multiple architectures.
- **Control and efficiency**: Balances high-level commands with low-level performance.
- **Readable syntax**: Intuitive and user-friendly language design.

## Getting Started

### Prerequisites

- GCC or any compatible C compiler

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/DumbestPerson224/A-Plus-Plus
    cd A-Plus-Plus
    ```

2. Compile the project:
    ```sh
    gcc -o aplusplus codegen.C
    ```

### Usage

1. Create a source file with A++ code.
2. Compile the source file using the A++ compiler:
    ```sh
    ./aplusplus source_file.aplus
    ```
