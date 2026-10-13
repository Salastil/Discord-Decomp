package com.discord.image.fresco.config;

import android.app.ActivityManager;
import android.content.ComponentCallbacks2;
import android.content.Context;
import android.content.res.Configuration;
import com.facebook.imagepipeline.core.ImagePipeline;
import d9.a;
import fo.d;
import io.sentry.util.m;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\b"}, d2 = {"Lcom/discord/image/fresco/config/FrescoMemoryTrimmer;", "", "<init>", "()V", "initialize", "", "context", "Landroid/content/Context;", "fresco_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class FrescoMemoryTrimmer {

    @NotNull
    public static final FrescoMemoryTrimmer INSTANCE = new FrescoMemoryTrimmer();

    private FrescoMemoryTrimmer() {
    }

    public final void initialize(@NotNull final Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        context.registerComponentCallbacks(new ComponentCallbacks2(context) { // from class: com.discord.image.fresco.config.FrescoMemoryTrimmer$initialize$1
            private final ActivityManager activityManager;
            private final ActivityManager.MemoryInfo memoryInfo = new ActivityManager.MemoryInfo();

            {
                this.activityManager = (ActivityManager) context.getSystemService(ActivityManager.class);
            }

            private final void clearMemoryCaches() {
                ImagePipeline r5 = a.r();
                m mVar = new m(1);
                r5.f4601f.G0(mVar);
                r5.f4602g.G0(mVar);
            }

            private final boolean getMemoryIsLow() {
                this.activityManager.getMemoryInfo(this.memoryInfo);
                Unit unit = Unit.a;
                return this.memoryInfo.lowMemory;
            }

            @Override // android.content.ComponentCallbacks
            public void onConfigurationChanged(Configuration newConfig) {
                Intrinsics.checkNotNullParameter(newConfig, "newConfig");
            }

            @Override // android.content.ComponentCallbacks
            @d
            public void onLowMemory() {
                clearMemoryCaches();
            }

            @Override // android.content.ComponentCallbacks2
            public void onTrimMemory(int level) {
                if ((level == 20 || level == 40) && getMemoryIsLow()) {
                    clearMemoryCaches();
                }
                if (level == 5 || level == 10 || level == 15 || level == 60 || level == 80) {
                    clearMemoryCaches();
                }
            }
        });
    }
}
