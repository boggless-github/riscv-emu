# Define compiler and compiler flags
CC := g++
CFLAGS := -Wall -Iinc

# Define source and object file directories
SRC_DIR := src
OUT_DIR := out
OBJ_DIR := $(OUT_DIR)/obj

# List of source files and corresponding object files
SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Define the final executable
EXECUTABLE := out/project

# Main target
all: $(EXECUTABLE)

# Run as well:
run: all
	clear
	@$(EXECUTABLE)
# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link object files into the executable
$(EXECUTABLE): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

# Clean rule to remove generated files
clean: $(OUT_DIR)
	rm -rf $(OUT_DIR)

# out directory structure
$(OBJ_DIR): $(OUT_DIR)
	@mkdir -p $(OBJ_DIR)

$(OUT_DIR): 
	@mkdir -p $(OUT_DIR)

.PHONY: all clean
