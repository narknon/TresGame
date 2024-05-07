#pragma once
#include "CoreMinimal.h"
#include "TresEquipmentSetNameTable.h"
#include "TresEquipmentSetTable.generated.h"

USTRUCT(BlueprintType)
struct FTresEquipmentSetTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipName;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FName EquipSetName[25];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentSetNameTable> m_EquipSetNames;
    
    TRESGAME_API FTresEquipmentSetTable();
};

