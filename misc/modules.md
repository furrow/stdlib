* **core -- Furrow's prelude.**
* date -- dates, times, calendars, stringification, you name it.
* fs -- filesystem operations.
* http -- http requests, etc.
* regex -- regular expressions.
* crypto -- foolproof high-level cryptography.
* math -- mathematics.
* stats -- statistics.
* sqlite3 -- sqlite3 database.
* compression -- compression and decompression.
* csv -- comma and tab separated values.
* json -- json files.
* yaml -- yaml files.
* ini -- ini files.
* sys -- operating system interface and syscalls
    (do we call this "os" or "sys"?. Do we want a separate "syscalls" module and then make os/sys high level? Do we, and how do we, avoid stepping on the toes of other modules like "fs", "thread" and "process"?)
* mac -- Mac OS X specific functions
* linux -- Linux specific functions
* windows -- Windows specific functions
* cli -- cli argument parsing.
* logging -- logging.
* curses -- terminal curses IO.
* process -- process information and spawning, overlaps with sys somewhat.
* thread -- threading (discouraged)
* net -- networking, primarily sockets.
* ssl -- SSL/TLS.
* email -- emailing support.
* transform -- data encoding, e.g. base64.
* html -- html parsing.
* xml -- xml parsing.
* ftp -- FTP/SFTP/FTPS, etc.
* image -- images
* audio -- audio encoding/decoding.
* video -- video encoding/decoding.
* color -- working with color, color conversions.

Anything else?

## References

* <http://docs.python.org/3/library/index.html>