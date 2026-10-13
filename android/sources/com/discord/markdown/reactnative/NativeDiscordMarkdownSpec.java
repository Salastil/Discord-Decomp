package com.discord.markdown.reactnative;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeDiscordMarkdownSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "DiscordMarkdown";

    public NativeDiscordMarkdownSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract String parseToAstString(String str, String str2, Double d6);

    @ReactMethod(isBlockingSynchronousMethod = true)
    @a
    public abstract String unparseFromAstString(String str);
}
