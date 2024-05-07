#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickHairTree.generated.h"

UCLASS(Blueprintable, Config=Game)
class ATresGimmickHairTree : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_HairType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_ActionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ActionPointSize2D;
    
    ATresGimmickHairTree(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    FVector GetActionPointLocation(int32 InIndex);
    
};

