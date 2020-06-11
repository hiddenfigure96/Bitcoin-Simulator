#ifndef SELFISH_MINER_H
#define SELFISH_MINER_H

#include "bitcoin-miner.h"

namespace blockchain_attacks 
{
    class ns3::Address;
    class ns3::Socket;
    class ns3::Packet;

    class SelfishMiner : public ns3::BitcoinMiner
    {
    public:
        static ns3::TypeId GetTypeId(void);

        SelfishMiner();

    protected:
        virtual void StartApplication(void); 
        virtual void StopApplication(void);

        virtual void MineBlock(void);

        virtual void DoDispose(void);

    private:
    };
};

#endif