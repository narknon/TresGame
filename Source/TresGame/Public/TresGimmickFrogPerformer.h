#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickFrogPerformer.generated.h"

class UTresSkeletalMeshComponent;
class UAnimSequence;
class AActor;
class USoundBase;
class ATresGimmickFrogPerformer;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickFrogPerformer : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Broken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PlayBrokenSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachedSoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_PerformAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_IdleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_BrokenAnim;
    
public:
    ATresGimmickFrogPerformer(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSpeedRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterFrog(ATresGimmickFrogPerformer* pFrog);
    
    UFUNCTION(BlueprintCallable)
    void SetBroken(bool _Broken);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeSpeedRate(float Rate);
    
};

