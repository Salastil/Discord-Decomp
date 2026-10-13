package io.sentry.profilemeasurements;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class a implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public ConcurrentHashMap f11734d;

    /* renamed from: e, reason: collision with root package name */
    public String f11735e;

    /* renamed from: i, reason: collision with root package name */
    public Collection f11736i;

    public a(String str, AbstractCollection abstractCollection) {
        this.f11735e = str;
        this.f11736i = abstractCollection;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || a.class != obj.getClass()) {
            return false;
        }
        a aVar = (a) obj;
        return d9.a.k(this.f11734d, aVar.f11734d) && this.f11735e.equals(aVar.f11735e) && new ArrayList(this.f11736i).equals(new ArrayList(aVar.f11736i));
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11734d, this.f11735e, this.f11736i});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("unit").o0(iLogger, this.f11735e);
        y2Var.C0("values").o0(iLogger, this.f11736i);
        ConcurrentHashMap concurrentHashMap = this.f11734d;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.f11734d, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
