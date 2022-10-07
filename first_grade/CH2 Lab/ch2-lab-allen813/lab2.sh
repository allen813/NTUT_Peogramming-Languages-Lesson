#!/bin/bash
echo "Running tests..."
echo

##### case 1
output=$(./a.out)
expected_output="  |  1  2  3  4  5  6  7  8  9
------------------------------
1 |  1  2  3  4  5  6  7  8  9
2 |  2  4  6  8 10 12 14 16 18
3 |  3  6  9 12 15 18 21 24 27
4 |  4  8 12 16 20 24 28 32 36
5 |  5 10 15 20 25 30 35 40 45
6 |  6 12 18 24 30 36 42 48 54
7 |  7 14 21 28 35 42 49 56 63
8 |  8 16 24 32 40 48 56 64 72
9 |  9 18 27 36 45 54 63 72 81"

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

# Print output
echo "Output:"
diff  --old-line-format='⏩ %L' \
      --new-line-format='❌ %L' \
      --unchanged-line-format='✅ %L' \
      <(echo "$expected_output" ) <(echo "$output")

# 等待一下，不然輸出比對結果會被切斷
sleep 0.5
if [ "$output" == "$expected_output" ] ; then
  echo "Pass: Output is correct"
else
  echo "Failed!"
  exit 1
fi

echo
echo "All tests passed."

exit 0
