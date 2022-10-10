hr: hrproject.o saveFile.o deallocate.o allocate.o updateFile.o  deleteFile.o addFile.o LoadFile.o reports.o validation.o
	g++ -o  ../bin/hr ../obj/hrproject.o ../obj/saveFile.o ../obj/deallocate.o ../obj/allocate.o ../obj/updateFile.o  ../obj/deleteFile.o ../obj/addFile.o ../obj/LoadFile.o ../obj/reports.o  ../obj/validation.o

hrproject.o: ../src/hrproject.cpp 
	g++ -o -g ../obj/hrproject.o -c ../src/hrproject.cpp

saveFile.o: ../src/saveFile.cpp
	g++ -o -g ../obj/saveFile.o -c ../src/saveFile.cpp

deallocate.o: ../src/deAllocate.cpp
	g++ -o -g ../obj/deallocate.o -c ../src/deAllocate.cpp

allocate.o: ../src/allocate.cpp
	g++ -o -g ../obj/allocate.o -c ../src/allocate.cpp

updateFile.o: ../src/updateFile.cpp
	g++ -o -g ../obj/updateFile.o -c ../src/updateFile.cpp

deleteFile.o: ../src/deleteFile.cpp 
	g++ -o -g ../obj/deleteFile.o -c ../src/deleteFile.cpp

addFile.o: ../src/addFile.cpp 
	g++ -o -g ../obj/addFile.o -c ../src/addFile.cpp

LoadFile.o: ../src/loadFile.cpp
	g++ -o -g ../obj/LoadFile.o -c ../src/loadFile.cpp

validation.o: ../src/validation.cpp
	g++ -o -g ../obj/validation.o -c ../src/validation.cpp

reports.o: ../src/reports.cpp
	g++ -o -g ../obj/reports.o -c ../src/reports.cpp
