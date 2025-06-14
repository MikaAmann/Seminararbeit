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





| test002 | termination   | | true     | timeout     | false       | ✅          | ❌          | FN / FN |
