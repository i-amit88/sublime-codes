import re
# matcher=re.finditer("[a-z]","a7b@k9z")
# for match in matcher:
# 	print(match.start(),"...............",match.group())

matcher=re.finditer("\S","a7b@k9z")
for match in matcher:
	print(match.start(),"...............",match.group())