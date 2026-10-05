# Movie Math

The website runs independently in a browser. The backend folder contains the
equivalent C++ demonstration, organized by responsibility. GitHub Pages serves
the website; it does not execute the C++ files.

## Files and reading order

1. `backend/models.h`: records for theatre, screen, movie and show; time formatting.
2. `backend/demo_data.cpp`: official example inputs.
3. `backend/main.cpp`: loads inputs, calls the engine and prints results.
4. `backend/algorithms.cpp`: linear search, occupancy/revenue calculations and merge sort.
5. `backend/data_structures.h`: singly/doubly linked lists, FIFO queue, circular rotation, stack and BST.
6. `backend/scheduler.cpp`: validation, candidates, baseline, conflict checks, greedy scheduling and coordinator.
7. `backend/metrics.cpp`: totals and utilization calculations.

The matching `.h` files declare functions so other `.cpp` files can call them.
`scheduler.h` also defines result records. `#pragma once` prevents duplicate
header definitions. The data structures stay in one header so each structure
and its operations can be read together.

## Run in VS Code

Open the extracted folder. With a C++ compiler installed, run in its terminal:

```sh
g++ -std=c++17 -Wall -Wextra backend/*.cpp -o cinema
./cinema
```

On Windows, use `./cinema.exe` for the second command. Compile all `.cpp`
files together, not only `main.cpp`. No extra libraries or console inputs are
needed. Change `backend/demo_data.cpp` to try different inputs.

For an online compiler with multiple-file support, add all files from backend
to the same project and compile all five `.cpp` files together using C++17.
The website is the simplest presentation option on another device.

## Website and GitHub

Extract the ZIP and upload its contents, not the ZIP itself. Keep `index.html`
and `README.md` at repository root and retain the `backend` folder. Replace the
old backend files with this complete folder. The old root-level `main.cpp` and
PDF are not part of this version and can be removed to avoid confusion.
Retain your existing Pages settings. Opening `index.html` locally also works.

Select Revenue Growth Demo on the website. The official C++ example uses the
same inputs: baseline Rs 384915; greedy Rs 675113; increase 75.39%.
Both schedules contain 14 shows. The percentage is computed, not hardcoded.
Changing C++ input data does not automatically change the website's inputs.

## Honest presentation

Revenue and audience are predictions from assumed demand factors, not measured
sales. Occupancy is determined by the show's starting time. Movie show limits
apply across all screens. Greedy ranks revenue per minute but is not guaranteed
to find the global maximum or beat the baseline for every possible input.
The circular queue is a fixed circular rotation rather than a general-purpose
enqueue/dequeue queue. The BST is unbalanced, so its worst-case lookup is O(M).
