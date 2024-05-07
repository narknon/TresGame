#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefWeapon.h"
#include "TresShortcutWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FTresShortcutWeaponData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefWeapon Type1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefWeapon Type2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefWeapon Type3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefWeapon Type4;
    
    TRESGAME_API FTresShortcutWeaponData();
};

