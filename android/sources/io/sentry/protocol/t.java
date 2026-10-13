package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.u4;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.HashMap;
import java.util.concurrent.CopyOnWriteArraySet;

/* loaded from: classes3.dex */
public final class t implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public String f11883d;

    /* renamed from: e, reason: collision with root package name */
    public String f11884e;

    /* renamed from: i, reason: collision with root package name */
    public CopyOnWriteArraySet f11885i;

    /* renamed from: v, reason: collision with root package name */
    public CopyOnWriteArraySet f11886v;

    /* renamed from: w, reason: collision with root package name */
    public HashMap f11887w;

    public t(String str, String str2) {
        this.f11883d = str;
        this.f11884e = str2;
    }

    public final String a() {
        return this.f11883d;
    }

    public final String b() {
        return this.f11884e;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && t.class == obj.getClass()) {
            t tVar = (t) obj;
            if (this.f11883d.equals(tVar.f11883d) && this.f11884e.equals(tVar.f11884e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11883d, this.f11884e});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11883d);
        y2Var.C0("version").s(this.f11884e);
        CopyOnWriteArraySet copyOnWriteArraySet = this.f11885i;
        if (copyOnWriteArraySet == null) {
            copyOnWriteArraySet = u4.d().f12037b;
        }
        CopyOnWriteArraySet copyOnWriteArraySet2 = this.f11886v;
        if (copyOnWriteArraySet2 == null) {
            copyOnWriteArraySet2 = u4.d().a;
        }
        if (!copyOnWriteArraySet.isEmpty()) {
            y2Var.C0("packages").o0(iLogger, copyOnWriteArraySet);
        }
        if (!copyOnWriteArraySet2.isEmpty()) {
            y2Var.C0("integrations").o0(iLogger, copyOnWriteArraySet2);
        }
        HashMap hashMap = this.f11887w;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11887w.get(str));
            }
        }
        y2Var.O();
    }
}
