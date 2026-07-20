# Ping
Una libreria C++ leggera e professionale per verificare la raggiungibilità di host via protocollo HTTP/HTTPS, basata su `libcurl`.

## Installazione
### Requisiti
- `libcurl` installata (`sudo apt install libcurl4-openssl-dev` su Debian/Ubuntu)
- `cmake` (versione 3.10+)

### Build
```bash
mkdir build && cd build
cmake ..
make
sudo make install