package io.sentry.protocol;

import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.Date;
import java.util.TimeZone;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class f implements y1 {
    public Float E;
    public Boolean F;
    public Boolean G;
    public e H;
    public Boolean I;
    public Long J;
    public Long K;
    public Long L;
    public Boolean M;
    public Long N;
    public Long O;
    public Long P;
    public Long Q;
    public Integer R;
    public Integer S;
    public Float T;
    public Integer U;
    public Date V;
    public TimeZone W;
    public String X;
    public String Y;
    public String Z;
    public Float a0;

    /* renamed from: b0, reason: collision with root package name */
    public Integer f11777b0;

    /* renamed from: c0, reason: collision with root package name */
    public Double f11778c0;

    /* renamed from: d, reason: collision with root package name */
    public String f11779d;

    /* renamed from: d0, reason: collision with root package name */
    public String f11780d0;

    /* renamed from: e, reason: collision with root package name */
    public String f11781e;

    /* renamed from: e0, reason: collision with root package name */
    public String f11782e0;

    /* renamed from: f0, reason: collision with root package name */
    public ConcurrentHashMap f11783f0;

    /* renamed from: i, reason: collision with root package name */
    public String f11784i;

    /* renamed from: v, reason: collision with root package name */
    public String f11785v;

    /* renamed from: w, reason: collision with root package name */
    public String f11786w;

    /* renamed from: x, reason: collision with root package name */
    public String f11787x;

    /* renamed from: y, reason: collision with root package name */
    public String[] f11788y;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && f.class == obj.getClass()) {
            f fVar = (f) obj;
            if (d9.a.k(this.f11779d, fVar.f11779d) && d9.a.k(this.f11781e, fVar.f11781e) && d9.a.k(this.f11784i, fVar.f11784i) && d9.a.k(this.f11785v, fVar.f11785v) && d9.a.k(this.f11786w, fVar.f11786w) && d9.a.k(this.f11787x, fVar.f11787x) && Arrays.equals(this.f11788y, fVar.f11788y) && d9.a.k(this.E, fVar.E) && d9.a.k(this.F, fVar.F) && d9.a.k(this.G, fVar.G) && this.H == fVar.H && d9.a.k(this.I, fVar.I) && d9.a.k(this.J, fVar.J) && d9.a.k(this.K, fVar.K) && d9.a.k(this.L, fVar.L) && d9.a.k(this.M, fVar.M) && d9.a.k(this.N, fVar.N) && d9.a.k(this.O, fVar.O) && d9.a.k(this.P, fVar.P) && d9.a.k(this.Q, fVar.Q) && d9.a.k(this.R, fVar.R) && d9.a.k(this.S, fVar.S) && d9.a.k(this.T, fVar.T) && d9.a.k(this.U, fVar.U) && d9.a.k(this.V, fVar.V) && d9.a.k(this.X, fVar.X) && d9.a.k(this.Y, fVar.Y) && d9.a.k(this.Z, fVar.Z) && d9.a.k(this.a0, fVar.a0) && d9.a.k(this.f11777b0, fVar.f11777b0) && d9.a.k(this.f11778c0, fVar.f11778c0) && d9.a.k(this.f11780d0, fVar.f11780d0) && d9.a.k(this.f11782e0, fVar.f11782e0)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (Arrays.hashCode(new Object[]{this.f11779d, this.f11781e, this.f11784i, this.f11785v, this.f11786w, this.f11787x, this.E, this.F, this.G, this.H, this.I, this.J, this.K, this.L, this.M, this.N, this.O, this.P, this.Q, this.R, this.S, this.T, this.U, this.V, this.W, this.X, this.Y, this.Z, this.a0, this.f11777b0, this.f11778c0, this.f11780d0, this.f11782e0}) * 31) + Arrays.hashCode(this.f11788y);
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11779d != null) {
            y2Var.C0(StackTraceHelper.NAME_KEY).s(this.f11779d);
        }
        if (this.f11781e != null) {
            y2Var.C0("manufacturer").s(this.f11781e);
        }
        if (this.f11784i != null) {
            y2Var.C0("brand").s(this.f11784i);
        }
        if (this.f11785v != null) {
            y2Var.C0("family").s(this.f11785v);
        }
        if (this.f11786w != null) {
            y2Var.C0("model").s(this.f11786w);
        }
        if (this.f11787x != null) {
            y2Var.C0("model_id").s(this.f11787x);
        }
        if (this.f11788y != null) {
            y2Var.C0("archs").o0(iLogger, this.f11788y);
        }
        if (this.E != null) {
            y2Var.C0("battery_level").a0(this.E);
        }
        if (this.F != null) {
            y2Var.C0("charging").q0(this.F);
        }
        if (this.G != null) {
            y2Var.C0(q.a.ONLINE_EXTRAS_KEY).q0(this.G);
        }
        if (this.H != null) {
            y2Var.C0("orientation").o0(iLogger, this.H);
        }
        if (this.I != null) {
            y2Var.C0("simulator").q0(this.I);
        }
        if (this.J != null) {
            y2Var.C0("memory_size").a0(this.J);
        }
        if (this.K != null) {
            y2Var.C0("free_memory").a0(this.K);
        }
        if (this.L != null) {
            y2Var.C0("usable_memory").a0(this.L);
        }
        if (this.M != null) {
            y2Var.C0("low_memory").q0(this.M);
        }
        if (this.N != null) {
            y2Var.C0("storage_size").a0(this.N);
        }
        if (this.O != null) {
            y2Var.C0("free_storage").a0(this.O);
        }
        if (this.P != null) {
            y2Var.C0("external_storage_size").a0(this.P);
        }
        if (this.Q != null) {
            y2Var.C0("external_free_storage").a0(this.Q);
        }
        if (this.R != null) {
            y2Var.C0("screen_width_pixels").a0(this.R);
        }
        if (this.S != null) {
            y2Var.C0("screen_height_pixels").a0(this.S);
        }
        if (this.T != null) {
            y2Var.C0("screen_density").a0(this.T);
        }
        if (this.U != null) {
            y2Var.C0("screen_dpi").a0(this.U);
        }
        if (this.V != null) {
            y2Var.C0("boot_time").o0(iLogger, this.V);
        }
        if (this.W != null) {
            y2Var.C0("timezone").o0(iLogger, this.W);
        }
        if (this.X != null) {
            y2Var.C0(StackTraceHelper.ID_KEY).s(this.X);
        }
        if (this.Z != null) {
            y2Var.C0("connection_type").s(this.Z);
        }
        if (this.a0 != null) {
            y2Var.C0("battery_temperature").a0(this.a0);
        }
        if (this.Y != null) {
            y2Var.C0("locale").s(this.Y);
        }
        if (this.f11777b0 != null) {
            y2Var.C0("processor_count").a0(this.f11777b0);
        }
        if (this.f11778c0 != null) {
            y2Var.C0("processor_frequency").a0(this.f11778c0);
        }
        if (this.f11780d0 != null) {
            y2Var.C0("cpu_description").s(this.f11780d0);
        }
        if (this.f11782e0 != null) {
            y2Var.C0("chipset").s(this.f11782e0);
        }
        ConcurrentHashMap concurrentHashMap = this.f11783f0;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.f11783f0.get(str));
            }
        }
        y2Var.O();
    }
}
