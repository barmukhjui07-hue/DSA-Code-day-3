~~ 🚀 Data Structures & Algorithms Showcase:
Daily tracking of DSA problems, C++ implementation, and core concepts.

~~📌 Day 3: Control Flow, Loop Optimizations & Prime Checking:
~~ 🧠 Concepts Used-
1. **Entry-Controlled Loops (`while`):** Iterating continuously based on a boolean condition check before each step.
2. **Loop Termination (`break`):** Forcefully exiting loop execution early when a specific condition is met.
3. **Square Root Bound Optimization ($O(\sqrt{N})$):** Checking divisibility up to $\sqrt{N}$ ($i \times i \le N$) rather than $N-1$ to optimize prime number verification.

~~ 🛠️ Skills Learnt-
* Controlling program flow using `while` and `for` loops.
* Short-circuiting redundant iterations using `break`.
* Optimizing mathematical check loops from (N) time complexity down to sqrt{N}.

~~ 💡 Key Takeaways-
* **Early Exits Save Iterations:** In the sum program, breaking at `i == 10` stops the loop immediately, preventing unnecessary execution up to `n = 25`.
* **$\sqrt{N}$ Primality Check:** If a number $N$ has a factor, at least one factor must be less than or equal to $\sqrt{N}$. Stopping the loop at i drastically reduces the number of operations for large values of N.
