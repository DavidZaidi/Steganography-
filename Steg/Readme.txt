			STEGANOGRAPHY

included:
All source files (.cpp, .h, .bmp, .txt , .o, .win)
this README



What Is This?
-------------

Steganography is the art or practice of concealing a file,
message, image, or video within another file, message, 
image, or video.



What It Does?
-------------


This software/ program takes a string and can hide it in
3 different ways ( user desired ) and then show the hidden
message.

1. It can create an image
and hide the string in it.

2. It can hide the string in a created
mona lisa image.

3. It can swap all the characters of a string
and hide it in different characters.

Similarly it can also decode a message from a created picture
or an encoded text.


How Does It Work?
-----------------

It asks the user to press 1 to encode a message
or press 2 to decode a message, if user wishes to
encode then it asks for three possible ways to encode it
first is through random image( Creating an image ), second
is by encoding text in mona lisa's image , third is by 
encoding the text by using a codesheet.

If the user presses 1 ( creating an image ) then the program
asks for a text after giving the text it asks the name of 
image file you want to create? then it exits.
Similarly if user presses 2 ( mona lisa's image) the program
asks for a text after the text it asks for the name of the
image of mona lisa and then it exits.
In the third case if the user presses 3 ( using codesheet ) the program
asks for a text and then it asks for the name of the text file
you want your text to be encoded in.



If the user presses 2 that is Decoding , it pops out a note saying:
"use the same method of decoding , you used earlier to encode your text
with".Then it asks for three possible ways to decode it
first is through random image( Creating an image ), second
is by decoding text from mona lisa's image , third is by 
decoding the text using a codesheet.


If the user presses 1 (creating an image method) the program asks the
name of the image the text was encoded on and after providing the appropriate 
name it displays your message.
If the user presses 2 the program asks the name of mona lisa's image
and then it displays the text that was encoded.
If the user presses 3 it asks the name of the file the in which the message
was encoded, on providing appropriate name of the file it decodes and prints
the message on console.


*For the Encode / Decode function using the codesheet, user can also change
the values of any character by accessing the codesheet.txt*





libraries included are:

1. bitmap_image ( for image creation , accessing purposes)
2. iostream (for input output console view )
3. windows.h ( for basic IO such as system pause etc. )
4. string ( to manipulate strings ) 




