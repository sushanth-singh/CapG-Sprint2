GCC = g++
CFLAG =	-c
OFLAG = -o
INC = ../header
IFLAG = -I $(INC)

SRC = ../src
BIN = ../bin
OBJ = ../obj

SRCHRPROG = $(SRC)/hrproject.cpp
GCCHRPROG = $(GCC) $(OFLAG)  $(OBJ)/hrproject.o $(CFLAG) $(IFLAG) $(SRCHRPROG)

SRCSAVEFILE = $(SRC)/saveFile.cpp
GCCSAVEFILE = $(GCC) $(OFLAG)  $(OBJ)/saveFile.o $(CFLAG) $(IFLAG) $(SRCSAVEFILE)

SRCDEALLOCATE = $(SRC)/deAllocate.cpp
GCCDEALLOCATE = $(GCC) $(OFLAG)  $(OBJ)/deAllocate.o $(CFLAG) $(IFLAG) $(SRCDEALLOCATE)

SRCALLOCATE = $(SRC)/allocate.cpp
GCCALLOCATE = $(GCC) $(OFLAG)  $(OBJ)/allocate.o $(CFLAG) $(IFLAG) $(SRCALLOCATE)

SRCUPDATE = $(SRC)/updateFile.cpp
GCCUPDATE = $(GCC) $(OFLAG)  $(OBJ)/updateFile.o $(CFLAG) $(IFLAG) $(SRCUPDATE)

SRCDELETE = $(SRC)/deleteFile.cpp
GCCDELETE = $(GCC) $(OFLAG)  $(OBJ)/deleteFile.o $(CFLAG) $(IFLAG) $(SRCDELETE)

SRCADDFILE = $(SRC)/addFile.cpp 
GCCADDFILE = $(GCC) $(OFLAG)  $(OBJ)/addFile.o $(CFLAG) $(IFLAG) $(SRCADDFILE)

SRCLOADFILE = $(SRC)/loadFile.cpp
GCCLOADFILE = $(GCC) $(OFLAG)  $(OBJ)/loadFile.o $(CFLAG) $(IFLAG) $(SRCLOADFILE)

SRCVALIDATION = $(SRC)/validation.cpp
GCCVALIDATION = $(GCC) $(OFLAG)  $(OBJ)/validation.o $(CFLAG) $(IFLAG) $(SRCVALIDATION)

SRCREPORTS = $(SRC)/reports.cpp
GCCREPORTS = $(GCC) $(OFLAG)  $(OBJ)/reports.o $(CFLAG) $(IFLAG) $(SRCREPORTS)

SRCEMPLOYEE = $(SRC)/employee.cpp
GCCEMPLOYEE = $(GCC) $(OFLAG)  $(OBJ)/employee.o $(CFLAG) $(IFLAG) $(SRCEMPLOYEE)

SRCPROJECT = $(SRC)/project.cpp
GCCPROJECT = $(GCC) $(OFLAG)  $(OBJ)/project.o $(CFLAG) $(IFLAG) $(SRCPROJECT)

SRCDATE = $(SRC)/date.cpp
GCCDATE = $(GCC) $(OFLAG)  $(OBJ)/date.o $(CFLAG) $(IFLAG) $(SRCDATE)

OBJHR = hrproject.o saveFile.o deallocate.o allocate.o updateFile.o  deleteFile.o addFile.o loadFile.o reports.o validation.o employee.o project.o date.o
GCCHR = $(GCC) $(OFLAG)  $(BIN)/hr $(OBJ)/hrproject.o $(OBJ)/saveFile.o $(OBJ)/deallocate.o $(OBJ)/allocate.o $(OBJ)/updateFile.o  $(OBJ)/deleteFile.o $(OBJ)/addFile.o $(OBJ)/loadFile.o $(OBJ)/validation.o $(OBJ)/reports.o $(OBJ)/employee.o $(OBJ)/project.o $(OBJ)/date.o

hr: $(OBJHR)
	$(GCCHR)

hrproject.o: $(SRCHRPROG)
	$(GCCHRPROG)

saveFile.o: $(SRCSAVEFILE)
	$(GCCSAVEFILE)

deallocate.o: $(SRCDEALLOCATE)
	$(GCCDEALLOCATE)

allocate.o: $(SRCALLOCATE)
	$(GCCALLOCATE)

updateFile.o: $(SRCUPDATE)
	$(GCCUPDATE)

deleteFile.o: $(SRCDELETE)
	$(GCCDELETE)

addFile.o: $(SRCADDFILE)
	$(GCCADDFILE)

loadFile.o: $(SRCLOADFILE)
	$(GCCLOADFILE)

validation.o: $(SRCVALIDATION)
	$(GCCVALIDATION)

reports.o: $(SRCREPORTS)
	$(GCCREPORTS)

employee.o: $(SRCEMPLOYEE)
	$(GCCEMPLOYEE)

project.o: $(SRCPROJECT)
	$(GCCPROJECT)

date.o: $(SRCDATE)
	$(GCCDATE)

clean:
	rm $(BIN)/hr $(OBJ)/*.o
