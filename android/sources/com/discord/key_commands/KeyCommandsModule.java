package com.discord.key_commands;

import com.discord.codegen.NativeKeyCommandsModuleSpec;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.runtime.r;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0014\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\t0\u0007H\u0014J\u0012\u0010\n\u001a\u00020\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\rH\u0016J\b\u0010\u000e\u001a\u00020\u000bH\u0016¨\u0006\u000f"}, d2 = {"Lcom/discord/key_commands/KeyCommandsModule;", "Lcom/discord/codegen/NativeKeyCommandsModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "getTypedExportedConstants", "", "", "", "setKeyCommands", "", "keyCommands", "Lcom/facebook/react/bridge/ReadableArray;", "invalidate", "key_commands_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nKeyCommandsModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 KeyCommandsModule.kt\ncom/discord/key_commands/KeyCommandsModule\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,39:1\n1#2:40\n*E\n"})
/* loaded from: classes.dex */
public final class KeyCommandsModule extends NativeKeyCommandsModuleSpec {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public KeyCommandsModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        KeyCommandsRegistry.INSTANCE.setOnKeyCommand(new r(22, this));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit _init_$lambda$1(KeyCommandsModule keyCommandsModule, String eventName) {
        Intrinsics.checkNotNullParameter(eventName, "eventName");
        WritableMap createMap = Arguments.createMap();
        createMap.putString("eventName", eventName);
        keyCommandsModule.emitOnKeyCommand(createMap);
        return Unit.a;
    }

    @Override // com.discord.codegen.NativeKeyCommandsModuleSpec
    @NotNull
    public Map<String, Object> getTypedExportedConstants() {
        return v0.h(new Pair("keyModifierAlphaShift", Integer.valueOf(KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT)), new Pair("keyModifierShift", Integer.valueOf(KeyCommandDescriptor.ModifierFlags.SHIFT)), new Pair("keyModifierControl", Integer.valueOf(KeyCommandDescriptor.ModifierFlags.CONTROL)), new Pair("keyModifierAlternate", Integer.valueOf(KeyCommandDescriptor.ModifierFlags.ALTERNATE)), new Pair("keyModifierCommand", Integer.valueOf(KeyCommandDescriptor.ModifierFlags.COMMAND)), new Pair("keyModifierNumericPad", Integer.valueOf(KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD)));
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        KeyCommandsRegistry keyCommandsRegistry = KeyCommandsRegistry.INSTANCE;
        keyCommandsRegistry.removeAllKeyCommands();
        keyCommandsRegistry.setOnKeyCommand(null);
        super.invalidate();
    }

    @Override // com.discord.codegen.NativeKeyCommandsModuleSpec
    public void setKeyCommands(ReadableArray keyCommands) {
        KeyCommandsRegistry.INSTANCE.updateKeyCommands(KeyCommandDescriptor.INSTANCE.listFromReadableArray(keyCommands));
    }
}
