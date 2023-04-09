# Python Wrangling
 | 10 points

Tags: 
AUTHOR: SYREAL

## Description

Python scripts are invoked kind of like programs in the Terminal... Can you run this Python script using this password to get the flag?


## Hints

1. Get the Python script accessible in your shell by entering the following command in the Terminal prompt: $ wget https://mercury.picoctf.net/static/1b247b1631eb377d9392bfa4871b2eb1/ende.py

2. $ man python


## My Walk

Downloaded all given files

links:

    1. https://mercury.picoctf.net/static/1b247b1631eb377d9392bfa4871b2eb1/ende.py
    2. https://mercury.picoctf.net/static/1b247b1631eb377d9392bfa4871b2eb1/pw.txt
    3. https://mercury.picoctf.net/static/1b247b1631eb377d9392bfa4871b2eb1/flag.txt.en

$ py ende.py -d flag.txt.en

password: dbd1bea4dbd1bea4dbd1bea4dbd1bea4


## Flag
picoCTF{4p0110_1n_7h3_h0us3_dbd1bea4}