#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMapSetObjData.h"
#include "TresMapSetDataArray.h"
#include "TresMapSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresMapSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_CmdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMapSetObjData> m_ObjArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresMapSetDataArray> m_Data;
    
    UTresMapSet();
};

