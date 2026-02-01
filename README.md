# Chess

A desktop chess application built in **C++** with a **Qt**-based graphical interface. The project implements core chess rules, move validation, check/checkmate detection, and a clear separation between game logic and UI.

---

## Overview

This application provides an interactive chess experience with:

- **Graphical chessboard** — Click-to-move interface with visual feedback for valid and invalid moves
- **Enforced rules** — Legal move validation, turn order, and check/checkmate/stalemate handling
- **Modular design** — Model–view separation, polymorphic pieces, and Qt signals/slots for UI–logic communication

Players can move pieces by clicking a square (select) then clicking a destination. Valid destinations are highlighted; invalid moves are rejected with explicit feedback.

---

## Features

| Feature                           | Description                                                                                   |
| --------------------------------- | --------------------------------------------------------------------------------------------- |
| **Piece types**                   | King, Rook, Knight — each with correct movement and validation                                |
| **Move validation**               | Legal moves only; moves that leave own king in check are forbidden                            |
| **Check / checkmate / stalemate** | Detection and game state updates (echec, mat, pat)                                            |
| **Turn management**               | Alternating white/black turns with visual indication                                          |
| **Visual feedback**               | Highlighting of valid moves and clear indication of invalid attempts                          |
| **Predefined setups**             | Support for loading different board configurations (e.g. default, historical-style scenarios) |

---

## Architecture

The codebase is organized into **model** and **interface** layers.

### Model (`modele`)

- **`Table`** — 8×8 board state: piece storage (`std::unique_ptr<Piece>`), king positions, check/mat/pat flags, turn (white/black).
- **`Piece`** — Base class (inherits `Deplacement`) for all pieces: coordinates, color, and methods such as `trouverDeplacementsPossibles`, `trouverDeplacementsValides`, `peutBouger`, `bouger`.
- **`Roi`** — King: one-square moves, check detection (`estEnEchec`), global king count (max 2).
- **`Tour`** — Rook: horizontal/vertical movement with path blocking.
- **`Cavalier`** — Knight: L-shaped moves, ignoring pieces in between.
- **`Jeux`** — Game controller: handles square clicks, applies moves via the model, enforces turns, and emits Qt signals for the UI (e.g. valid move, update piece, check/mat/pat).
- **`Carre`** — Represents a board square in the model; used for mapping clicks to coordinates.

Custom exceptions: `DeplacementInvalidException` (illegal move), `PlusDe2Roi` (invalid king count).

### Interface (`interface`)

- **`Afficher`** — Main Qt window: builds the board from `Carre` items, loads piece images, connects to `Jeux` signals/slots, and updates the display (piece positions, turn, messages).

### Data flow

1. User clicks a square → `Carre::mousePressEvent` emits `caseCliquee` / `caseDecliquee`.
2. `Afficher` forwards to `Jeux::recevoirCarreClique` / `recevoirCarreDeclique`.
3. `Jeux` updates selection or executes move via `Table` and `Piece::bouger`, runs `verificationEchec` / `verificationMat`.
4. `Jeux` emits signals (e.g. `sendReponse`, `casesValides`, `updateImage`, `mat`/`pat`).
5. `Afficher` reacts in slots to refresh the board and show feedback.

---

## Technologies

| Technology              | Use                                                                 |
| ----------------------- | ------------------------------------------------------------------- |
| **C++**                 | Game logic, model, piece hierarchy, STL containers                  |
| **Qt 6**                | GUI (QMainWindow, QGraphicsScene, QGraphicsRectItem, signals/slots) |
| **Google Test**         | Unit tests for move execution and board state                       |
| **Visual Studio 2022+** | Build environment (MSVC, Qt integration)                            |

---

## Project structure (main files)

```
Chess/
├── main.cpp              # Entry point, Qt app, test runner
├── Afficher.cpp/h        # Main window and board display
├── Caree.cpp/h          # Board square (click handling, pixmap)
├── Jeux.cpp/h           # Game flow and move handling
├── Table.cpp/h          # Board state and piece storage
├── Piece.cpp/h          # Base piece and move validation
├── Deplacement.h        # Abstract base for movement logic
├── Test.cpp             # Google Test movement tests
├── images/              # Piece sprites (e.g. Roi, Tour, Cavalier)
└── bibliotheque_cours/  # Course utilities (e.g. test execution, allocation checks)
```

---

## Requirements

- **Qt** 6 or later
- **Visual Studio** 2022 or newer with C++ workload
- **Qt VS integration** (e.g. Qt Visual Studio Tools) so the project finds Qt and MOC/rcc/uic

---

## Build and run

1. Install Qt 6 and Visual Studio 2022+ with Qt integration.
2. Open the solution (e.g. `Chess.sln`) in Visual Studio.
3. Select configuration (**Debug** or **Release**) and build (e.g. **Build → Build Solution**).
4. Run the executable; tests run via the course library’s Google Test integration when enabled.

### Running tests

With the course library and `TEST` defined, movement tests in `Test.cpp` (e.g. king, rook, knight moves and board state) are executed through the project’s test harness (see `main.cpp` and `initialiserBibliothequeCours`).

---

## Design highlights

- **Polymorphism** — `Deplacement` → `Piece` → `Roi` / `Tour` / `Cavalier` for piece-specific move generation.
- **Ownership** — Pieces stored as `std::unique_ptr<Piece>` in `Table`.
- **Decoupled UI** — Model (Table, Jeux, Piece) has no Qt GUI dependencies; only `Table` and `Carre` use Qt for signals.
- **Extensibility** — New piece types can be added by subclassing `Piece` and implementing `trouverDeplacementsPossibles` (and `trouverDeplacementsValides` where needed).

---

## Author

**Adam Rafai**  
Software Engineering Student — Polytechnique Montréal

GitHub: [your-username](https://github.com/your-username)

---

## License

This project was developed for academic purposes at Polytechnique Montréal.
