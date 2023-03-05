# Compiler
CXX = g++

# Directories
SRC_DIR = src
INC_DIR = include
TEST_DIR = tests
OBJ_DIR = obj
LIB_DIR = lib
DOC_DIR = docs

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic -I$(INC_DIR)

# Library name
LIB_NAME = libgeometry.a

# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Test files
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)
TEST_OBJ_FILES = $(patsubst $(TEST_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(TEST_FILES))

# Targets
.PHONY: all clean doc

all: $(LIB_DIR)/$(LIB_NAME) $(TEST_DIR)/geometrytest

$(LIB_DIR)/$(LIB_NAME): $(OBJ_FILES)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(TEST_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TEST_DIR)/geometrytest: $(TEST_OBJ_FILES) $(LIB_DIR)/$(LIB_NAME)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) $(LIB_DIR) $(TEST_DIR)/geometrytest $(DOC_DIR)

doc:
	doxygen Doxyfile