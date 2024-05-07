#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "TresFRSnowCoverSwingTree.generated.h"

class ANavModifierVolume;
class UTresAtkCollComponent;

UCLASS(Blueprintable, Config=Game)
class ATresFRSnowCoverSwingTree : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ActionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavModifierVolume* m_NavModifierVolumeBP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl;
    
public:
    ATresFRSnowCoverSwingTree(const FObjectInitializer& ObjectInitializer);
};

