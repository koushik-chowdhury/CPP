#include <iostream>
#include <string>
using namespace std;

// Function to encode a string with a Caesar Cipher shift
string encode(string str, int shift) {
  string encoded;
  for (char c : str) {
    // Check for uppercase and lowercase letters
    if (isalpha(c)) {
      // Shift the character by the specified amount
      int newChar = c + shift;
      // Handle wrapping around the alphabet
      if (isupper(c) && newChar > 'Z') {
        newChar -= 26;
      } else if (islower(c) && newChar > 'z') {
        newChar -= 26;
      }
      encoded += static_cast<char>(newChar);
    } else {
      // Keep non-alphabetic characters unchanged
      encoded += c;
    }
  }
  return encoded;
}

// Function to decode a string encoded with a Caesar Cipher shift
string decode(string str, int shift) {
  return encode(str, -shift); // Essentially encode with negative shift
}

int main() {
  string message;
  int shift;

  cout << "Enter a message to encode/decode: ";
  getline(cin, message);

  cout << "Enter a shift value (positive for encode, negative for decode): ";
  cin >> shift;

  string encodedMessage = encode(message, shift);
  string decodedMessage = decode(encodedMessage, shift);

  cout << "Encoded message: " << encodedMessage << endl;
  cout << "Decoded message: " << decodedMessage << endl;

  return 0;
}
