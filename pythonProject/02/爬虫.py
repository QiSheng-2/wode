
from urllib.request import urlopen

url="http://www.bilibili.com"
resp=urlopen(url)

with open("mybili.html",mode="w") as f:
    f.write(resp.read().decode("utf-8"))
print("ok")
