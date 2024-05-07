#pragma once
#include "CoreMinimal.h"
#include "TresGimmickStaticBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmick_Ts03_CraneObject.generated.h"

class ATresGimmick_Ts03_Crane;
class UTresBodyCollComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmick_Ts03_CraneObject : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* BodyCollComponent;
    
public:
    ATresGimmick_Ts03_CraneObject(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetParentCrane(ATresGimmick_Ts03_Crane* pParent);
    
    UFUNCTION(BlueprintCallable)
    void CraneRemoveCollisionShape(const FName InTagName, bool bUpdate);
    
    UFUNCTION(BlueprintCallable)
    void CraneAppendCollisionShape(const FName InTagName, FVector InSize, FVector InRelativeLocaiton, FRotator InRelativeRotation, bool bUpdate);
    
};

