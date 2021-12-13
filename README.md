# msalign

Usage example in Python3 shell:

```
>>> from msalign import *
>>> query="KMIAFIVIALALSHTTYSQITNGNTGNPVICLGHHAVENGTSVKTLTDNHIEVVSAKELVETNHINELCPSPLKLVDGQDCDLINGALGSPGCDHLQDTTWDVFIERPTAMDTCYPFDVPDYQSLRSILASSGSLEFIAEQFTWNGVTVDGSSSACLRGGRNGFFTRLNWLTRVKNGNYGPINVTKENTGSYVRLYLWGVHHPSSDTEQTDLYKVATGRVTVSTRSDQISIIPNIGSRPRVRNQSGRISIYWTLVNPGDSIIFNSIGNLIAPRGHYKINKSTKGTVLKSDKKIGSCTSPCLTDKGSIQSDKPFQNVSRIAIGNCPKYVKQGSLMLATGMRNIPDKQTKGLFGAIAGFIENGWQGLIDGWYGFRHQNAEGTGTAADLKSTQAAIDQINGKLNRLIEKTNEKYHQIEKEFEQVEGRIQDLEKYVEDTKIDLWSYNAELLVALENQHTIDVTDSEMNKLFERVRRQLRENAEDQGNGCFEIFHQCDNNCIESIRNGTYDHNIYRDEAINNRIKINPVNLTMGYKDIILWISFSMSCFVFVALILGFVLWACKNGNIRCQICI"
>>> subject="QKQGKMIALILVALALSHTAYSQITNGTTGNPIICLGHHAVENGTSVKTLTDNHVEVVSAKELVETNHTDELCPSPLKLVDGQDCDLINGALGSPGCDRLQDTTWDVFIERPTAVDTCYPFDVPDYQSLRSILASSGSLEFIAEQFTWNGVKVDGSSSACLRGGRNSFFSRLNWLTKATNGNYGPINVTKENTGSYVRLYLWGVHHPSSDNEQTDLYKVATGRVTVSTRSDQISIVPNIGSRPRVRNQSGRISIYWTLVNPGDSIIFNSIGNLIAPRGHYKISKSTKSTVLKSDKRIGSCTSPCLTDKGSIQSDKPFQNVSRIAIGNCPKYVKQGSLMLATGMRNIPGKQAKGLFGAIAGFIENGWQGLIDGWYGFRHQNAEGTGTAADLKSTQAAIDQINGKLNRLIEKTNEKYHQIEKEFEQVEGRIQDLEKYVEDTKIDLWSYNAELLVALENQHTIDVTDSEMNKLFERVRRQLRENAEDQGNGCFEIFHQCDNNCIESIRNGTYDHNIYRDEAINNRIKINPVTLTMGYKDIILWISFSMSCFVFVALILGFVLWACQNGNIRCQICI"
>>> x = NeedlemanWunsch(query, subject)
>>> x.get_alignment()
'----KMIAFIVIALALSHTTYSQITNGNTGNPVICLGHHAVENGTSVKTLTDNHIEVVSAKELVETNHINELCPSPLKLVDGQDCDLINGALGSPGCDHLQDTTWDVFIERPTAMDTCYPFDVPDYQSLRSILASSGSLEFIAEQFTWNGVTVDGSSSACLRGGRNGFFTRLNWLTRVKNGNYGPINVTKENTGSYVRLYLWGVHHPSSDTEQTDLYKVATGRVTVSTRSDQISIIPNIGSRPRVRNQSGRISIYWTLVNPGDSIIFNSIGNLIAPRGHYKINKSTKGTVLKSDKKIGSCTSPCLTDKGSIQSDKPFQNVSRIAIGNCPKYVKQGSLMLATGMRNIPDKQTKGLFGAIAGFIENGWQGLIDGWYGFRHQNAEGTGTAADLKSTQAAIDQINGKLNRLIEKTNEKYHQIEKEFEQVEGRIQDLEKYVEDTKIDLWSYNAELLVALENQHTIDVTDSEMNKLFERVRRQLRENAEDQGNGCFEIFHQCDNNCIESIRNGTYDHNIYRDEAINNRIKINPVNLTMGYKDIILWISFSMSCFVFVALILGFVLWACKNGNIRCQICI'
>>> x.get_insertions()
[]
```
