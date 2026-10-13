package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.AbstractMap;
import java.util.Arrays;
import java.util.Date;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class a implements y1 {
    public AbstractMap E;
    public List F;
    public String G;
    public Boolean H;
    public Boolean I;
    public List J;
    public ConcurrentHashMap K;

    /* renamed from: d, reason: collision with root package name */
    public String f11748d;

    /* renamed from: e, reason: collision with root package name */
    public Date f11749e;

    /* renamed from: i, reason: collision with root package name */
    public String f11750i;

    /* renamed from: v, reason: collision with root package name */
    public String f11751v;

    /* renamed from: w, reason: collision with root package name */
    public String f11752w;

    /* renamed from: x, reason: collision with root package name */
    public String f11753x;

    /* renamed from: y, reason: collision with root package name */
    public String f11754y;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || a.class != obj.getClass()) {
            return false;
        }
        a aVar = (a) obj;
        return d9.a.k(this.f11748d, aVar.f11748d) && d9.a.k(this.f11749e, aVar.f11749e) && d9.a.k(this.f11750i, aVar.f11750i) && d9.a.k(this.f11751v, aVar.f11751v) && d9.a.k(this.f11752w, aVar.f11752w) && d9.a.k(this.f11753x, aVar.f11753x) && d9.a.k(this.f11754y, aVar.f11754y) && d9.a.k(this.E, aVar.E) && d9.a.k(this.H, aVar.H) && d9.a.k(this.F, aVar.F) && d9.a.k(this.G, aVar.G) && d9.a.k(this.I, aVar.I) && d9.a.k(this.J, aVar.J);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f11748d, this.f11749e, this.f11750i, this.f11751v, this.f11752w, this.f11753x, this.f11754y, this.E, this.H, this.F, this.G, this.I, this.J});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11748d != null) {
            y2Var.C0("app_identifier").s(this.f11748d);
        }
        if (this.f11749e != null) {
            y2Var.C0("app_start_time").o0(iLogger, this.f11749e);
        }
        if (this.f11750i != null) {
            y2Var.C0("device_app_hash").s(this.f11750i);
        }
        if (this.f11751v != null) {
            y2Var.C0("build_type").s(this.f11751v);
        }
        if (this.f11752w != null) {
            y2Var.C0("app_name").s(this.f11752w);
        }
        if (this.f11753x != null) {
            y2Var.C0("app_version").s(this.f11753x);
        }
        if (this.f11754y != null) {
            y2Var.C0("app_build").s(this.f11754y);
        }
        AbstractMap abstractMap = this.E;
        if (abstractMap != null && !abstractMap.isEmpty()) {
            y2Var.C0("permissions").o0(iLogger, this.E);
        }
        if (this.H != null) {
            y2Var.C0("in_foreground").q0(this.H);
        }
        if (this.F != null) {
            y2Var.C0("view_names").o0(iLogger, this.F);
        }
        if (this.G != null) {
            y2Var.C0("start_type").s(this.G);
        }
        if (this.I != null) {
            y2Var.C0("is_split_apks").q0(this.I);
        }
        List list = this.J;
        if (list != null && !list.isEmpty()) {
            y2Var.C0("split_names").o0(iLogger, this.J);
        }
        ConcurrentHashMap concurrentHashMap = this.K;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.K.get(str));
            }
        }
        y2Var.O();
    }
}
