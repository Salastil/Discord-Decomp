package io.sentry;

import java.util.HashMap;
import java.util.concurrent.Callable;

/* loaded from: classes3.dex */
public final class p4 implements y1 {
    public final String E;
    public HashMap F;

    /* renamed from: d, reason: collision with root package name */
    public final String f11727d;

    /* renamed from: e, reason: collision with root package name */
    public final Integer f11728e;

    /* renamed from: i, reason: collision with root package name */
    public final String f11729i;

    /* renamed from: v, reason: collision with root package name */
    public final String f11730v;

    /* renamed from: w, reason: collision with root package name */
    public final v4 f11731w;

    /* renamed from: x, reason: collision with root package name */
    public final int f11732x;

    /* renamed from: y, reason: collision with root package name */
    public final Callable f11733y;

    public p4(v4 v4Var, int i5, String str, String str2, String str3, String str4, Integer num) {
        this.f11731w = v4Var;
        this.f11727d = str;
        this.f11732x = i5;
        this.f11729i = str2;
        this.f11733y = null;
        this.E = str3;
        this.f11730v = str4;
        this.f11728e = num;
    }

    public final int a() {
        Callable callable = this.f11733y;
        if (callable == null) {
            return this.f11732x;
        }
        try {
            return ((Integer) callable.call()).intValue();
        } catch (Throwable unused) {
            return -1;
        }
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        String str = this.f11727d;
        if (str != null) {
            y2Var.C0("content_type").s(str);
        }
        String str2 = this.f11729i;
        if (str2 != null) {
            y2Var.C0("filename").s(str2);
        }
        y2Var.C0("type").o0(iLogger, this.f11731w);
        String str3 = this.E;
        if (str3 != null) {
            y2Var.C0("attachment_type").s(str3);
        }
        String str4 = this.f11730v;
        if (str4 != null) {
            y2Var.C0("platform").s(str4);
        }
        Integer num = this.f11728e;
        if (num != null) {
            y2Var.C0("item_count").a0(num);
        }
        y2Var.C0("length").g(a());
        HashMap hashMap = this.F;
        if (hashMap != null) {
            for (String str5 : hashMap.keySet()) {
                Object obj = this.F.get(str5);
                y2Var.C0(str5);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
    }

    public p4(v4 v4Var, Callable callable, String str, String str2, String str3) {
        this(v4Var, callable, str, str2, str3, (String) null, (Integer) null);
    }

    public p4(v4 v4Var, Callable callable, String str, String str2, String str3, String str4, Integer num) {
        d9.a.L(v4Var, "type is required");
        this.f11731w = v4Var;
        this.f11727d = str;
        this.f11732x = -1;
        this.f11729i = str2;
        this.f11733y = callable;
        this.E = str3;
        this.f11730v = str4;
        this.f11728e = num;
    }
}
