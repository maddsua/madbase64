# madbase64
## A Lightning-fast singe-header base64 encoder/decoder written in C

**The purpose:**

Encoding/decoding large sizes binary data. Yes, binary. I mean files, images and actually anything

**Why?**

Stackoverflow solutions are just garbage. No, really. Just look at that endless std::string pushbacks and countless temp buffers.

It could be one of the fastest base64 enc/decoder implementation. Or it's the dumbest one. Need your feedback to tell!

**Pros**
- Achieves speeds over 100 MB/s at a single thred of AMD Ryzen 3600
- No I'm serious, it's fast
- Straight-forward algorythm, no additional buffers and other nonsence
- Tested in my other projects

**Cons**
- Probably some explosive bugs (didn't find any yet)
- Makes python and JS devs cry

---

Console demo output:
```
Original:       This is a simple test string
Encoded:        VGhpcyBpcyBhIHNpbXBsZSB0ZXN0IHN0cmluZw==
Decoded:        This is a simple test string

Generated valid base64 string
Done with no errors
```

---

[The header file you're looking for](include/mbase64.h)

[Usage demo](demo/demo.c) / [.exe file](demo/demo.exe.gz)
