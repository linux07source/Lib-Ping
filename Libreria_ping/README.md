# Ping

Una libreria C++ leggera e professionale per verificare la raggiungibilità di host via protocollo HTTP/HTTPS, basata su `libcurl`.

## Installazione

### 1. Requisiti
Assicurati di avere `cmake` (3.10+) installato sul tuo sistema.

*   **Linux (Debian/Ubuntu/Pop!_OS):**
    ```bash
    sudo apt update
    sudo apt install libcurl4-openssl-dev cmake build-essential
    ```
*   **macOS:**
    ```bash
    brew install curl cmake
    ```

### 2. Build dai sorgenti (Cross-Platform)
La procedura di compilazione è identica per entrambi i sistemi:

```bash
# Clona il repository
git clone https://github.com/linux07source/Lib-Ping.git
cd TUA-REPO

# Compila
mkdir build && cd build
cmake ..
make

# Installa nel sistema
sudo make install
