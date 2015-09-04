# This is an advanced example of usage of the packet filter in conditional attacks.
#
# usage: 
#  python ../interpreter/interpreter.py -i advanced-packet-filter-1.asl -o advanced-packet-filter-1.xlm
# 
# author: Francesco Racciatti <racciatti.francesco@gmail.com>

# declare and initialize a list of nodes
list targetList = {1}

# conditional attack statement (starts at 100 and it refers nodes in targetList)
from 100 nodes in targetList do {

	# packet filter, it filters all packets having the field 'sourcePort' of the layer 'NET' equals to 1000 OR 2000
	filter("NET.sourcePort" == "1000|2000")
		
		# drop the (original) intercepted packet
		drop(original, 1)
    
}
