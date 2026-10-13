package io.sentry;

import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public final class l3 implements y1 {

    /* renamed from: d, reason: collision with root package name */
    public Integer f11647d;

    /* renamed from: e, reason: collision with root package name */
    public List f11648e;

    /* renamed from: i, reason: collision with root package name */
    public HashMap f11649i;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && l3.class == obj.getClass()) {
            l3 l3Var = (l3) obj;
            if (d9.a.k(this.f11647d, l3Var.f11647d) && d9.a.k(this.f11648e, l3Var.f11648e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11647d, this.f11648e});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11647d != null) {
            y2Var.C0("segment_id").a0(this.f11647d);
        }
        HashMap hashMap = this.f11649i;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11649i.get(str));
            }
        }
        y2Var.O();
        y2Var.x(true);
        if (this.f11647d != null) {
            y2Var.f0();
        }
        List list = this.f11648e;
        if (list != null) {
            y2Var.o0(iLogger, list);
        }
        y2Var.x(false);
    }
}
