#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase_e_he90y.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_he904.generated.h"

class ATresHitActor_e_he90x;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_he904 : public ATresEnemyPawnBase_e_he90y {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IceActorBBKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TornadoActorBBKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresHitActor_e_he90x> m_MountCollActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresHitActor_e_he90x* m_MountCollActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresHitActor_e_he90x> m_MountCollActorClass_FR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresHitActor_e_he90x* m_MountCollActor_FR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vMountCollLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSolidMaterialParamNo;
    
    ATresEnemyPawn_e_he904(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void DebugSwapMountCollEnabled();
    
};

