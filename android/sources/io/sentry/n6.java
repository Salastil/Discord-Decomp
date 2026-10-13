package io.sentry;

import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class n6 implements y1 {
    public final String E;
    public final String F;
    public final io.sentry.protocol.v G;
    public ConcurrentHashMap H;

    /* renamed from: d, reason: collision with root package name */
    public final io.sentry.protocol.v f11688d;

    /* renamed from: e, reason: collision with root package name */
    public final String f11689e;

    /* renamed from: i, reason: collision with root package name */
    public final String f11690i;

    /* renamed from: v, reason: collision with root package name */
    public final String f11691v;

    /* renamed from: w, reason: collision with root package name */
    public final String f11692w;

    /* renamed from: x, reason: collision with root package name */
    public final String f11693x;

    /* renamed from: y, reason: collision with root package name */
    public final String f11694y;

    public n6(io.sentry.protocol.v vVar, String str, String str2, String str3, String str4, String str5, String str6, String str7, io.sentry.protocol.v vVar2, String str8) {
        this.f11688d = vVar;
        this.f11689e = str;
        this.f11690i = str2;
        this.f11691v = str3;
        this.f11692w = str4;
        this.f11693x = str5;
        this.f11694y = str6;
        this.F = str7;
        this.G = vVar2;
        this.E = str8;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("trace_id").o0(iLogger, this.f11688d);
        y2Var.C0("public_key").s(this.f11689e);
        String str = this.f11690i;
        if (str != null) {
            y2Var.C0("release").s(str);
        }
        String str2 = this.f11691v;
        if (str2 != null) {
            y2Var.C0("environment").s(str2);
        }
        String str3 = this.f11692w;
        if (str3 != null) {
            y2Var.C0("user_id").s(str3);
        }
        String str4 = this.f11693x;
        if (str4 != null) {
            y2Var.C0("transaction").s(str4);
        }
        String str5 = this.f11694y;
        if (str5 != null) {
            y2Var.C0("sample_rate").s(str5);
        }
        String str6 = this.E;
        if (str6 != null) {
            y2Var.C0("sample_rand").s(str6);
        }
        String str7 = this.F;
        if (str7 != null) {
            y2Var.C0("sampled").s(str7);
        }
        io.sentry.protocol.v vVar = this.G;
        if (vVar != null) {
            y2Var.C0("replay_id").o0(iLogger, vVar);
        }
        ConcurrentHashMap concurrentHashMap = this.H;
        if (concurrentHashMap != null) {
            for (String str8 : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.H, str8, y2Var, str8, iLogger);
            }
        }
        y2Var.O();
    }
}
