#!/bin/bash

# Define the header file
header_file="test.h"

# Function to add the include line to a .c file
add_include() {
  local c_file="$1"
  if ! grep -q "#include \"$header_file\"" "$c_file"; then
    echo "#include \"$header_file\"" > temp_file
    cat "$c_file" >> temp_file
    mv temp_file "$c_file"
    echo "Added #include \"$header_file\" to $c_file"
  else
    echo "#include \"$header_file\" already exists in $c_file"
  fi
}

# Function to remove the include line from a .c file
remove_include() {
  local c_file="$1"
  if grep -q "#include \"$header_file\"" "$c_file"; then
    grep -v "#include \"$header_file\"" "$c_file" > temp_file
    mv temp_file "$c_file"
    echo "Removed #include \"$header_file\" from $c_file"
  else
    echo "#include \"$header_file\" not found in $c_file"
  fi
}

# Iterate over all .c files in the current directory
for c_file in *.c; do
  if [ "$c_file" != "test.c" ]; then
    # Add the include line to each .c file
    add_include "$c_file"
  fi
done

# Compile and run your test.c
gcc *.c -o test_program
./test_program

# Remove the include line from each .c file
for c_file in *.c; do
  if [ "$c_file" != "test.c" ]; then
    remove_include "$c_file"
  fi
done

# Clean up the compiled program
rm test_program