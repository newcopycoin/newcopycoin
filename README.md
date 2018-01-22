
Numus core info

Numus is a PoW/PoS Hybrid cryptocurrency.

PoW Algo - Skein
Total POW: 100,000 Blocks

POW Reward Scheme: 
81 - 400 Block - 1 NMS Per Block (slow start)
81 - 10 000 Block - 10 NMS per Block
10 000 - 30 000 Block - 8 NMS per Block
30 001 - 50 000 Block - 6 NMS per Block
50 001 - 70 000 Block - 4 NMS per Block
70 001 - 100 000 Block - 2 NMS per Block

POS Reward Scheme: 
401 - 10 000 Block - 10 NMS per Block
10 001 - 30 000 Block - 12 NMS per Block
30 001 - 50 000 Block - 13 NMS per Block
50 001 - 70 000 Block - 14 NMS per Block
70 001 - 100 000 Block - 15 NMS per Block
100 001 - 200 000 Block - 10 NMS per Block
After 200 001 - 8 NMS per Block

Masternode Collaterial - 5 000 NMS.
Masternodes Rewards - 75% of POS Blocks.

Block Spacing: 45 Seconds
Diff Retarget: 5 Blocks
Maturity: 30 Blocks
Stake Minimum Age: 24 Hours

Port: 28121
RPC Port: 28122

40 MegaByte Maximum Block Size (40X Bitcoin Core)

Numus is dependent upon libsecp256k1 by sipa, the sources for which can be found here:
https://github.com/bitcoin/secp256k1

Numus includes an Address Index feature, based on the address index API (searchrawtransactions RPC command) implemented in Bitcoin Core but modified implementation to work with the NMS codebase (PoS coins maintain a txindex by default for instance).

Initialize the Address Index By Running with -reindexaddr Command Line Argument.  It may take 10-15 minutes to build the initial index.

Masternode configuration is very similiar to other Masternodes coins.

Masternode system requirement for running demon (Ubuntu):

sudo apt-get install libboost-all-dev software-properties-common libminiupnpc-dev
sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install libdb4.8++-dev

numus.conf (on masternode)
port=28121
masternode=1
masternodeaddr=8.8.8.8:28121
masternodeprivkey=putyourkeyhere
daemon=1
rpcuser=numus
rpcpassword=putyourpasswordhere
rpcallowip=127.0.0.1

