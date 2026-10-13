package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class w implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final String f11897d;

    /* renamed from: e, reason: collision with root package name */
    public final String f11898e;

    /* renamed from: i, reason: collision with root package name */
    public HashMap f11899i;

    public w(String str, String str2) {
        d9.a.L(str, "name is required.");
        this.f11897d = str;
        d9.a.L(str2, "version is required.");
        this.f11898e = str2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && w.class == obj.getClass()) {
            w wVar = (w) obj;
            if (Objects.equals(this.f11897d, wVar.f11897d) && Objects.equals(this.f11898e, wVar.f11898e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Objects.hash(this.f11897d, this.f11898e);
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11897d);
        y2Var.C0("version").s(this.f11898e);
        HashMap hashMap = this.f11899i;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11899i.get(str));
            }
        }
        y2Var.O();
    }
}
