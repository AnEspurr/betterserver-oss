#include <maps/PrisonTower.h>
#include <States.h>

bool pt_init(Server* server){
    RAssert(map_ring(server, 0));
    RAssert(map_time(server, 2.585 * TICKSPERSEC, 20)); //155
    return true;
}