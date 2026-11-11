## Green Efficiency Analysis

###MEASUREMENT METHODOLOGY:\
All programs are compiled with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long.\
All programs are run on the same machine.\
instrumentation_lab.c was modified to add runtime measurement of each phase.
For this analysis, three different experiments were conducted.
- baseline_loop: Establishing a baseline after three runs.
- comparison_algorithms: Comparing 2 different implementations to solve an issue.
- instrumentation_lab: In a multi-phase algorithm, calculate the CPU usage time for each phase to identify which one use the most CPU time after three runs.

#OBSERVED PERFORMANCE DIFFERENCES
- baseline_loop: After three runs, an average of ~0.089803 seconds of CPU usage per 100,000,000 interations was observed.
- comparison_algorithms:
  - count_even_naive: Ignoring that this implementations provides an incorrect result. After three runs, an average of ~2.471431 seconds of CPU usage after 1,250,025,000 interations.
  - count_even_single_pass: After three runs, an average of ~0.000102 seconds of CPU usage after 50,000 interations.
- instrumentation_lab:\
  After three runs, the averages are:
  - TOTAL seconds: 0.000645 seconds.
  - BUILD_DATA seconds: 0.000315 seconds.
  - PROCESS seconds: 0.000199 seconds.
  - REDUCE seconds: 0.000085 seconds.
  - All three phases run through 50,000 iterations.

In comparison_algorithms experiment, count_even_naive implementation is inefficient compared to the count_even_single_pass implementation. It takes count_even_native implementations more CPU usage time having to run much more iterations than count_even_single_pass.\
count_even_single_pass run through much less interations with just 50,000 and consume less CPU usage time at ~0.000102 than count_even_naive.\

In instrumentation_lab experiment, BUILD_DATA phase consumes the most CPU usage time and REDUCE phase consumes the least CPU usage time.\

#RELATION BETWEEN RUNTIME AND ENERGY CONSUMPTION\
The relation between runtime and energy consumption is roughly linear. Complicated functions take more computing power to run which would require more CPU usage time. Loops that require more iterations take longer to run whichi would require more CPU usage time. And the longer the CPU run, the more energy it consumes. It is usually represented by the physics equation Energy = Power * Time. As more time is needed to solve a problem, more energy is needed for it to run.\

#LIMITATIONS OF THE EXPERIMENT\

