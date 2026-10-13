package io.sentry.protocol;

import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.AbstractMap;
import java.util.HashMap;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class m implements y1 {
    public Integer E;
    public Integer F;
    public Boolean G;
    public HashMap H;

    /* renamed from: d, reason: collision with root package name */
    public String f11835d;

    /* renamed from: e, reason: collision with root package name */
    public String f11836e;

    /* renamed from: i, reason: collision with root package name */
    public String f11837i;

    /* renamed from: v, reason: collision with root package name */
    public Boolean f11838v;

    /* renamed from: w, reason: collision with root package name */
    public AbstractMap f11839w;

    /* renamed from: x, reason: collision with root package name */
    public ConcurrentHashMap f11840x;

    /* renamed from: y, reason: collision with root package name */
    public Boolean f11841y;

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        if (this.f11835d != null) {
            y2Var.C0("type").s(this.f11835d);
        }
        if (this.f11836e != null) {
            y2Var.C0("description").s(this.f11836e);
        }
        if (this.f11837i != null) {
            y2Var.C0("help_link").s(this.f11837i);
        }
        if (this.f11838v != null) {
            y2Var.C0("handled").q0(this.f11838v);
        }
        if (this.f11839w != null) {
            y2Var.C0("meta").o0(iLogger, this.f11839w);
        }
        if (this.f11840x != null) {
            y2Var.C0("data").o0(iLogger, this.f11840x);
        }
        if (this.f11841y != null) {
            y2Var.C0("synthetic").q0(this.f11841y);
        }
        if (this.E != null) {
            y2Var.C0("exception_id").o0(iLogger, this.E);
        }
        if (this.F != null) {
            y2Var.C0("parent_id").o0(iLogger, this.F);
        }
        if (this.G != null) {
            y2Var.C0("is_exception_group").q0(this.G);
        }
        HashMap hashMap = this.H;
        if (hashMap != null) {
            for (String str : hashMap.keySet()) {
                y2Var.C0(str).o0(iLogger, this.H.get(str));
            }
        }
        y2Var.O();
    }
}
