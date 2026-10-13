package io.sentry.rrweb;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class j extends b implements y1 {

    /* renamed from: i, reason: collision with root package name */
    public String f11958i;

    /* renamed from: v, reason: collision with root package name */
    public int f11959v;

    /* renamed from: w, reason: collision with root package name */
    public int f11960w;

    /* renamed from: x, reason: collision with root package name */
    public HashMap f11961x;

    public j() {
        super(c.Meta);
        this.f11958i = "";
    }

    @Override // io.sentry.rrweb.b
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || j.class != obj.getClass() || !super.equals(obj)) {
            return false;
        }
        j jVar = (j) obj;
        return this.f11959v == jVar.f11959v && this.f11960w == jVar.f11960w && d9.a.k(this.f11958i, jVar.f11958i);
    }

    @Override // io.sentry.rrweb.b
    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(super.hashCode()), this.f11958i, Integer.valueOf(this.f11959v), Integer.valueOf(this.f11960w)});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").o0(iLogger, this.f11942d);
        y2Var.C0("timestamp").g(this.f11943e);
        y2Var.C0("data");
        y2Var.n0();
        y2Var.C0("href").s(this.f11958i);
        y2Var.C0("height").g(this.f11959v);
        y2Var.C0("width").g(this.f11960w);
        HashMap hashMap = this.f11961x;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                Object obj = this.f11961x.get(str);
                y2Var.C0(str);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
        y2Var.O();
    }
}
