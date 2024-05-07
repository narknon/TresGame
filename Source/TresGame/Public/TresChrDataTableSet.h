#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ETresChrDataTableSetType.h"
#include "TresChrDataTableSet.generated.h"

class UDataTable;
class UTresVoiceGroupSet;

UCLASS(Blueprintable)
class TRESGAME_API UTresChrDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrDataTableSetType m_DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_BaseParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresVoiceGroupSet* m_VoiceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SEData;
    
public:
    UTresChrDataTableSet();
};

