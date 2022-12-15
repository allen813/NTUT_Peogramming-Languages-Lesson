#!/bin/bash
echo "Running tests..."
echo

# 加入輸入資料
echo "test1"
output=$(echo Michael 0 16 | ./a.out)
# Print output
echo "$output"
# 等待一下，不然輸出比對結果會被切斷
sleep 0.5

# 加入輸入資料
echo "test2"
output=$(echo William 1 32 | ./a.out)
# Print output
echo "$output"
# 等待一下，不然輸出比對結果會被切斷
sleep 0.5

echo
echo ">> 這次實驗沒有自動評分，請開啟此畫面並請助教檢查"
echo ">> There is no auto grading in this lab. Please open this screen, then ask teaching assistant to check the lab."

exit 0
