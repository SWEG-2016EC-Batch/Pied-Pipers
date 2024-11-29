/*5,the algorithm a serial transmission line can 
transmit 960 character a second, that will calculate 
how long it will take to send a file, given the file 
size. test your grogram on a 400MB 
file which may take days

start 1- start
     step 2- set already Constants
        transmission_rate = 960   // Characters per second 
                filesizeMB = 400  // file size in MB
     

    step 3- Convert file size from MB to bytes (1 MB = 1024 * 1024 bytes)
            file_size_bytes = file_size_MB * 1024 * 1024

    step 4- Calculate the time in seconds to send the entire file
    time_in_seconds = file_size_bytes / transmission_rate

    step 5- Convert the time from seconds to days, hours, minutes, and seconds
    time_in_days = time_in_seconds / (24 * 3600)
    remaining_seconds = time_in_seconds MOD (24 * 3600)

    time_in_hours = remaining_seconds / 3600
    remaining_seconds = remaining_seconds MOD 3600

    time_in_minutes = remaining_seconds / 60
    time_in_seconds = remaining_seconds MOD 60

    step 6- Output the time to send the file
       PRINT "It will take approximately "
        PRINT time_in_days, "days ", time_in_hours, "hours ", time_in_minutes, "minutes ", time_in_seconds, "seconds to send the file."

step 7- stop
