#=========================
set (name "YooGle")

message(STATUS "${name}")
# -- YooGle


#=========================
set (name "YooGle")
set (var  "name")

message(STATUS "${${var}}")
# -- YooGle


#=========================
function(f)
    set (email "abc@gmail.com" PARENT_SCOPE)
    # PARENT_SCOPE - visible to outside function too
    # Only way to return some data
endfunction()

f()
message(STATUS "${email}")


#=========================
