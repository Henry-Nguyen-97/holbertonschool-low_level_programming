## Green Efficiency Analysis

MEASUREMENT METHODOLOGY:\
For this analysis, three different experiments were conducted.
- baseline_loop: Establishing a baseline after three runs.
- comparison_algorithms: Comparing 2 different implementations to solve an issue.
- instrumentation_lab: In a multi-phase algorithm, calculate the CPU usage time for each phase to identify which one use the most CPU time after three runs.

OBSERVED PERFORMANCE DIFFERENCES
- baseline_loop: After three runs, an average of ~0.089803 seconds of CPU usage per 100,000,000 interations was observed.
- comparison_algorithms:
  - count_even_naive: Ignoring that this implementations provides an incorrect result. After three runs, an average of ~2.471431 seconds of CPU usage after 1,250,025,000 interations.
  - count_even_single_pass: After three runs, an average of ~0.000102 seconds of CPU usage after 50,000 interations.
  - Native implementation is slower than Single-pass implementation by ~2.4713287 seconds, having to run significantly more iterations (1,249,975,000 more).
- instrumentation_lab:\
  After three runs, the averages are:
  - TOTAL seconds: 0.000645 seconds.
  - BUILD_DATA seconds: 0.000315 seconds.
  - PROCESS seconds: 0.000199 seconds.
  - REDUCE seconds: 0.000085 seconds.
  - All three phases run through 50,000 iterations.
In comparison_algorithms experiment, count_even_naive implementation is inefficient compared to the count_even_single_pass implementation. It takes ~2.471431 seconds to run through 1,250,025,000 interations. That means for 100,000,000 it would consume ~0.197711 seconds of CPU usage. This implementation is inefficient when compared to the baseline of ~0.089803 seconds of CPU usage per 100,000,000 interations.\
count_even_single_pass run through much less interations and consume less CPU usage time than count_even_naive. But if it needs to run 100,000,000 iterations, it would take ~0.204 seconds of CPU usage which is more than the baseline and also more than what count_even_naive consumes.
