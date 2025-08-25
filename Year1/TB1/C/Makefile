CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude
BUILD = build

.PHONY: ex ex-run clean
ex:
  @mkdir -p $(BUILD)
  $(CC) $(CFLAGS) exercises/$(EX)/main.c -o $(BUILD)/$(EX)

ex-run: ex
  ./$(BUILD)?$(EX)

clean:
  rm -rf $(BUILD)
