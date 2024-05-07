#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresNpcPawn_n_ra201_RollHair.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresNpcPawn_n_ra201_RollHair : public ATresPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
public:
    ATresNpcPawn_n_ra201_RollHair(const FObjectInitializer& ObjectInitializer);
};

