a1-1.out:
	gcc ch2-lab1-1/source/Main.c

a1-2.out:
	gcc ch2-lab1-2/source/* ch2-lab1-2/include/*

a2.out:
	gcc ch2-lab2/source/*

# 刪除編譯後的執行檔案
clean:
	find . -type f \( -name \*out -o -name \*gch \) -delete

# 在windows環境底下的docker container才需要執行
convert:
	dos2unix *.sh

lab1-1: clean a1-1.out
	bash lab1-1.sh

lab1-2: clean a1-2.out
	bash lab1-2.sh

lab2: clean a2.out
	bash lab2.sh
