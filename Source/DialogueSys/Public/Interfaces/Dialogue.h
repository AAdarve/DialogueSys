// This interface should be used by player character to hold and trigger functions related to the dialogue component

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Dialogue.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType)
class UDialogueActor : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DIALOGUESYS_API IDialogueActor
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//UFUNCTION(BlueprintCallable)
	//virtual void StartDialogue(UDataTable* DialogueDT) = 0;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FName GetCurrentDialogueRow();
};
