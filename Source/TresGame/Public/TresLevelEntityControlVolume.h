#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ObjectType -FallbackName=ESQEX_ObjectType
#include "UObject/NoExportTypes.h"
#include "TresLevelEntityControlVolume.generated.h"

class UTresLevelEntitySequence;
class UTresLevelEntityControlVolumeData;
class AActor;
class UObject;
class UTresLevelEntityManager;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class TRESGAME_API ATresLevelEntityControlVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLevelEntitySequence* m_EnterSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLevelEntitySequence* m_ExitSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTresLevelEntityControlVolumeData*> m_SharedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresLevelEntityManager* m_Manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESQEX_ObjectType m_ControlObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_BattleVolumeGUID;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UObject> m_BattleOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_WarpRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_DistanceBattleOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_ImmediateInvoke;
    
    ATresLevelEntityControlVolume(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void InvokeEndOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBeginOverlap(bool TestOverlap, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool ImmediateInvoke);
    
};

