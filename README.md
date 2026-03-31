Caesar Cipher in C — Logic Explanation

This program implements a basic encryption and decryption technique known as the Caesar Cipher. In this method, each character in a given message is shifted by a fixed number of positions within the alphabet. The same shift value is used consistently throughout the message for both encryption and decryption.

Representation of characters in C

In the C programming language, characters are internally stored as numeric values according to the ASCII encoding system. Each letter corresponds to a specific integer value. For instance, the lowercase letter 'a' is represented by 97, 'b' by 98, and this sequence continues up to 'z', which is represented by 122. Since these values are stored in a continuous range, characters can be manipulated using arithmetic operations.

A string in C is an array of characters terminated by a null character '\0'. When a user inputs a message, each character is stored in consecutive memory locations along with its corresponding ASCII value. The null terminator indicates the end of the string and allows the program to process the message correctly.

Encryption process

The encryption process involves shifting each character of the message forward by a specified number of positions. This is achieved by adding the shift value to the ASCII value of each character. Because the characters are stored as integers, this operation directly produces another valid character within the ASCII range.

For example, if the shift value is 2, the character 'a' becomes 'c' and 'b' becomes 'd'. This transformation works due to the sequential arrangement of lowercase letters in the ASCII table.

Handling boundary conditions

During encryption, it is possible for a character value to exceed the ASCII value of 'z'. In such cases, the program ensures that the result remains within the alphabet by subtracting 26 from the value. This effectively wraps the character back to the beginning of the alphabet.

For instance, shifting 'z' by 2 results in a value beyond 'z'. By subtracting 26, the resulting character becomes 'b', thereby maintaining a valid lowercase letter.

Decryption process

Decryption reverses the encryption by subtracting the same shift value from each character in the message. This operation restores the original text.

If the resulting value falls below the ASCII value of 'a', the program adds 26 to bring it back within the valid range of lowercase letters. This ensures that the decryption process correctly handles characters that were wrapped during encryption.

Iteration through the string

The program processes the message using a loop that iterates through each character of the string. The loop continues until it encounters the null terminator '\0'. This approach ensures that every character in the input message is properly encrypted or decrypted.

Key concepts demonstrated

This implementation highlights fundamental concepts in C programming, including the representation of characters as integers, the structure of strings as character arrays, and the use of loops for sequential processing. It also demonstrates how arithmetic operations can be applied to characters and how conditional logic is used to maintain values within a specific range.

Conclusion

The Caesar Cipher relies on the numeric representation of characters to perform transformations on text. By applying a consistent shift to each character and ensuring that the result remains within the bounds of the alphabet, the program is able to convert plain text into encoded form and recover the original message through decryption.
