#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TresHUDBase.generated.h"

class UMaterialInterface;
class AMatineeActor;

UCLASS(Blueprintable, NonTransient)
class ATresHUDBase : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_ScreenMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScreenMaterialX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScreenMaterialY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScreenMaterialW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScreenMaterialH;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMatineeActor*> m_MatineeActorArray;
    
    ATresHUDBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAreaRect(int32 X, int32 Y, int32 Width, int32 Height);
    
};

