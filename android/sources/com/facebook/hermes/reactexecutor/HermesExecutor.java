package com.facebook.hermes.reactexecutor;

import a3.e;
import com.facebook.jni.HybridData;
import com.facebook.jni.annotations.DoNotStrip;
import com.facebook.react.bridge.JavaScriptExecutor;
import kotlin.Metadata;
import z9.a;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001:\u0001\u0002¨\u0006\u0003"}, d2 = {"Lcom/facebook/hermes/reactexecutor/HermesExecutor;", "Lcom/facebook/react/bridge/JavaScriptExecutor;", "z9/a", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class HermesExecutor extends JavaScriptExecutor {
    public static final a a = new a();

    /* renamed from: b, reason: collision with root package name */
    public static String f4562b;

    static {
        a.b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    @DoNotStrip
    public static final native HybridData initHybrid(boolean z5, String str, long j);

    /* JADX INFO: Access modifiers changed from: private */
    @DoNotStrip
    public static final native HybridData initHybridDefaultConfig(boolean z5, String str);

    @Override // com.facebook.react.bridge.JavaScriptExecutor
    public final String getName() {
        return e.k("HermesExecutor", f4562b);
    }
}
