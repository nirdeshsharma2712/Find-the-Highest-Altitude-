# 📊 LeetCode Problem: Find the Highest Altitude

## 🧩 Problem Statement

There is a biker going on a road trip. The road trip consists of `n + 1` points at different **altitudes**. The biker starts his trip on point `0` with altitude equal `0`.
Return the **highest** altitude of a **point**.

> **Note :**
> - You are given an integer **array** `gain` of length `n` where `gain[i]` is the net gain in altitude between points `i`​​​​​​ and `i + 1` for all `(0 <= i < n)`.


## 🧠 Approach: Prefix Sum with Max Tracking

- Start from ground level (altitude = 0).

- For each gain, keep adding it to a running total `(sum += gain)`.

- Store this as the new altitude at each point.

- Simultaneously keep track of the **maximum** altitude seen so far.

- If max altitude is negative : return `0` (since we can’t go below sea level on this one).

- Otherwise, return the `max`.



## ✅ Example Walkthrough

### Example 1

##### Input: [-5,1,5,0,-7]
##### Output: 1

##### Explanation: 
<pre> 
  The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.

  
</pre>

### Example 2

##### Input: [-4,-3,-2,-1,4,3,2]
##### Output: 0

##### Explanation: 
<pre> 
  The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
  
</pre>


## 🛠️ Constraints

- `n == gain.length`
- `1 <= n <= 100`
- `-100 <= gain[i] <= 100`
