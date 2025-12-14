# ode-solvers-euler-rk4
C program implementing Heun’s method and fourth-order Runge–Kutta (RK4) to numerically solve the logistic growth differential equation and compare their stepwise results.

---

## Numerical Solution of Logistic Growth Equation using Heun’s Method and RK4

### Overview

This program numerically solves the **logistic growth differential equation**

[
\frac{dv}{dt} = k,v\left(1 - \frac{v}{M}\right)
]

using two methods:

* **Heun’s Method (Improved Euler / RK2)**
* **Fourth-Order Runge–Kutta (RK4)**

The code is written in **C** and compares the step-by-step numerical evolution of the population variable (v(t)) for a given step size.

---

### Inputs

The program takes the following user inputs:

* `M` — carrying capacity
* `k` — growth rate constant
* `h` — step size
* `temp` — final time up to which the solution is computed
* `v0` — initial population value

Number of steps is computed as:
[
n = \frac{\text{final time}}{h}
]

---

### Heun’s Method

* Predictor step using Euler’s method
* Corrector step iterated until convergence
* Iteration stops when two successive corrected values are equal (after rounding)
* Values are rounded to match manual/analytical tabulation typically used in coursework

---

### RK4 Method

* Uses four slope evaluations (k_1, k_2, k_3, k_4) per step
* Provides higher accuracy compared to Heun’s method for the same step size
* Outputs intermediate slope values and the updated solution at each step

---

### Output

* Tabulated values of the solution at each time step
* Side-by-side numerical progression for both methods
* Demonstrates the effect of numerical method order on accuracy and stability

---

### Purpose

This code is intended for **academic demonstration** of numerical methods for solving first-order nonlinear differential equations and for **comparison between second-order and fourth-order Runge–Kutta methods**.

---

### Notes

* Rounding is intentionally applied in Heun’s method to ensure convergence visibility.
* Smaller step sizes improve accuracy, especially for Euler/Heun methods.

---
