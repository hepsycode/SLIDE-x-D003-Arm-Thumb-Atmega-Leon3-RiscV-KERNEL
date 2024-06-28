# SLIDE-x-D003-Arm-Thumb-Atmega-Leon3-RiscV-KERNEL
This repository contains the results of executing the SLIDE-x framework with the ISS tools for the Arm, Thumb, Atmega328/P, Leon3 and RiscV and the Kernel benchmark.

The folder contains SLIDE-x-RES results (i.e., code profiling, code characteristics, SW size, and timing metrics) extracted using the SLIDE-x framework available at the following link: https://github.com/hepsycode/SLIDE-x.

1. **SLIDE-x-RES**: Result datasets generated during the Profiling/Simulation activities;
    - KERNEL_DECIMAL: Kernel benchmark results with datatypes Float and Double for the following functions: astar, banker_algorithm, bellman_ford, bfs, floyd_warshall, gcd, kruskal, mergesort, selection_sort;
    - KERNEL_INT: Kernel benchmark results with datatypes int8. int16, int32, int64 for the following functions: astar, banker_algorithm, bellman_ford, bfs, binary_search, floyd_warshall, gcd, kruskal, mergesort, selection_sort;
