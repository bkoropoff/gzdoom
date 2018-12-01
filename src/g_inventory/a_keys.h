#ifndef A_KEYS_H
#define A_KEYS_H

class AActor;
class AInventory;
class PClassActor;

int P_CheckKeys (AActor *owner, int keynum, bool remote, bool quiet = false);
void P_InitKeyMessages ();
void P_DeinitKeyMessages ();
int P_GetMapColorForLock (int lock);
int P_GetMapColorForKey (AInventory *key);
int P_GetKeyTypeCount();
PClassActor *P_GetKeyType(int num);

#endif
