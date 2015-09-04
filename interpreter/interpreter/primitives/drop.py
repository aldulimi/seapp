"""

Drop class models the 'drop' primitive. It drops packets.

The sintax of the primitive is: 
drop(packetName, likelyhood)
 + packetName is the packet to drop;
 + likelyhood is the occurrence probability of the drop action.

Authors:
 + Alessandro Pischedda	<alessandro.pischedda@gmail.com>
 + Marco Tiloca			<marco.tiloca84@gmail.com>
 + Francesco Racciatti	<racciatti.francesco@gmail.com>

Maintainer:
 + Francesco Racciatti <racciatti.francesco@gmail.com>

"""


from utilities import error_arguments


class Drop:
    """
    drop(packetName, likelyhood)
    """
    
    name = "Drop"
    argv = []
    argc = 2
    
    def __init__(self, args):
        self.argv = args.split(":")
    
    def __str__(self):
        if self.argc != len(self.argv):
            error_arguments(self.name, self.argc, len(self.argv))
        
        if self.argv[1] != 'rnd' and float(self.argv[1]) > 1.0:
            sys.exit("Error: drop() likelyhood argument must belong to the range [0,1] ")
        
        xml = "\n\t\t\t<action>"
        xml += "\n\t\t\t\t<name>Drop</name>"
        xml += "\n\t\t\t\t<parameters>packetName:" + self.argv[0] + ":likelyhood:" + self.argv[1] + "</parameters>"
        xml += "\n\t\t\t</action>"
        
        return xml