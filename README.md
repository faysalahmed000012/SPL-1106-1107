# How to Run the C Programs in This Repository

Welcome! This guide will help you run the C programs in this repository. Follow the steps below:

## Prerequisites

Before you begin, ensure you have the following:

1. A C compiler (such as GCC or MinGW) installed on your computer.
2. A code editor (e.g., Visual Studio Code, Codeblocks, Sublime Text, or any text editor).
3. Basic knowledge of using the terminal or command prompt.

## Steps to Run the Code

1. **Clone or Download the Repository**

   - Click the green "Code" button on the repository page.
   - Select **Download ZIP** and extract the files, or use the following command to clone the repository:
     ```bash
     git clone https://github.com/faysalahmed000012/SPL-1106-1107.git
     ```

2. **Open the Code File**

   - Navigate to the folder where the code files are located.
   - Open the desired `.c` file in your code editor.

3. **Compile the Code**

   - Open your terminal or command prompt.
   - Navigate to the folder where the `.c` file is located using the `cd` command. For example:
     ```bash
     cd SPL-1106-1107/[path_to_the_file_you_want_to_run]
     ```
   - Compile the C file using a C compiler. For example, if you are using GCC, run:
     ```bash
     gcc filename.c -o filename
     ```
     Replace `filename.c` with the name of your C file, and `filename` with the name of the output executable file.

4. **Run the Compiled Program**

   - After successful compilation, run the program:
     - On Windows:
       ```bash
       filename.exe
       ```
     - On Linux or MacOS:
       ```bash
       ./filename
       ```

5. **View the Output**
   - The program will execute, and you can see the output in your terminal or command prompt.

## Example

Here is an example of running a file named `hello.c`:

1. Compile the code:
   ```bash
   gcc hello.c -o hello
   ```
2. Run the program:
   ```bash
   ./hello   # For Linux/MacOS
   hello.exe # For Windows
   ```

That's it! 🎉 You have successfully run a C program. Feel free to explore and experiment with the code in this repository.

---

### Troubleshooting

- **Compiler not found**: Make sure GCC or your chosen compiler is installed and added to your system's PATH.
- **Compilation errors**: Double-check your code for typos or syntax issues.

Happy coding! 😊
