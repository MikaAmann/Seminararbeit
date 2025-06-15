# Seminararbeit

| Test ID      | Category      | Topic |Expected Verdict | CPA Verdict | LLM Verdict | CPA Correct | LLM Correct | Error Type (CPA / LLM)|
|--------------|---------------|-------|-----------------|-------------|-------------|-------------|-------------|-----------------------|
| F-001   | Falsification || false    | true        | true        |   ❌          | ❌          | FN / FN   |
| NO-001 | No Overflow   | Recursive Fibonnaci |true     | true     | true       | ✅          | ✅          | - / - |
| NO-002 | No Overflow   | Even/Odd|false     | false     | false       | ✅          | ✅          | - / - |
| NO-003 | No Overflow   | Ackermann function|true     | timeout     | true       | ❌           | ✅          | - / - |
| NO-004 | No Overflow   | Recursive integer addition |false     | timeout     | false    | ❌           | ✅          | - / - |
| NO-005 | No Overflow   | Array tiling |true     | true (unconfirmed)     | false       | (✅)          |  ❌         | - / FP|
| NO-006 | No Overflow   | Signed Integer Overflow |false     | false     | false       | ✅          | ✅          | - / - |
| C-001 | Concurrency Safety   | Thread race condition|false     | false     | false       | ✅           | ✅          | - / - |
| C-002 | Concurrency Safety   | Read/Write Lock |true     | false     | false       | ❌             | ❌            | FP / FP |
| C-003 | Concurrency Safety   | Thread Integer Overflow |false     | false     | false       | ✅           | ✅          | - / - |
| C-004 | Concurrency Safety   | Petersons Algorithm |true     |true     | true       | ✅           | ✅          | - / - |
| M-001 | Memory Safety   | Array |false     |false     | false       | ✅           | ✅          | - / - |
| M-002 | Memory Safety   | Array |true     |true     | false       | ✅           | ❌          | - / FP |
| M-003 | Memory Safety   | Heap |true     |false     | false       | ❌          | ❌          | FP / FP |
| M-004 | Memory Safety   | Heap |false     |false     | true       |  ✅           | ❌          | - / FN |
| M-005 | Memory Safety   | Linked List |true     |true     | false       |  ✅           | ❌          | - / FP |
| M-006 | Memory Safety   | Linked List |false     |false     | false       | ✅          | ✅          | - / - |
| M-007 | Memory Safety   | Memory Cleanup |false     |false     | false       | ✅         | ✅          | - / - |
| M-008 | Memory Safety   | Memory Cleanup |true     |true     | false       | ✅         | ❌          | - / FP |
| T-001 | Termination   | Bit Vectors |false     |false     | false       | ✅         | ✅          | - / - |
| T-002 | Termination   | Reverse Bits | true     |true     | false       | ✅         | ❌         | - / FP |
| T-003 | Termination   | Dijkstra Algorithm | false     |true     | false       | ❌         | ✅        | FN / - |
| T-004 | Termination   | Regression | true     |true     | false       | ✅         | ❌         | - / FP |
| T-005 | Termination   | Termination | true     |true     | false       | ✅         | ❌         | - / FP |
| T-006 | Termination   | Locks | false     |false     | false       | ✅         | ✅         | - / - |
| T-007 | Termination   | Loops | true     |false     | false       | ❌         | ❌         | FP / FP |
| T-008 | Termination   | Pointer Validation | true     |true     | true       | ✅         | ✅         | - / - |
| R-001 | Reach Safety   | Array bubblesort | false     | timeout     | false       | ❌         | ✅         | - / - |
| R-002 | Reach Safety   | Array increment | true     | true     | true       | ✅         | ✅         | - / - |
| R-003 | Reach Safety   | Loop invert String | false     | false     | false       | ✅         | ✅         | - / - |
| R-004 | Reach Safety   | Duplicates | true     | false     | true       | ❌        | ✅         | FP / - |
| R-005 | Reach Safety   | Recursive GCD | true     | true     | false       | ✅        | ❌         | - / FP |
| R-006 | Reach Safety   | Recursive Fibonacci | false     | false     | false       | ✅        | ✅         | - / - |
| R-007 | Reach Safety   | Hardness| true     | true     | false       | ✅        | ❌         | - / FP |
| R-008 | Reach Safety   | Hardness | false     | false     | false       | ✅        | ✅         | - / - |
| R-009 | Reach Safety   | Hardness | true     | true     | false       | ✅         | ❌         | - / FP |





| test002 | termination   | | true     | timeout     | false       | ✅          | ❌          | FN / FN |


| Situation                 | Tool sagt „Fehler“   | Tool sagt „kein Fehler“ |
| ------------------------- | -------------------- | ----------------------- |
| **Fehler ist da**         | ✅ korrekt            | ❌ **False Negative**    |
| **Kein Fehler vorhanden** | ❌ **False Positive** | ✅ korrekt               |
