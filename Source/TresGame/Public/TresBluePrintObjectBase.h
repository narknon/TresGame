#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresBluePrintObjectBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresBluePrintObjectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_InitAfterExecute;
    
public:
    UTresBluePrintObjectBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void InitBluePrint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUserName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayBluePrint();
    
};

