#pragma once
#include "CoreMinimal.h"
#include "TresDamageInfo.h"
#include "TresGimmickKilledCharSignatureDelegate.generated.h"

class ATresPawnBase;
class ATresGimmickActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGimmickKilledCharSignature, ATresGimmickActor*, AttackCauser, ATresPawnBase*, KilledPawn, const FTresDamageInfo&, DamageInfo);

