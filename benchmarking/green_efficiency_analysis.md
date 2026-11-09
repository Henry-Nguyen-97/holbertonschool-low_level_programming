## Green Efficiency Analysis

MEASUREMENT METHODOLOGY:\
For this analysis, three different experiments were conducted.\
- baseline_loop: Establishing a baseline after three runs, which resulted in an average of ~0.0898027 seconds of CPU usage per 100,000,000 interations.
- comparison_algorithms: Comparing 2 different implementations to solve an issue.
  - count_even_naive: Ignoring that this implementations provides an incorrect result. After three runs, an average of ~2.471431 seconds of CPU usage per 1,250,025,000 interations.
  - count_even_single_pass: After three runs, an average of ~0.0001023 seconds of CPU usage per 50,000 interations.
  - Native implementation is slower than Single-pass implementation by ~2.4713287 seconds
- instrumentation_lab: In a multi-phase algorithm, calculate the CPU usage time for each phase to identify which one use the most CPU time. After three runs, the averages are:
  - TOTAL seconds: 0.000645 seconds
  - BUILD_DATA seconds: 0.000315 seconds
  - PROCESS seconds: 0.000199 seconds
  - REDUCE seconds: 0.000085 seconds
