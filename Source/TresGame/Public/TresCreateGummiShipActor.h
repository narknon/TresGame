#pragma once
#include "CoreMinimal.h"
#include "TresRealGummiShipStruct.h"
#include "GameFramework/Actor.h"
#include "TresEffectAttachParts.h"
#include "CreateGummiShipState.h"
#include "TresCreateGummiShipActor.generated.h"

class USceneComponent;
class UTresGummiEditorDataTableSet;
class USkinnedMeshComponent;
class UDecalComponent;

UCLASS(Blueprintable)
class ATresCreateGummiShipActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresRealGummiShipStruct m_SampleGummiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresRealGummiShipStruct m_PreviewGummiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEffectAttachParts> m_EffectAttachParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pUseCollisionGummiComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGummiEditorDataTableSet* m_pGummiEditorDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* m_pTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* m_pArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> m_DecalComp;
    
public:
    ATresCreateGummiShipActor(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION()
    void ChangeState(TEnumAsByte<CreateGummiShipState> State);
    
};

