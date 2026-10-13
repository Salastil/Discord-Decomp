package com.facebook.react.modules.core;

import com.facebook.react.modules.core.JavaTimerManager;
import kotlin.jvm.functions.Function2;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Function2 {
    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        int timers$lambda$0;
        timers$lambda$0 = JavaTimerManager.timers$lambda$0((JavaTimerManager.Timer) obj, (JavaTimerManager.Timer) obj2);
        return Integer.valueOf(timers$lambda$0);
    }
}
