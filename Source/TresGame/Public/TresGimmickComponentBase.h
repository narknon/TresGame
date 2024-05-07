#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresGimmickComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickComponentBase : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsGimmickActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bOwnerHaveTeamNo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TeamNo;
    
public:
    UTresGimmickComponentBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsGimmickComponentActive() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmickComponent();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmickComponent();
    
};

