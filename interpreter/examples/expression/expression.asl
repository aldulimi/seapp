# This is an example of ASL file that contains an expression.
#
# usage: 
#  python ../interpreter/interpreter.py -i expression.asl -o expression.xlm
# 
# author: Francesco Racciatti <racciatti.francesco@gmail.com>

# declare and initialize a list of nodes
list dstList = {1,2,3,4}

# unconditional attack statement
from 100 every 0.1 do {

	# declare a packet
    packet fakePacket

    # initialize variables (they are not re-initialized in the further steps)
    var sequenceNumber = 10000
    var step = 1
    
	# create a new packet
	create(fakePacket, "APP.type", 0)

	# fill the new packet properly
	change(fakePacket, "APP.sequenceNumber", sequenceNumber)
    
	# put the new packet in the RX buffer of nodes in the dstList
	put(fakePacket, dstList, RX, FALSE, 0)

    # expression
    sequenceNumber += step
}
