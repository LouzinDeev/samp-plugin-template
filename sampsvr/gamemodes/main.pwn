#include <a_samp>
#include <zcmd>
#define SSCANF_NO_NICE_FEATURES
#include <sscanf2>
native Hello();
native PlayerWeapon(const playerid);
native Actor(const playerid);

main(){
    Hello();
}

CMD:weapon(playerid, params[]) {
    new id;
    if(sscanf(params, "d", id))
        return 1;
    GivePlayerWeapon(playerid, id, 100);
    return 1;
}

CMD:act(playerid, params[]) {
    Actor(playerid);
    return 1;
}

CMD:w(playerid, params[]) {
    PlayerWeapon(playerid);
    return 1;
}