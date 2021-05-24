PROJ_NAME = food_order
TEST_PROJ_NAME = Test_$(PROJ_NAME)



SRC = src/admin.c\
	src/func.c\
	src/orderfood.c\
	src/payment.c

TEST_SRC = test/food_test.c\
unity/unity.c

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(SRC)
	gcc main.c $(SRC) $(INC) -lm -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run: $(PROJ_NAME).$(EXEC)
	./$(call FixPath,$(PROJ_NAME).$(EXEC))


test: $(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(SRC) $(INC) $(INC_T) -lm -o $(TEST_PROJ_NAME).$(EXEC)
	./$(TEST_PROJ_NAME).$(EXEC)

coverage:${PROJECT_NAME}
	
	gcov -a main.c

cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

memcheck:
	valgrind ./$(PROJ_NAME).$(EXEC)


doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) *.$(EXEC) *.gcov *.gcda *.gcno
