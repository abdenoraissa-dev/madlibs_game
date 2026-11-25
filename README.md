# Mad Libs Game in C

## 📖 Intro
A simple, interactive console-based **Mad Libs** word game written in **C**. The program prompts the user to enter four different types of words—an animal, an adjective, an object, and a verb—and weaves them into a short, humorous story printed directly in the terminal.

---

## 🛠️ Technologies Used
* **C (C11/C99):** Core programming language used to build the application logic.
* **GCC (MinGW-w64):** Compiler used to build the executable from the source code.
* **Standard I/O Library (`stdio.h`):** Used for console input (`scanf`) and formatted output (`printf`).
* **Visual Studio Code:** Code editor used for writing, compiling, and testing the program.
* **Git & GitHub:** Version control and project hosting.

---

## ✨ Features
* **Interactive Prompts:** Guides the user step-by-step to input specific word categories (animal, adjective, object, verb).
* **Dynamic Story Generation:** Combines user inputs into a structured, readable sentence template.
* **Lightweight Execution:** Runs fast directly in any terminal or command prompt with zero external dependencies.

---

## ⌨️ Keyboard Shortcuts (Controls)
Since this is a standard command-line application, interaction relies on simple keyboard controls:
* **Type Word + `Enter`:** Submit each requested word (`animal`, `adjective`, `object`, `verb`).
* **`Backspace`:** Edit or delete characters before pressing `Enter`.
* **`Ctrl + C`:** Force exit the program at any point during execution.

---

## ⚙️ The Process
1. **Variable Declaration:** Defined four fixed-size character arrays (`char[30]`) to store the user's words in memory.
2. **Input Handling:** Used `printf` to display clear prompts and `scanf` to capture each word from standard input.
3. **Output Formatting:** Structured the final story using format specifiers (`%s`) inside `printf` to inject the stored strings into the narrative.
4. **Testing & Compilation:** Compiled the source file using `gcc` and tested different word combinations in the console to verify output alignment and spacing.

---

## 🧠 What I Learned
* How strings are represented in C using character arrays (`char[]`).
* Reading user input from the console with `scanf` and understanding how whitespace affects single-word input.
* Formatting output cleanly using `printf` and `%s` specifiers.
* Compiling C source code into an executable binary using GCC and organizing a project for GitHub.

---

## 🚀 How It Could Be Improved
* **Multi-word Input Support:** Replace `scanf("%s", ...)` with `fgets()` so users can enter phrases containing spaces (e.g., *"golden retriever"* instead of just *"dog"*).
* **Buffer Overflow Protection:** Limit input width (e.g., `scanf("%29s", animal)`) to ensure user input never exceeds the 30-character array limit.
* **Multiple Story Templates:** Add a menu or random selection (`rand()`) so players can play different stories in one session.
* **Replay Loop:** Wrap the game in a `while` or `do-while` loop allowing the user to play again without restarting the executable.

---

## ▶️ How to Run It

### Prerequisites
* A C compiler such as **GCC** installed on your system.

### Steps
1. **Clone the repository** (or download `mad_libs_game.c`):
   ```bash
   git clone https://github.com/abdenoraissa-dev/mad-libs-game-c.git
   cd mad-libs-game-c
   ```
2. **Compile the code:**
   ```bash
   gcc mad_libs_game.c -o mad_libs_game
   ```
3. **Run the program:**
   * **Linux / macOS:**
     ```bash
     ./mad_libs_game
     ```
   * **Windows (Command Prompt / PowerShell):**
     ```bash
     mad_libs_game.exe
     ```

---

## 💻 Output Example
```text
add animal : cat
add adjective : lazy
add object : laptop
add verb : sleeping

My pet cat is very lazy. Yesterday, it ate my laptop and started sleeping!
```
