#!/bin/bash
echo "Running tests..."
echo

##### test1 #####
# 加入輸入資料
n=30
choose='O'
echo
echo "test1: n=$n, choose=$choose"
output=$(echo $n $choose | ./a.out)
# 預期輸出
expected_output="1+2+...+n=?請輸入n=
請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:
總合為225"

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
n=30
choose='E'
echo
echo "test2: n=$n, choose=$choose"
output=$(echo $n $choose | ./a.out)
# 預期輸出
expected_output="1+2+...+n=?請輸入n=
請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:
總合為240"

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

##### test3 #####
# 加入輸入資料
n=30
choose='I'
echo
echo "test3: n=$n, choose=$choose"
output=$(echo $n $choose | ./a.out)
# 預期輸出
expected_output="1+2+...+n=?請輸入n=
請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:
總合為465"

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

##### test4 #####
# 加入輸入資料
n=30
choose='X'
echo
echo "test4: n=$n, choose=$choose"
output=$(echo $n $choose | ./a.out)
# 預期輸出
expected_output="1+2+...+n=?請輸入n=
請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇:
選擇錯誤"

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
