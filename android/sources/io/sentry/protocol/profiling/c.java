package io.sentry.protocol.profiling;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class c implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11869d;

    /* renamed from: e, reason: collision with root package name */
    public int f11870e;

    /* renamed from: i, reason: collision with root package name */
    public HashMap f11871i;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11869d != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).o0(iLogger, this.f11869d);
        }
        y2Var.C0("priority").o0(iLogger, Integer.valueOf(this.f11870e));
        HashMap hashMap = this.f11871i;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11871i.get(str));
            }
        }
        y2Var.O();
    }
}
