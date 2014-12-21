FTP Application
========

Requirements
========

You should be using any Linux distribution and have make command installed.

If you don't have make command installed, then open your terminal and type: sudo apt-get install make.
Follow the instructions and after the installation is complete, you should be able to compile and execute the application.


Instalation
========

To install the application, you just need to open your Linux terminal and change to the app's directory and type the make command.
After that, to call the app you just need to type ./download ftp_url, where ftp_url is the ftp document you're trying to download.

The argument ftp_url should have the following format: ftp://[< user >:< password >@]< host >[:port]/< url-path >

Note: the parameters in parenthesis are optional (only host and url path are necessary).
