package z9;

import com.facebook.hermes.reactexecutor.HermesExecutor;
import com.facebook.jni.HybridData;
import com.facebook.jni.annotations.DoNotStrip;
import com.facebook.react.common.build.ReactBuildConfig;
import com.facebook.soloader.SoLoader;

/* loaded from: classes3.dex */
public final class a {
    public static void b() {
        if (HermesExecutor.f4562b == null) {
            SoLoader.m("hermesvm");
            SoLoader.m("hermes_executor");
            HermesExecutor.f4562b = ReactBuildConfig.DEBUG ? "Debug" : "Release";
        }
    }

    @DoNotStrip
    private final HybridData initHybrid(boolean z5, String str, long j) {
        HybridData initHybrid;
        initHybrid = HermesExecutor.initHybrid(z5, str, j);
        return initHybrid;
    }

    /* JADX INFO: Access modifiers changed from: private */
    @DoNotStrip
    public final HybridData initHybridDefaultConfig(boolean z5, String str) {
        HybridData initHybridDefaultConfig;
        initHybridDefaultConfig = HermesExecutor.initHybridDefaultConfig(z5, str);
        return initHybridDefaultConfig;
    }
}
