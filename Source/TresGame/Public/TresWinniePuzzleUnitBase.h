#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "WinniePuzzleUnitType.h"
#include "TresWinniePuzzleUnitBase.generated.h"

class ATresWinniePuzzleCollisionUnit;

UCLASS(Abstract, Blueprintable)
class ATresWinniePuzzleUnitBase : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleUnitType UnitTypeRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWinniePuzzleCollisionUnit* m_pCollisionUnit;
    
public:
    ATresWinniePuzzleUnitBase(const FObjectInitializer& ObjectInitializer);
};

