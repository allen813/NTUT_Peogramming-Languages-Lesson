#!/bin/bash
echo "Running tests..."
echo

##### test1 #####
# 加入輸入資料
m=8
n=6
echo
echo "test1: m=$m, n=$n"
output=$(echo $m $n | ./a.out)
# 預期輸出
expected_output="求排列組合C(m,n)
m=
n=
C(8,6)=28"

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

# Print output
echo "Output:"
diff --old-line-format='⏩ %L' \
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

##### test2 #####
# 加入輸入資料
m=10
n=8
echo
echo "test2: m=$m, n=$n"
output=$(echo $m $n | ./a.out)
# 預期輸出
expected_output="求排列組合C(m,n)
m=
n=
C(10,8)=45"

if [ $? -eq 0 ] ; then
  echo "Pass: Program exited zero"
else
  echo "Fail: Program did not exit zero"
  exit 1
fi

# Print output
echo "Output:"
diff --old-line-format='⏩ %L' \
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
