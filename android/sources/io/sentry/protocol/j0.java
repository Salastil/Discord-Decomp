package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.HashMap;
import java.util.List;

/* loaded from: classes3.dex */
public final class j0 implements y1 {
    public Double E;
    public String F;
    public Double G;
    public List H;
    public HashMap I;

    /* renamed from: d, reason: collision with root package name */
    public String f11817d;

    /* renamed from: e, reason: collision with root package name */
    public String f11818e;

    /* renamed from: i, reason: collision with root package name */
    public String f11819i;

    /* renamed from: v, reason: collision with root package name */
    public String f11820v;

    /* renamed from: w, reason: collision with root package name */
    public Double f11821w;

    /* renamed from: x, reason: collision with root package name */
    public Double f11822x;

    /* renamed from: y, reason: collision with root package name */
    public Double f11823y;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11817d != null) {
            y2Var.C0("rendering_system").s(this.f11817d);
        }
        if (this.f11818e != null) {
            y2Var.C0("type").s(this.f11818e);
        }
        if (this.f11819i != null) {
            y2Var.C0("identifier").s(this.f11819i);
        }
        if (this.f11820v != null) {
            y2Var.C0("tag").s(this.f11820v);
        }
        if (this.f11821w != null) {
            y2Var.C0("width").a0(this.f11821w);
        }
        if (this.f11822x != null) {
            y2Var.C0("height").a0(this.f11822x);
        }
        if (this.f11823y != null) {
            y2Var.C0("x").a0(this.f11823y);
        }
        if (this.E != null) {
            y2Var.C0("y").a0(this.E);
        }
        if (this.F != null) {
            y2Var.C0("visibility").s(this.F);
        }
        if (this.G != null) {
            y2Var.C0("alpha").a0(this.G);
        }
        List list = this.H;
        if (list != null && !list.isEmpty()) {
            y2Var.C0("children").o0(iLogger, this.H);
        }
        HashMap hashMap = this.I;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.I.get(str));
            }
        }
        y2Var.O();
    }
}
