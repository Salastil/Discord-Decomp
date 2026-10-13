package io.sentry;

import com.discord.jank_stats.JankScreenContext;
import java.io.File;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.Callable;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class g3 implements y1 {
    public String E;
    public String F;
    public boolean G;
    public String H;
    public String J;
    public String K;
    public String L;
    public final ArrayList M;
    public String N;
    public String O;
    public String P;
    public String Q;
    public String R;
    public String S;
    public String T;
    public String U;
    public String V;
    public Date W;
    public final Map X;
    public ConcurrentHashMap Z;

    /* renamed from: d, reason: collision with root package name */
    public final File f11560d;

    /* renamed from: e, reason: collision with root package name */
    public final Callable f11561e;

    /* renamed from: i, reason: collision with root package name */
    public int f11562i;

    /* renamed from: w, reason: collision with root package name */
    public String f11564w;

    /* renamed from: x, reason: collision with root package name */
    public String f11565x;

    /* renamed from: y, reason: collision with root package name */
    public String f11566y;
    public List I = new ArrayList();
    public String Y = null;

    /* renamed from: v, reason: collision with root package name */
    public String f11563v = Locale.getDefault().toString();

    public g3(File file, Date date, ArrayList arrayList, String str, String str2, String str3, String str4, int i5, String str5, Callable callable, String str6, String str7, String str8, Boolean bool, String str9, String str10, String str11, String str12, String str13, Map map) {
        this.f11560d = file;
        this.W = date;
        this.H = str5;
        this.f11561e = callable;
        this.f11562i = i5;
        this.f11564w = str6 == null ? "" : str6;
        this.f11565x = str7 == null ? "" : str7;
        this.F = str8 != null ? str8 : "";
        this.G = bool != null ? bool.booleanValue() : false;
        this.J = str9 != null ? str9 : "0";
        this.f11566y = "";
        this.E = "android";
        this.K = "android";
        this.L = str10 != null ? str10 : "";
        this.M = arrayList;
        this.N = str.isEmpty() ? JankScreenContext.UNKNOWN_SCREEN : str;
        this.O = str4;
        this.P = "";
        this.Q = str11 != null ? str11 : "";
        this.R = str2;
        this.S = str3;
        this.T = nt.a.q();
        this.U = str12 != null ? str12 : "production";
        this.V = str13;
        if (!str13.equals("normal") && !this.V.equals("timeout") && !this.V.equals("backgrounded")) {
            this.V = "normal";
        }
        this.X = map;
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("android_api_level").o0(iLogger, Integer.valueOf(this.f11562i));
        y2Var.C0("device_locale").o0(iLogger, this.f11563v);
        y2Var.C0("device_manufacturer").s(this.f11564w);
        y2Var.C0("device_model").s(this.f11565x);
        y2Var.C0("device_os_build_number").s(this.f11566y);
        y2Var.C0("device_os_name").s(this.E);
        y2Var.C0("device_os_version").s(this.F);
        y2Var.C0("device_is_emulator").H(this.G);
        y2Var.C0("architecture").o0(iLogger, this.H);
        y2Var.C0("device_cpu_frequencies").o0(iLogger, this.I);
        y2Var.C0("device_physical_memory_bytes").s(this.J);
        y2Var.C0("platform").s(this.K);
        y2Var.C0("build_id").s(this.L);
        y2Var.C0("transaction_name").s(this.N);
        y2Var.C0("duration_ns").s(this.O);
        y2Var.C0("version_name").s(this.Q);
        y2Var.C0("version_code").s(this.P);
        ArrayList arrayList = this.M;
        if (!arrayList.isEmpty()) {
            y2Var.C0("transactions").o0(iLogger, arrayList);
        }
        y2Var.C0("transaction_id").s(this.R);
        y2Var.C0("trace_id").s(this.S);
        y2Var.C0("profile_id").s(this.T);
        y2Var.C0("environment").s(this.U);
        y2Var.C0("truncation_reason").s(this.V);
        if (this.Y != null) {
            y2Var.C0("sampled_profile").s(this.Y);
        }
        String C = y2Var.C();
        y2Var.R("");
        y2Var.C0("measurements").o0(iLogger, this.X);
        y2Var.R(C);
        y2Var.C0("timestamp").o0(iLogger, this.W);
        ConcurrentHashMap concurrentHashMap = this.Z;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.Z, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
    }
}
