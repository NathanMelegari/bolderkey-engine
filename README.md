# BolderKey engine v0.1.0

This is the password and vault file generator that runs under BolderKey. The "engine" is responsible for creating passwords, inserting them into a file, generating a hash, encrypting them, and finally storing them in a vault on the client's device.

## Usage

```bash
git clone https://github.com/NathanMelegari/bolderkey-engine.git
cd bolderkey-engine/

mkdir build/
cd build/

cmake ..
cmake --build .
```

## Roadmap

- Password hash in 'src/core/hash.c' (hash, decrypt and verify)
- Addon for Node.js

## Because what to use BolderKey

Create your password in the instant and save their in your own device, easy, fast and totally privated.
Access [BolderKey](https://bolderkey.vercel.com) to use the open-source password intern management.
