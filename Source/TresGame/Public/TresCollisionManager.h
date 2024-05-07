#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresCollMgrDetectUpdateGrassBumpTickFunction.h"
#include "TresCollMgrDetectPhysMatTickFunction.h"
#include "TresCollMgrFootStepEffectGenTickFunction.h"
#include "TresCollMgrDetectBodyCollTickFunction.h"
#include "TresCollisionManager.generated.h"

class UTresRootComponent;
class UTresGrassBumpAttachObj;
class ATresCharPawnBase;
class UTresSkeletalMeshComponent;
class UTresBodyCollComponent;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ATresCollisionManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, EditAnywhere, Instanced, Transient)
    TMap<TWeakObjectPtr<UTresRootComponent>, UTresGrassBumpAttachObj*> m_DetectGrassBumpMap;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UTresRootComponent>> m_DetectPhysMatComponentList;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UTresSkeletalMeshComponent>> m_FootStepComponentList;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATresCharPawnBase>> m_FootStepEffectGenPawnList;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UTresBodyCollComponent>> m_DetectBodyCompList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCollMgrDetectUpdateGrassBumpTickFunction m_UpdateGrassBumpTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCollMgrDetectPhysMatTickFunction m_DetectPhysMatTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCollMgrFootStepEffectGenTickFunction m_FootStepEffectGenTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCollMgrDetectBodyCollTickFunction m_DetectBodyCollTickFunction;
    
public:
    ATresCollisionManager(const FObjectInitializer& ObjectInitializer);
};

