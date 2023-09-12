#!/bin/sh

# Check if the CFILE variable is set
if [ -z "$CFILE" ]; then
    echo "CFILE variable is not set. Please export the C file path."
    exit 1
fi

# Run the preprocessor on the specified C file and save the result to the output file 'c'
cpp "$CFILE" -o c

