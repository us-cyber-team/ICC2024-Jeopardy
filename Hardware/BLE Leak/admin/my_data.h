const char *myData = "\x55\x48\x89\xe5\x48\x89\x7d\xd8\x48\x89\x75\xd0\x89\x55\xcc\xc7\x45\xfc\x00\x00\x00\x00\xe9\x7c\x02\x00\x00\x8b\x45\xfc\x48\x63\xd0\x48\x8b\x45\xd8\x48\x01\xd0\x0f\xb6\x00\x0f\xb6\xc0\xc1\xe0\x18\x89\xc2\x8b\x45\xfc\x48\x98\x48\x8d\x48\x01\x48\x8b\x45\xd8\x48\x01\xc8\x0f\xb6\x00\x0f\xb6\xc0\xc1\xe0\x10\x09\xc2\x8b\x45\xfc\x48\x98\x48\x8d\x48\x02\x48\x8b\x45\xd8\x48\x01\xc8\x0f\xb6\x00\x0f\xb6\xc0\xc1\xe0\x08\x09\xc2\x8b\x45\xfc\x48\x98\x48\x8d\x48\x03\x48\x8b\x45\xd8\x48\x01\xc8\x0f\xb6\x00\x0f\xb6\xc0\x09\xd0\x89\x45\xf8\x8b\x45\xfc\x48\x98\x48\x8d\x50\x04\x48\x8b\x45\xd8\x48\x01\xd0\x0f\xb6\x00\x0f\xb6\xc0\xc1\xe0\x18\x89\xc2\x8b\x45\xfc\x48\x98\x48\x8d\x48\x05\x48\x8b\x45\xd8\x48\x01\xc8\x0f\xb6\x00\x0f\xb6\xc0\xc1\xe0\x10\x09\xc2\x8b\x45\xfc\x48\x98\x48\x8d\x48\x06\x48\x8b\x45\xd8\x48\x01\xc8\x0f\xb6\x00\x0f\xb6\xc0\xc1\xe0\x08\x09\xc2\x8b\x45\xfc\x48\x98\x48\x8d\x48\x07\x48\x8b\x45\xd8\x48\x01\xc8\x0f\xb6\x00\x0f\xb6\xc0\x09\xd0\x89\x45\xf4\xc7\x45\xf0\x00\x00\x00\x00\x8b\x45\xf8\x33\x45\xf4\x35\xb9\x79\x37\x9e\x89\x45\xe0\x8b\x45\xf8\x35\x01\xef\xcd\xab\x89\x45\xec\x8b\x45\xf4\x35\x78\x56\x34\x12\x89\x45\xe8\xc7\x45\xe4\x00\x00\x00\x00\xe9\x93\x00\x00\x00\x8b\x45\xe0\x33\x45\xec\x01\x45\xf0\x8b\x45\xf4\xc1\xe0\x04\x89\xc2\x8b\x05\x00\x00\x00\x00\x33\x45\xe8\x8d\x0c\x02\x8b\x55\xf4\x8b\x45\xf0\x01\xd0\x31\xc1\x89\xca\x8b\x45\xf4\xc1\xe8\x05\x89\xc1\x8b\x05\x00\x00\x00\x00\x01\xc8\x33\x45\xec\x31\xd0\x01\x45\xf8\x8b\x45\xf8\xc1\xe0\x04\x89\xc2\x8b\x05\x00\x00\x00\x00\x33\x45\xf0\x8d\x0c\x02\x8b\x55\xf8\x8b\x45\xf0\x01\xd0\x31\xc1\x89\xca\x8b\x45\xf8\xc1\xe8\x05\x89\xc1\x8b\x05\x00\x00\x00\x00\x01\xc8\x33\x45\xe8\x31\xd0\x01\x45\xf4\x8b\x55\xf8\x8b\x45\xf4\x01\xd0\x31\x45\xec\x8b\x55\xf0\x8b\x45\xe0\x01\xd0\x31\x45\xe8\x83\x45\xe4\x01\x83\x7d\xe4\x1f\x0f\x8e\x63\xff\xff\xff\x8b\x45\xf8\xc1\xe8\x18\x89\xc1\x8b\x45\xfc\x48\x63\xd0\x48\x8b\x45\xd0\x48\x01\xd0\x89\xca\x88\x10\x8b\x45\xf8\xc1\xe8\x10\x89\xc1\x8b\x45\xfc\x48\x98\x48\x8d\x50\x01\x48\x8b\x45\xd0\x48\x01\xd0\x89\xca\x88\x10\x8b\x45\xf8\xc1\xe8\x08\x89\xc1\x8b\x45\xfc\x48\x98\x48\x8d\x50\x02\x48\x8b\x45\xd0\x48\x01\xd0\x89\xca\x88\x10\x8b\x45\xfc\x48\x98\x48\x8d\x50\x03\x48\x8b\x45\xd0\x48\x01\xd0\x8b\x55\xf8\x88\x10\x8b\x45\xf4\xc1\xe8\x18\x89\xc1\x8b\x45\xfc\x48\x98\x48\x8d\x50\x04\x48\x8b\x45\xd0\x48\x01\xd0\x89\xca\x88\x10\x8b\x45\xf4\xc1\xe8\x10\x89\xc1\x8b\x45\xfc\x48\x98\x48\x8d\x50\x05\x48\x8b\x45\xd0\x48\x01\xd0\x89\xca\x88\x10\x8b\x45\xf4\xc1\xe8\x08\x89\xc1\x8b\x45\xfc\x48\x98\x48\x8d\x50\x06\x48\x8b\x45\xd0\x48\x01\xd0\x89\xca\x88\x10\x8b\x45\xfc\x48\x98\x48\x8d\x50\x07\x48\x8b\x45\xd0\x48\x01\xd0\x8b\x55\xf4\x88\x10\x83\x45\xfc\x08\x8b\x45\xfc\x3b\x45\xcc\x0f\x8c\x78\xfd\xff\xff\x90\x90\x5d\xc3\x00\x00";
