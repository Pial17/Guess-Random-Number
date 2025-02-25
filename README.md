# Guess Random Number 🎲

A fun and challenging C++ game where the player tries to guess a randomly generated number between **1 and 100**. Perfect for practicing loops, conditionals, randomization, and input validation in C++.

---

## 🎮 Game Rules
1. The game generates a random number between **1 and 100**.
2. You have **10 attempts** to guess the number.
3. After each guess, you receive a hint:
   - `Super High Number`: Your guess is more than 20 above the target.
   - `Super Low Number`: Your guess is more than 20 below the target.
   - `Very High Number`: Your guess is 10-20 above the target.
   - `Very Low Number`: Your guess is 10-20 below the target.
   - `High Number`: Your guess is slightly above the target.
   - `Low Number`: Your guess is slightly below the target.
4. **Scoring** is based on the number of attempts:
   - **10 out of 10**: Guessed on the first try.
   - **1 out of 10**: Guessed on the last try.
   - **0 out of 10**: Failed to guess within the limit.
5. Special Messages:
   - **"You are Awesome!!"**: Guessed in less than 3 attempts.
   - **"You played well"**: Guessed within 4-5 attempts.
   - **"You have to do well"**: Guessed within 6-7 attempts.
   - **"You are a loser"**: Guessed in 8 or more attempts.
6. If you exceed the limit without guessing correctly, you lose and can restart by pressing **'o'**.
7. You can restart the game at any point by pressing **'y'** or quit by pressing any other key.

---

## 🚀 Features
- **Random Number Generation**: Uses `rand()` and `srand()` for unpredictable gameplay.
- **Input Validation**: Ensures the user enters a number within the range or allows quitting.
- **Hint System**: Provides useful hints to guide the player.
- **Scoring and Feedback**: Encouraging messages based on performance.
- **Replay Option**: Option to restart the game or exit gracefully.

---

## 🔧 Installation
Follow these steps to set up and run the game on your local machine:

### Prerequisites:
- A C++ compiler (like `g++` from MinGW for Windows or `g++` on Linux/Mac).
- Basic knowledge of using the command line.

### 1. Clone the Repository:
```sh
git clone https://github.com/Pial17/Guess-Random-Number.git
cd Guess-Random-Number
![Screenshot (226)](https://github.com/user-attachments/assets/e57a73b4-6a44-4559-8691-fe93e5938605)
