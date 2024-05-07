#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLoadAsset.h"
#include "ETresChrUniqueID.h"
#include "ETresFoodstuffDropperID.h"
#include "TresWorldAppendAnimSetUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "TresWorldCodeLoadAsset.generated.h"

class UTresPhysMatEffectAsset;
class UParticleSystem;
class ATresGimmickActor;
class UTresAnimSet;
class UObject;
class UTresUIDataAssetWorld;
class USoundBase;
class UTresResidentTextures;

UCLASS(Blueprintable)
class TRESGAME_API UTresWorldCodeLoadAsset : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresPhysMatEffectAsset* m_CmnPhysMatEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SnowTailAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETresChrUniqueID, UTresAnimSet*> m_WorldAppendAnimSetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETresChrUniqueID, FTresWorldAppendAnimSetUnit> m_WorldAppendAnimSetListMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETresFoodstuffDropperID, TSubclassOf<ATresGimmickActor>> m_WorldFoodstuffDopperListMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USoundBase> m_BGMField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USoundBase> m_BGMBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAssetWorld* m_UIDataWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_Residents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_ResidentsRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresResidentTextures* m_ResidentTextures;
    
    UTresWorldCodeLoadAsset();
};

