# MessageYou

End-To-End encrypted chat application that supports file transfer between clients using boost and cryptopp libraries.

###### The encryption configuration used here is for demonstration purposes only!
###### Using CBC mode in AES with constant iv value is not recommended and you should use GCM mode that provides AEAD instead.

## Installation

Ensure you have Python 3 ,Boost and CryptoPP installed on your machine.

### OSX

Use `brew` package manager to download the latest `cmake` and `boost`. 
 
- If you dont have `brew` installed, open `Terminal` and run the following commands:
     
      xcode-select --install        # developer tools are required
      /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

* After you have `brew` installed:

        brew install boost cmake make sqlite   # install Boost, CMake and Makefile and sqlite

* If you want to install the latest version of `CryptoPP` library you can get it using `vcpkg` OR you can skip it and use the libs included in the client directory (Iv'e included both x86/ARM versions, all you need to do is to run the `Makefile`).

      brew install vcpkg       # if you don't have vcpkg installed
      vcpkg install cryptopp   # will install the CryptoPP on both x86/ARM architectures.

* Otherwise, all you need to do is to run the Makefile which will execute the CMakefile

      cd PATH/TO/CLIENT
      make

* In separate terminals, launch both clients and the server from `client1/` `client2/` `server` folders.

      # each in sepreate termianal
      cd ../server/ -> python3 server.py
      cd client1/   -> ./client
      cd client2/   -> ./client


### WINDOWS

You can use the same steps as above since `vcpkg` is a microsoft product or you can download all the necessary libs using Visual Studio.


## Instructions
To secure a connection between two clients, follow these steps:
1. register both clients.
2. get the list of clients (on both clients).
3. A request B's public key.
4. A request B's symmetric key.
5. B request for pending messages.
6. B request A's public key.
7. B sends his symmetric key.
8. A request for pending messages.
9. A sends his symmetric key.
10. B request for pending messages.

---- Now you can start chatting / sending files to each other. ----


