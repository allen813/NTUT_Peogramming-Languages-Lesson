lab1.out:
	gcc -finput-charset=BIG5 ch6-lab1/source/*.c ch6-lab1/include/*.h

lab1: lab1.out
	bash lab1.sh

lab2.out:
	gcc -finput-charset=BIG5 ch6-lab2/source/*.c

lab2: lab2.out
	bash lab2.sh

lab3.out:
	gcc -finput-charset=BIG5 ch6-lab3/source/*.c

lab3: lab3.out
	bash lab3.sh

# .sh檔案如果運行不了就運行這個
convert:
	dos2unix *.sh
