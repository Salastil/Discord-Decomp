package io.sentry;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class s6 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.protocol.v f11979d;

    /* renamed from: e, reason: collision with root package name */
    public final String f11980e;

    /* renamed from: i, reason: collision with root package name */
    public final String f11981i;

    /* renamed from: v, reason: collision with root package name */
    public final String f11982v;

    /* renamed from: w, reason: collision with root package name */
    public HashMap f11983w;

    public s6(io.sentry.protocol.v vVar, String str, String str2, String str3) {
        this.f11979d = vVar;
        this.f11980e = str;
        this.f11981i = str2;
        this.f11982v = str3;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("event_id");
        this.f11979d.serialize(y2Var, iLogger);
        String str = this.f11980e;
        if (str != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(str);
        }
        String str2 = this.f11981i;
        if (str2 != null) {
            y2Var.C0("email").s(str2);
        }
        String str3 = this.f11982v;
        if (str3 != null) {
            y2Var.C0("comments").s(str3);
        }
        HashMap hashMap = this.f11983w;
        if (hashMap != null) {
            for (String str4 : hashMap.keySet()) {
                y2Var.C0(str4).o0(iLogger, this.f11983w.get(str4));
            }
        }
        y2Var.O();
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("UserFeedback{eventId=");
        sb2.append(this.f11979d);
        sb2.append(", name='");
        sb2.append(this.f11980e);
        sb2.append("', email='");
        sb2.append(this.f11981i);
        sb2.append("', comments='");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f11982v, "'}");
    }
}
