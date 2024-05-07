#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "TresWorldMapObjData.generated.h"

class ATresWorldMapObject;

USTRUCT(BlueprintType)
struct FTresWorldMapObjData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWorldMapObject> m_MapObj;
    
    TRESGAME_API FTresWorldMapObjData();
};

