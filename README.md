# Chess

A desktop chess application developed in C++ with a graphical user interface built using the Qt framework.  
This project focuses on game logic validation, graphical feedback, and structured application design.

The application allows users to play chess while visually highlighting valid moves and explicitly marking invalid moves, providing clear feedback on gameplay rules.

---

## Overview

This project implements a simplified chess engine combined with a Qt-based graphical interface.  
It supports interactive gameplay and enforces move validation rules directly within the UI.

At its current stage, the application supports the following chess pieces:
- King
- Rook
- Bishop

Several historical chess matches are included as predefined game scenarios, allowing users to replay and analyze real games.

---

## Supported Game Scenarios

The application includes predefined matches such as:
- **Topalov vs Polgar (2008)**
- **Budnikov vs Novik (1991)**
- **Vladimirov vs Palatnik (1977)**

These scenarios load preset board configurations to demonstrate gameplay logic and move validation.

---

## Features

- Graphical chessboard built with Qt
- Interactive piece movement
- Real-time validation of legal moves
- Visual indication of invalid moves
- Preconfigured historical chess games
- Structured C++ codebase with clear separation between UI and game logic

---

## Technologies

- **C++** – core game logic and application structure
- **Qt Framework (6.x+)** – graphical user interface
- **Visual Studio 2022+** – development and build environment

---

## Requirements

Before building the project, ensure the following tools are installed:
- Qt Framework version 6 or later
- Visual Studio 2022 or newer with C++ development tools
- Qt integration configured for Visual Studio (MSVC)

---

## Build and Run

### Project Setup

1. Install the Qt Framework from the official Qt website.
2. During installation, select the appropriate compiler (e.g., MSVC for Windows).
3. Open Visual Studio and load the project directory.
4. If required, configure the Qt installation path inside Visual Studio.

### Build

- Select a build configuration (**Debug** or **Release**).
- Use **Build → Build All** to compile the project.
- Run the application directly from Visual Studio.

---

## Testing and Debugging

- Tests can be executed by running the application in **Debug** mode.
- Runtime output and debug information are displayed in Visual Studio’s **Output** window.
- Additional test results can be inspected through the **Test Explorer**.

Debugging tools allow step-by-step inspection of game logic and UI interactions.

---

## Author

**Adam Rafai**  
Software Engineering Student – Polytechnique Montréal  

GitHub: https://github.com/<your-username>
