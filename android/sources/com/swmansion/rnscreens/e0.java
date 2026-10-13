package com.swmansion.rnscreens;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e0 {
    public Integer a;

    public final void a(ScreenStackHeaderConfig config, Screen screen) {
        Intrinsics.checkNotNullParameter(config, "config");
        int height = config.F ? 0 : config.getToolbar().getHeight();
        Integer num = this.a;
        if (num != null && height == num.intValue()) {
            return;
        }
        this.a = Integer.valueOf(height);
        if (screen != null) {
            screen.notifyHeaderHeightChange$react_native_screens_release(height);
        }
    }
}
