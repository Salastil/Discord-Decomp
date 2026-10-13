package io.sentry;

import com.discord.js_watchdog.SharedPreferencesKey;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.modules.dialog.AlertFragment;
import java.io.File;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public final class d implements n1 {
    public final /* synthetic */ int a;

    public /* synthetic */ d(int i5) {
        this.a = i5;
    }

    public static i6 b(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        io.sentry.protocol.v vVar = null;
        k6 k6Var = null;
        String str = null;
        ConcurrentHashMap concurrentHashMap = null;
        k6 k6Var2 = null;
        String str2 = null;
        l6 l6Var = null;
        String str3 = null;
        ConcurrentHashMap concurrentHashMap2 = null;
        Map map = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            X = x1Var.X();
            X.getClass();
            switch (X) {
                case "span_id":
                    k6Var = new k6(x1Var.j0());
                    break;
                case "parent_span_id":
                    k6Var2 = (k6) x1Var.d0(iLogger, new d(23));
                    break;
                case "description":
                    str2 = x1Var.j0();
                    break;
                case "origin":
                    str3 = x1Var.j0();
                    break;
                case "status":
                    l6Var = (l6) x1Var.d0(iLogger, new d(24));
                    break;
                case "op":
                    str = x1Var.j0();
                    break;
                case "data":
                    map = (Map) x1Var.b0();
                    break;
                case "tags":
                    concurrentHashMap2 = ys.l.r((Map) x1Var.b0());
                    break;
                case "trace_id":
                    vVar = new io.sentry.protocol.v(x1Var.j0());
                    break;
                default:
                    if (concurrentHashMap == null) {
                        concurrentHashMap = new ConcurrentHashMap();
                    }
                    x1Var.m0(iLogger, concurrentHashMap, X);
                    break;
            }
        }
        if (vVar == null) {
            IllegalStateException illegalStateException = new IllegalStateException("Missing required field \"trace_id\"");
            iLogger.k(SentryLevel.ERROR, "Missing required field \"trace_id\"", illegalStateException);
            throw illegalStateException;
        }
        if (k6Var == null) {
            IllegalStateException illegalStateException2 = new IllegalStateException("Missing required field \"span_id\"");
            iLogger.k(SentryLevel.ERROR, "Missing required field \"span_id\"", illegalStateException2);
            throw illegalStateException2;
        }
        if (str == null) {
            str = "";
        }
        i6 i6Var = new i6(vVar, k6Var, str, k6Var2);
        i6Var.f11615x = str2;
        i6Var.f11616y = l6Var;
        i6Var.F = str3;
        if (concurrentHashMap2 != null) {
            i6Var.E = concurrentHashMap2;
        }
        if (map != null) {
            i6Var.G = map;
        }
        i6Var.H = concurrentHashMap;
        x1Var.i();
        return i6Var;
    }

    private final Object c(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        Date r5 = ki.b.r();
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
        String str = null;
        String str2 = null;
        String str3 = null;
        String str4 = null;
        SentryLevel sentryLevel = null;
        ConcurrentHashMap concurrentHashMap2 = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            X = x1Var.X();
            X.getClass();
            switch (X) {
                case "origin":
                    str4 = x1Var.l0();
                    break;
                case "data":
                    ConcurrentHashMap r7 = ys.l.r((Map) x1Var.b0());
                    if (r7 == null) {
                        break;
                    } else {
                        concurrentHashMap = r7;
                        break;
                    }
                case "type":
                    str2 = x1Var.l0();
                    break;
                case "category":
                    str3 = x1Var.l0();
                    break;
                case "timestamp":
                    Date q5 = x1Var.q(iLogger);
                    if (q5 == null) {
                        break;
                    } else {
                        r5 = q5;
                        break;
                    }
                case "level":
                    try {
                        sentryLevel = SentryLevel.valueOf(x1Var.j0().toUpperCase(Locale.ROOT));
                        break;
                    } catch (Exception e9) {
                        iLogger.i(SentryLevel.ERROR, e9, "Error when deserializing SentryLevel", new Object[0]);
                        break;
                    }
                case "message":
                    str = x1Var.l0();
                    break;
                default:
                    if (concurrentHashMap2 == null) {
                        concurrentHashMap2 = new ConcurrentHashMap();
                    }
                    x1Var.m0(iLogger, concurrentHashMap2, X);
                    break;
            }
        }
        Breadcrumb breadcrumb = new Breadcrumb(r5);
        breadcrumb.f10975v = str;
        breadcrumb.f10976w = str2;
        breadcrumb.f10977x = concurrentHashMap;
        breadcrumb.f10978y = str3;
        breadcrumb.E = str4;
        breadcrumb.F = sentryLevel;
        breadcrumb.G = concurrentHashMap2;
        x1Var.i();
        return breadcrumb;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private final Object d(x1 x1Var, ILogger iLogger) {
        x1Var.f();
        io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
        d3 d3Var = new d3(vVar, vVar, new File("dummy"), new HashMap(), Double.valueOf(0.0d), "android", v5.empty());
        ConcurrentHashMap concurrentHashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X = x1Var.X();
            X.getClass();
            int i5 = 8;
            int i6 = 5;
            int i10 = 2;
            char c6 = 65535;
            switch (X.hashCode()) {
                case -1840434063:
                    if (X.equals("debug_meta")) {
                        c6 = 0;
                        break;
                    }
                    break;
                case -362243017:
                    if (X.equals("measurements")) {
                        c6 = 1;
                        break;
                    }
                    break;
                case -309425751:
                    if (X.equals("profile")) {
                        c6 = 2;
                        break;
                    }
                    break;
                case -85904877:
                    if (X.equals("environment")) {
                        c6 = 3;
                        break;
                    }
                    break;
                case 55126294:
                    if (X.equals("timestamp")) {
                        c6 = 4;
                        break;
                    }
                    break;
                case 178573617:
                    if (X.equals("profiler_id")) {
                        c6 = 5;
                        break;
                    }
                    break;
                case 351608024:
                    if (X.equals("version")) {
                        c6 = 6;
                        break;
                    }
                    break;
                case 1090594823:
                    if (X.equals("release")) {
                        c6 = 7;
                        break;
                    }
                    break;
                case 1102774726:
                    if (X.equals("client_sdk")) {
                        c6 = '\b';
                        break;
                    }
                    break;
                case 1874684019:
                    if (X.equals("platform")) {
                        c6 = '\t';
                        break;
                    }
                    break;
                case 1953158756:
                    if (X.equals("sampled_profile")) {
                        c6 = '\n';
                        break;
                    }
                    break;
                case 2005113901:
                    if (X.equals("chunk_id")) {
                        c6 = 11;
                        break;
                    }
                    break;
            }
            int i11 = 23;
            switch (c6) {
                case 0:
                    io.sentry.protocol.d dVar = (io.sentry.protocol.d) x1Var.d0(iLogger, new io.sentry.clientreport.a(i5));
                    if (dVar == null) {
                        break;
                    } else {
                        d3Var.f11494d = dVar;
                        break;
                    }
                case 1:
                    HashMap V = x1Var.V(iLogger, new io.sentry.clientreport.a(i10));
                    if (V == null) {
                        break;
                    } else {
                        d3Var.f11498w.putAll(V);
                        break;
                    }
                case 2:
                    io.sentry.protocol.profiling.a aVar = (io.sentry.protocol.profiling.a) x1Var.d0(iLogger, new io.sentry.protocol.b0(i6));
                    if (aVar == null) {
                        break;
                    } else {
                        d3Var.J = aVar;
                        break;
                    }
                case 3:
                    String l02 = x1Var.l0();
                    if (l02 == null) {
                        break;
                    } else {
                        d3Var.E = l02;
                        break;
                    }
                case 4:
                    Double t5 = x1Var.t();
                    if (t5 == null) {
                        break;
                    } else {
                        d3Var.G = t5.doubleValue();
                        break;
                    }
                case 5:
                    io.sentry.protocol.v vVar2 = (io.sentry.protocol.v) x1Var.d0(iLogger, new io.sentry.clientreport.a(i11));
                    if (vVar2 == null) {
                        break;
                    } else {
                        d3Var.f11495e = vVar2;
                        break;
                    }
                case 6:
                    String l03 = x1Var.l0();
                    if (l03 == null) {
                        break;
                    } else {
                        d3Var.F = l03;
                        break;
                    }
                case 7:
                    String l04 = x1Var.l0();
                    if (l04 == null) {
                        break;
                    } else {
                        d3Var.f11500y = l04;
                        break;
                    }
                case '\b':
                    io.sentry.protocol.t tVar = (io.sentry.protocol.t) x1Var.d0(iLogger, new io.sentry.clientreport.a(21));
                    if (tVar == null) {
                        break;
                    } else {
                        d3Var.f11497v = tVar;
                        break;
                    }
                case '\t':
                    String l05 = x1Var.l0();
                    if (l05 == null) {
                        break;
                    } else {
                        d3Var.f11499x = l05;
                        break;
                    }
                case '\n':
                    String l06 = x1Var.l0();
                    if (l06 == null) {
                        break;
                    } else {
                        d3Var.I = l06;
                        break;
                    }
                case 11:
                    io.sentry.protocol.v vVar3 = (io.sentry.protocol.v) x1Var.d0(iLogger, new io.sentry.clientreport.a(i11));
                    if (vVar3 == null) {
                        break;
                    } else {
                        d3Var.f11496i = vVar3;
                        break;
                    }
                default:
                    if (concurrentHashMap == null) {
                        concurrentHashMap = new ConcurrentHashMap();
                    }
                    x1Var.m0(iLogger, concurrentHashMap, X);
                    break;
            }
        }
        d3Var.K = concurrentHashMap;
        x1Var.i();
        return d3Var;
    }

    private final Object e(x1 x1Var, ILogger iLogger) {
        x1Var.f();
        e3 e3Var = new e3(io.sentry.protocol.v.f11895e);
        ConcurrentHashMap concurrentHashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X = x1Var.X();
            X.getClass();
            if (X.equals("profiler_id")) {
                io.sentry.protocol.v vVar = (io.sentry.protocol.v) x1Var.d0(iLogger, new io.sentry.clientreport.a(23));
                if (vVar != null) {
                    e3Var.f11530d = vVar;
                }
            } else {
                if (concurrentHashMap == null) {
                    concurrentHashMap = new ConcurrentHashMap();
                }
                x1Var.m0(iLogger, concurrentHashMap, X);
            }
        }
        e3Var.f11531e = concurrentHashMap;
        x1Var.i();
        return e3Var;
    }

    public static IllegalStateException f(String str, ILogger iLogger) {
        String f2 = s4.h.f("Missing required field \"", str, "\"");
        IllegalStateException illegalStateException = new IllegalStateException(f2);
        iLogger.k(SentryLevel.ERROR, f2, illegalStateException);
        return illegalStateException;
    }

    public static IllegalStateException g(String str, ILogger iLogger) {
        String f2 = s4.h.f("Missing required field \"", str, "\"");
        IllegalStateException illegalStateException = new IllegalStateException(f2);
        iLogger.k(SentryLevel.ERROR, f2, illegalStateException);
        return illegalStateException;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:233:0x03ba, code lost:
    
        r4.g();
     */
    /* JADX WARN: Failed to find 'out' block for switch in B:230:0x03b2. Please report as an issue. */
    @Override // io.sentry.n1
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object a(x1 x1Var, ILogger iLogger) {
        char c6;
        char c8;
        ArrayList arrayList;
        char c10;
        char c11;
        char c12;
        char c13;
        char c14;
        char c15;
        char c16;
        char c17;
        char c18;
        char c19;
        char c20;
        int i5;
        int i6;
        int i10;
        char c21;
        char c22;
        switch (this.a) {
            case 0:
                return c(x1Var, iLogger);
            case 1:
                return d(x1Var, iLogger);
            case 2:
                return e(x1Var, iLogger);
            case 3:
                x1Var.f();
                File file = new File("dummy");
                Date r5 = ki.b.r();
                ArrayList arrayList2 = new ArrayList();
                io.sentry.protocol.v vVar = io.sentry.protocol.v.f11895e;
                ConcurrentHashMap concurrentHashMap = null;
                g3 g3Var = new g3(file, r5, arrayList2, "", vVar.toString(), new i6(vVar, k6.f11645e, "op", null).f11610d.toString(), "0", 0, "", new g0(2), null, null, null, null, null, null, null, null, "normal", new HashMap());
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X = x1Var.X();
                    X.getClass();
                    switch (X.hashCode()) {
                        case -2133529830:
                            if (X.equals("device_manufacturer")) {
                                c6 = 0;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -1981468849:
                            if (X.equals("android_api_level")) {
                                c6 = 1;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -1430655860:
                            if (X.equals("build_id")) {
                                c6 = 2;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -1172160413:
                            if (X.equals("device_locale")) {
                                c6 = 3;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -1102636175:
                            if (X.equals("profile_id")) {
                                c6 = 4;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -716656436:
                            if (X.equals("device_os_build_number")) {
                                c6 = 5;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -591076352:
                            if (X.equals("device_model")) {
                                c6 = 6;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -512511455:
                            if (X.equals("device_is_emulator")) {
                                c6 = 7;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -478065584:
                            if (X.equals("duration_ns")) {
                                c6 = '\b';
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -362243017:
                            if (X.equals("measurements")) {
                                c6 = '\t';
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -332426004:
                            if (X.equals("device_physical_memory_bytes")) {
                                c6 = '\n';
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -212264198:
                            if (X.equals("device_cpu_frequencies")) {
                                c6 = 11;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -102985484:
                            if (X.equals("version_code")) {
                                c6 = '\f';
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -102670958:
                            if (X.equals("version_name")) {
                                c6 = '\r';
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -85904877:
                            if (X.equals("environment")) {
                                c6 = 14;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 55126294:
                            if (X.equals("timestamp")) {
                                c6 = 15;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 508853068:
                            if (X.equals("transaction_name")) {
                                c6 = 16;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 796476189:
                            if (X.equals("device_os_name")) {
                                c6 = 17;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 839674195:
                            if (X.equals("architecture")) {
                                c6 = 18;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1010584092:
                            if (X.equals("transaction_id")) {
                                c6 = 19;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1052553990:
                            if (X.equals("device_os_version")) {
                                c6 = 20;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1163928186:
                            if (X.equals("truncation_reason")) {
                                c6 = 21;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1270300245:
                            if (X.equals("trace_id")) {
                                c6 = 22;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1874684019:
                            if (X.equals("platform")) {
                                c6 = 23;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1953158756:
                            if (X.equals("sampled_profile")) {
                                c6 = 24;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1954122069:
                            if (X.equals("transactions")) {
                                c6 = 25;
                                break;
                            }
                            c6 = 65535;
                            break;
                        default:
                            c6 = 65535;
                            break;
                    }
                    switch (c6) {
                        case 0:
                            String l02 = x1Var.l0();
                            if (l02 != null) {
                                g3Var.f11564w = l02;
                                break;
                            } else {
                                continue;
                            }
                        case 1:
                            Integer P = x1Var.P();
                            if (P != null) {
                                g3Var.f11562i = P.intValue();
                                break;
                            } else {
                                continue;
                            }
                        case 2:
                            String l03 = x1Var.l0();
                            if (l03 != null) {
                                g3Var.L = l03;
                                break;
                            } else {
                                continue;
                            }
                        case 3:
                            String l04 = x1Var.l0();
                            if (l04 != null) {
                                g3Var.f11563v = l04;
                                break;
                            } else {
                                continue;
                            }
                        case 4:
                            String l05 = x1Var.l0();
                            if (l05 != null) {
                                g3Var.T = l05;
                                break;
                            } else {
                                continue;
                            }
                        case 5:
                            String l06 = x1Var.l0();
                            if (l06 != null) {
                                g3Var.f11566y = l06;
                                break;
                            } else {
                                continue;
                            }
                        case 6:
                            String l07 = x1Var.l0();
                            if (l07 != null) {
                                g3Var.f11565x = l07;
                                break;
                            } else {
                                continue;
                            }
                        case 7:
                            Boolean o6 = x1Var.o();
                            if (o6 != null) {
                                g3Var.G = o6.booleanValue();
                                break;
                            } else {
                                continue;
                            }
                        case '\b':
                            String l08 = x1Var.l0();
                            if (l08 != null) {
                                g3Var.O = l08;
                                break;
                            } else {
                                continue;
                            }
                        case '\t':
                            HashMap V = x1Var.V(iLogger, new io.sentry.clientreport.a(2));
                            if (V != null) {
                                g3Var.X.putAll(V);
                                break;
                            } else {
                                continue;
                            }
                        case '\n':
                            String l09 = x1Var.l0();
                            if (l09 != null) {
                                g3Var.J = l09;
                                break;
                            }
                            break;
                        case 11:
                            List list = (List) x1Var.b0();
                            if (list != null) {
                                g3Var.I = list;
                                break;
                            }
                            break;
                        case '\f':
                            String l010 = x1Var.l0();
                            if (l010 != null) {
                                g3Var.P = l010;
                                break;
                            }
                            break;
                        case '\r':
                            String l011 = x1Var.l0();
                            if (l011 != null) {
                                g3Var.Q = l011;
                                break;
                            }
                            break;
                        case 14:
                            String l012 = x1Var.l0();
                            if (l012 != null) {
                                g3Var.U = l012;
                                break;
                            }
                            break;
                        case 15:
                            Date q5 = x1Var.q(iLogger);
                            if (q5 != null) {
                                g3Var.W = q5;
                                break;
                            }
                            break;
                        case 16:
                            String l013 = x1Var.l0();
                            if (l013 != null) {
                                g3Var.N = l013;
                                break;
                            }
                            break;
                        case 17:
                            String l014 = x1Var.l0();
                            if (l014 != null) {
                                g3Var.E = l014;
                                break;
                            }
                            break;
                        case 18:
                            String l015 = x1Var.l0();
                            if (l015 != null) {
                                g3Var.H = l015;
                                break;
                            }
                            break;
                        case 19:
                            String l016 = x1Var.l0();
                            if (l016 != null) {
                                g3Var.R = l016;
                                break;
                            }
                            break;
                        case 20:
                            String l017 = x1Var.l0();
                            if (l017 != null) {
                                g3Var.F = l017;
                                break;
                            }
                            break;
                        case 21:
                            String l018 = x1Var.l0();
                            if (l018 != null) {
                                g3Var.V = l018;
                                break;
                            }
                            break;
                        case 22:
                            String l019 = x1Var.l0();
                            if (l019 != null) {
                                g3Var.S = l019;
                                break;
                            }
                            break;
                        case 23:
                            String l020 = x1Var.l0();
                            if (l020 != null) {
                                g3Var.K = l020;
                                break;
                            }
                            break;
                        case 24:
                            String l021 = x1Var.l0();
                            if (l021 != null) {
                                g3Var.Y = l021;
                                break;
                            }
                            break;
                        case 25:
                            ArrayList Q = x1Var.Q(iLogger, new d(4));
                            if (Q != null) {
                                g3Var.M.addAll(Q);
                                break;
                            }
                            break;
                        default:
                            if (concurrentHashMap == null) {
                                concurrentHashMap = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap, X);
                            break;
                    }
                }
                g3Var.Z = concurrentHashMap;
                x1Var.i();
                return g3Var;
            case 4:
                x1Var.f();
                h3 h3Var = new h3(v2.a, 0L, 0L);
                ConcurrentHashMap concurrentHashMap2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X2 = x1Var.X();
                    X2.getClass();
                    switch (X2.hashCode()) {
                        case -112372011:
                            if (X2.equals("relative_start_ns")) {
                                c8 = 0;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case -84607876:
                            if (X2.equals("relative_end_ns")) {
                                c8 = 1;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 3355:
                            if (X2.equals(StackTraceHelper.ID_KEY)) {
                                c8 = 2;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 3373707:
                            if (X2.equals(StackTraceHelper.NAME_KEY)) {
                                c8 = 3;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 1270300245:
                            if (X2.equals("trace_id")) {
                                c8 = 4;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 1566648660:
                            if (X2.equals("relative_cpu_end_ms")) {
                                c8 = 5;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 1902256621:
                            if (X2.equals("relative_cpu_start_ms")) {
                                c8 = 6;
                                break;
                            }
                            c8 = 65535;
                            break;
                        default:
                            c8 = 65535;
                            break;
                    }
                    switch (c8) {
                        case 0:
                            Long U = x1Var.U();
                            if (U != null) {
                                h3Var.f11582v = U;
                                break;
                            } else {
                                break;
                            }
                        case 1:
                            Long U2 = x1Var.U();
                            if (U2 != null) {
                                h3Var.f11583w = U2;
                                break;
                            } else {
                                break;
                            }
                        case 2:
                            String l022 = x1Var.l0();
                            if (l022 != null) {
                                h3Var.f11579d = l022;
                                break;
                            } else {
                                break;
                            }
                        case 3:
                            String l023 = x1Var.l0();
                            if (l023 != null) {
                                h3Var.f11581i = l023;
                                break;
                            } else {
                                break;
                            }
                        case 4:
                            String l024 = x1Var.l0();
                            if (l024 != null) {
                                h3Var.f11580e = l024;
                                break;
                            } else {
                                break;
                            }
                        case 5:
                            Long U3 = x1Var.U();
                            if (U3 != null) {
                                h3Var.f11585y = U3;
                                break;
                            } else {
                                break;
                            }
                        case 6:
                            Long U4 = x1Var.U();
                            if (U4 != null) {
                                h3Var.f11584x = U4;
                                break;
                            } else {
                                break;
                            }
                        default:
                            if (concurrentHashMap2 == null) {
                                concurrentHashMap2 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap2, X2);
                            break;
                    }
                }
                h3Var.E = concurrentHashMap2;
                x1Var.i();
                return h3Var;
            case 5:
                l3 l3Var = new l3();
                x1Var.f();
                HashMap hashMap = null;
                Integer num = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X3 = x1Var.X();
                    X3.getClass();
                    if (X3.equals("segment_id")) {
                        num = x1Var.P();
                    } else {
                        if (hashMap == null) {
                            hashMap = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap, X3);
                    }
                }
                x1Var.i();
                x1Var.p0(true);
                List list2 = (List) x1Var.b0();
                x1Var.p0(false);
                if (list2 != null) {
                    arrayList = new ArrayList(list2.size());
                    for (Object obj : list2) {
                        if (obj instanceof Map) {
                            Map map = (Map) obj;
                            x1 x1Var2 = new x1(map);
                            for (Map.Entry entry : map.entrySet()) {
                                String str = (String) entry.getKey();
                                Object value = entry.getValue();
                                if (str.equals("type")) {
                                    io.sentry.rrweb.c cVar = io.sentry.rrweb.c.values()[((Integer) value).intValue()];
                                    int i11 = k3.f11639b[cVar.ordinal()];
                                    if (i11 == 1) {
                                        Map map2 = (Map) map.get("data");
                                        if (map2 == null) {
                                            map2 = Collections.EMPTY_MAP;
                                        }
                                        Integer num2 = (Integer) map2.get("source");
                                        if (num2 != null) {
                                            io.sentry.rrweb.d dVar = io.sentry.rrweb.d.values()[num2.intValue()];
                                            int i12 = k3.a[dVar.ordinal()];
                                            if (i12 == 1) {
                                                arrayList.add(io.sentry.protocol.b0.c(x1Var2, iLogger));
                                            } else if (i12 != 2) {
                                                iLogger.u(SentryLevel.DEBUG, "Unsupported rrweb incremental snapshot type %s", dVar);
                                            } else {
                                                arrayList.add(io.sentry.protocol.b0.d(x1Var2, iLogger));
                                            }
                                        }
                                    } else if (i11 == 2) {
                                        arrayList.add(io.sentry.protocol.b0.e(x1Var2, iLogger));
                                    } else if (i11 == 3) {
                                        Map map3 = (Map) map.get("data");
                                        if (map3 == null) {
                                            map3 = Collections.EMPTY_MAP;
                                        }
                                        String str2 = (String) map3.get("tag");
                                        if (str2 != null) {
                                            switch (str2.hashCode()) {
                                                case -226040934:
                                                    if (str2.equals("performanceSpan")) {
                                                        c10 = 0;
                                                        break;
                                                    }
                                                    c10 = 65535;
                                                    break;
                                                case 112202875:
                                                    if (str2.equals(MediaStreamTrack.VIDEO_TRACK_KIND)) {
                                                        c10 = 1;
                                                        break;
                                                    }
                                                    c10 = 65535;
                                                    break;
                                                case 1106718723:
                                                    if (str2.equals("breadcrumb")) {
                                                        c10 = 2;
                                                        break;
                                                    }
                                                    c10 = 65535;
                                                    break;
                                                default:
                                                    c10 = 65535;
                                                    break;
                                            }
                                            switch (c10) {
                                                case 0:
                                                    arrayList.add(io.sentry.protocol.b0.f(x1Var2, iLogger));
                                                    break;
                                                case 1:
                                                    arrayList.add(io.sentry.protocol.b0.g(x1Var2, iLogger));
                                                    break;
                                                case 2:
                                                    arrayList.add(io.sentry.protocol.b0.b(x1Var2, iLogger));
                                                    break;
                                                default:
                                                    iLogger.u(SentryLevel.DEBUG, "Unsupported rrweb event type %s", cVar);
                                                    break;
                                            }
                                        }
                                    } else {
                                        iLogger.u(SentryLevel.DEBUG, "Unsupported rrweb event type %s", cVar);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    arrayList = null;
                }
                l3Var.f11647d = num;
                l3Var.f11648e = arrayList;
                l3Var.f11649i = hashMap;
                return l3Var;
            case 6:
                x1Var.f();
                d4 d4Var = new d4();
                d4Var.f11503i = false;
                d4Var.f11504v = null;
                d4Var.f11501d = false;
                d4Var.f11502e = null;
                d4Var.F = false;
                d4Var.f11505w = null;
                d4Var.f11506x = false;
                d4Var.f11507y = false;
                d4Var.I = f3.MANUAL;
                d4Var.E = 0;
                d4Var.G = true;
                d4Var.H = false;
                ConcurrentHashMap concurrentHashMap3 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X4 = x1Var.X();
                    X4.getClass();
                    switch (X4.hashCode()) {
                        case -801141276:
                            if (X4.equals("is_enable_app_start_profiling")) {
                                c11 = 0;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -566246656:
                            if (X4.equals("trace_sampled")) {
                                c11 = 1;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -450071601:
                            if (X4.equals("profiling_traces_dir_path")) {
                                c11 = 2;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -436975123:
                            if (X4.equals("is_continuous_profiling_enabled")) {
                                c11 = 3;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -116896685:
                            if (X4.equals("is_profiling_enabled")) {
                                c11 = 4;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -104146616:
                            if (X4.equals("is_start_profiler_on_app_start")) {
                                c11 = 5;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -69617820:
                            if (X4.equals("profile_sampled")) {
                                c11 = 6;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 401419348:
                            if (X4.equals("profile_lifecycle")) {
                                c11 = 7;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1401020980:
                            if (X4.equals("continuous_profile_sampled")) {
                                c11 = '\b';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1583866442:
                            if (X4.equals("profiling_traces_hz")) {
                                c11 = '\t';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1653938779:
                            if (X4.equals("trace_sample_rate")) {
                                c11 = '\n';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 2140552383:
                            if (X4.equals("profile_sample_rate")) {
                                c11 = 11;
                                break;
                            }
                            c11 = 65535;
                            break;
                        default:
                            c11 = 65535;
                            break;
                    }
                    switch (c11) {
                        case 0:
                            Boolean o7 = x1Var.o();
                            if (o7 != null) {
                                d4Var.G = o7.booleanValue();
                                break;
                            } else {
                                break;
                            }
                        case 1:
                            Boolean o10 = x1Var.o();
                            if (o10 != null) {
                                d4Var.f11503i = o10.booleanValue();
                                break;
                            } else {
                                break;
                            }
                        case 2:
                            String l025 = x1Var.l0();
                            if (l025 != null) {
                                d4Var.f11505w = l025;
                                break;
                            } else {
                                break;
                            }
                        case 3:
                            Boolean o11 = x1Var.o();
                            if (o11 != null) {
                                d4Var.f11507y = o11.booleanValue();
                                break;
                            } else {
                                break;
                            }
                        case 4:
                            Boolean o12 = x1Var.o();
                            if (o12 != null) {
                                d4Var.f11506x = o12.booleanValue();
                                break;
                            } else {
                                break;
                            }
                        case 5:
                            Boolean o13 = x1Var.o();
                            if (o13 != null) {
                                d4Var.H = o13.booleanValue();
                                break;
                            } else {
                                break;
                            }
                        case 6:
                            Boolean o14 = x1Var.o();
                            if (o14 != null) {
                                d4Var.f11501d = o14.booleanValue();
                                break;
                            } else {
                                break;
                            }
                        case 7:
                            String l026 = x1Var.l0();
                            if (l026 != null) {
                                try {
                                    d4Var.I = f3.valueOf(l026);
                                    break;
                                } catch (IllegalArgumentException unused) {
                                    iLogger.u(SentryLevel.ERROR, "Error when deserializing ProfileLifecycle: ".concat(l026), new Object[0]);
                                    break;
                                }
                            } else {
                                break;
                            }
                        case '\b':
                            Boolean o15 = x1Var.o();
                            if (o15 != null) {
                                d4Var.F = o15.booleanValue();
                                break;
                            } else {
                                break;
                            }
                        case '\t':
                            Integer P2 = x1Var.P();
                            if (P2 != null) {
                                d4Var.E = P2.intValue();
                                break;
                            } else {
                                break;
                            }
                        case '\n':
                            Double t5 = x1Var.t();
                            if (t5 != null) {
                                d4Var.f11504v = t5;
                                break;
                            } else {
                                break;
                            }
                        case 11:
                            Double t10 = x1Var.t();
                            if (t10 != null) {
                                d4Var.f11502e = t10;
                                break;
                            } else {
                                break;
                            }
                        default:
                            if (concurrentHashMap3 == null) {
                                concurrentHashMap3 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap3, X4);
                            break;
                    }
                }
                d4Var.J = concurrentHashMap3;
                x1Var.i();
                return d4Var;
            case 7:
                x1Var.f();
                io.sentry.protocol.t tVar = null;
                n6 n6Var = null;
                Date date = null;
                HashMap hashMap2 = null;
                io.sentry.protocol.v vVar2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X5 = x1Var.X();
                    X5.getClass();
                    switch (X5.hashCode()) {
                        case 113722:
                            if (X5.equals("sdk")) {
                                c12 = 0;
                                break;
                            }
                            c12 = 65535;
                            break;
                        case 110620997:
                            if (X5.equals(SharedPreferencesKey.TRACE)) {
                                c12 = 1;
                                break;
                            }
                            c12 = 65535;
                            break;
                        case 278118624:
                            if (X5.equals("event_id")) {
                                c12 = 2;
                                break;
                            }
                            c12 = 65535;
                            break;
                        case 1980389946:
                            if (X5.equals("sent_at")) {
                                c12 = 3;
                                break;
                            }
                            c12 = 65535;
                            break;
                        default:
                            c12 = 65535;
                            break;
                    }
                    switch (c12) {
                        case 0:
                            tVar = (io.sentry.protocol.t) x1Var.d0(iLogger, new io.sentry.clientreport.a(21));
                            continue;
                        case 1:
                            n6Var = (n6) x1Var.d0(iLogger, new d(25));
                            continue;
                        case 2:
                            vVar2 = (io.sentry.protocol.v) x1Var.d0(iLogger, new io.sentry.clientreport.a(23));
                            continue;
                        case 3:
                            date = x1Var.q(iLogger);
                            break;
                        default:
                            if (hashMap2 == null) {
                                hashMap2 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap2, X5);
                            break;
                    }
                }
                k4 k4Var = new k4(vVar2, tVar, n6Var);
                k4Var.f11643v = date;
                k4Var.f11644w = hashMap2;
                x1Var.i();
                return k4Var;
            case 8:
                x1Var.f();
                v4 v4Var = null;
                int i13 = 0;
                String str3 = null;
                String str4 = null;
                String str5 = null;
                String str6 = null;
                Integer num3 = null;
                HashMap hashMap3 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X6 = x1Var.X();
                    X6.getClass();
                    switch (X6.hashCode()) {
                        case -1966910237:
                            if (X6.equals("item_count")) {
                                c13 = 0;
                                break;
                            }
                            c13 = 65535;
                            break;
                        case -1106363674:
                            if (X6.equals("length")) {
                                c13 = 1;
                                break;
                            }
                            c13 = 65535;
                            break;
                        case -734768633:
                            if (X6.equals("filename")) {
                                c13 = 2;
                                break;
                            }
                            c13 = 65535;
                            break;
                        case -672977706:
                            if (X6.equals("attachment_type")) {
                                c13 = 3;
                                break;
                            }
                            c13 = 65535;
                            break;
                        case 3575610:
                            if (X6.equals("type")) {
                                c13 = 4;
                                break;
                            }
                            c13 = 65535;
                            break;
                        case 831846208:
                            if (X6.equals("content_type")) {
                                c13 = 5;
                                break;
                            }
                            c13 = 65535;
                            break;
                        case 1874684019:
                            if (X6.equals("platform")) {
                                c13 = 6;
                                break;
                            }
                            c13 = 65535;
                            break;
                        default:
                            c13 = 65535;
                            break;
                    }
                    switch (c13) {
                        case 0:
                            num3 = x1Var.P();
                            continue;
                        case 1:
                            i13 = x1Var.C();
                            continue;
                        case 2:
                            str4 = x1Var.l0();
                            continue;
                        case 3:
                            str5 = x1Var.l0();
                            continue;
                        case 4:
                            v4Var = (v4) x1Var.d0(iLogger, new d(10));
                            continue;
                        case 5:
                            str3 = x1Var.l0();
                            break;
                        case 6:
                            str6 = x1Var.l0();
                            break;
                        default:
                            if (hashMap3 == null) {
                                hashMap3 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap3, X6);
                            break;
                    }
                }
                if (v4Var == null) {
                    IllegalStateException illegalStateException = new IllegalStateException("Missing required field \"type\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"type\"", illegalStateException);
                    throw illegalStateException;
                }
                p4 p4Var = new p4(v4Var, i13, str3, str4, str5, str6, num3);
                p4Var.F = hashMap3;
                x1Var.i();
                return p4Var;
            case 9:
                x1Var.f();
                SentryEvent sentryEvent = new SentryEvent();
                ConcurrentHashMap concurrentHashMap4 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X7 = x1Var.X();
                    X7.getClass();
                    switch (X7.hashCode()) {
                        case -1375934236:
                            if (X7.equals("fingerprint")) {
                                c14 = 0;
                                break;
                            }
                            c14 = 65535;
                            break;
                        case -1337936983:
                            if (X7.equals("threads")) {
                                c14 = 1;
                                break;
                            }
                            c14 = 65535;
                            break;
                        case -1097337456:
                            if (X7.equals("logger")) {
                                c14 = 2;
                                break;
                            }
                            c14 = 65535;
                            break;
                        case 55126294:
                            if (X7.equals("timestamp")) {
                                c14 = 3;
                                break;
                            }
                            c14 = 65535;
                            break;
                        case 102865796:
                            if (X7.equals("level")) {
                                c14 = 4;
                                break;
                            }
                            c14 = 65535;
                            break;
                        case 954925063:
                            if (X7.equals("message")) {
                                c14 = 5;
                                break;
                            }
                            c14 = 65535;
                            break;
                        case 1227433863:
                            if (X7.equals("modules")) {
                                c14 = 6;
                                break;
                            }
                            c14 = 65535;
                            break;
                        case 1481625679:
                            if (X7.equals("exception")) {
                                c14 = 7;
                                break;
                            }
                            c14 = 65535;
                            break;
                        case 2141246174:
                            if (X7.equals("transaction")) {
                                c14 = '\b';
                                break;
                            }
                            c14 = 65535;
                            break;
                        default:
                            c14 = 65535;
                            break;
                    }
                    switch (c14) {
                        case 0:
                            List list3 = (List) x1Var.b0();
                            if (list3 != null) {
                                sentryEvent.T = list3;
                                break;
                            } else {
                                break;
                            }
                        case 1:
                            x1Var.f();
                            x1Var.X();
                            sentryEvent.P = new e6(x1Var.Q(iLogger, new io.sentry.protocol.b0(0)));
                            x1Var.i();
                            break;
                        case 2:
                            sentryEvent.O = x1Var.l0();
                            break;
                        case 3:
                            Date q6 = x1Var.q(iLogger);
                            if (q6 != null) {
                                sentryEvent.M = q6;
                                break;
                            } else {
                                break;
                            }
                        case 4:
                            sentryEvent.R = (SentryLevel) x1Var.d0(iLogger, new d(11));
                            break;
                        case 5:
                            sentryEvent.N = (io.sentry.protocol.n) x1Var.d0(iLogger, new io.sentry.clientreport.a(17));
                            break;
                        case 6:
                            sentryEvent.V = ys.l.r((Map) x1Var.b0());
                            break;
                        case 7:
                            x1Var.f();
                            x1Var.X();
                            sentryEvent.Q = new e6(x1Var.Q(iLogger, new io.sentry.clientreport.a(22)));
                            x1Var.i();
                            break;
                        case '\b':
                            sentryEvent.S = x1Var.l0();
                            break;
                        default:
                            if (ks.n.k(sentryEvent, X7, x1Var, iLogger)) {
                                break;
                            } else {
                                if (concurrentHashMap4 == null) {
                                    concurrentHashMap4 = new ConcurrentHashMap();
                                }
                                x1Var.m0(iLogger, concurrentHashMap4, X7);
                                break;
                            }
                    }
                }
                sentryEvent.U = concurrentHashMap4;
                x1Var.i();
                return sentryEvent;
            case 10:
                return v4.valueOfLabel(x1Var.j0().toLowerCase(Locale.ROOT));
            case 11:
                return SentryLevel.valueOf(x1Var.j0().toUpperCase(Locale.ROOT));
            case 12:
                w4 w4Var = new w4();
                x1Var.f();
                ConcurrentHashMap concurrentHashMap5 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X8 = x1Var.X();
                    X8.getClass();
                    switch (X8.hashCode()) {
                        case -1877165340:
                            if (X8.equals("package_name")) {
                                c15 = 0;
                                break;
                            }
                            c15 = 65535;
                            break;
                        case -1562235024:
                            if (X8.equals("thread_id")) {
                                c15 = 1;
                                break;
                            }
                            c15 = 65535;
                            break;
                        case -1147692044:
                            if (X8.equals("address")) {
                                c15 = 2;
                                break;
                            }
                            c15 = 65535;
                            break;
                        case -290474766:
                            if (X8.equals("class_name")) {
                                c15 = 3;
                                break;
                            }
                            c15 = 65535;
                            break;
                        case 3575610:
                            if (X8.equals("type")) {
                                c15 = 4;
                                break;
                            }
                            c15 = 65535;
                            break;
                        default:
                            c15 = 65535;
                            break;
                    }
                    switch (c15) {
                        case 0:
                            w4Var.f12070i = x1Var.l0();
                            break;
                        case 1:
                            w4Var.f12072w = x1Var.U();
                            break;
                        case 2:
                            w4Var.f12069e = x1Var.l0();
                            break;
                        case 3:
                            w4Var.f12071v = x1Var.l0();
                            break;
                        case 4:
                            w4Var.f12068d = x1Var.C();
                            break;
                        default:
                            if (concurrentHashMap5 == null) {
                                concurrentHashMap5 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap5, X8);
                            break;
                    }
                }
                w4Var.f12073x = concurrentHashMap5;
                x1Var.i();
                return w4Var;
            case 13:
                x1Var.f();
                Double d6 = null;
                String str7 = null;
                HashMap hashMap4 = null;
                z4 z4Var = null;
                HashMap hashMap5 = null;
                Integer num4 = null;
                k6 k6Var = null;
                io.sentry.protocol.v vVar3 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X9 = x1Var.X();
                    X9.getClass();
                    switch (X9.hashCode()) {
                        case -2011840976:
                            if (X9.equals("span_id")) {
                                c16 = 0;
                                break;
                            }
                            c16 = 65535;
                            break;
                        case -1615012149:
                            if (X9.equals("severity_number")) {
                                c16 = 1;
                                break;
                            }
                            c16 = 65535;
                            break;
                        case 3029410:
                            if (X9.equals("body")) {
                                c16 = 2;
                                break;
                            }
                            c16 = 65535;
                            break;
                        case 55126294:
                            if (X9.equals("timestamp")) {
                                c16 = 3;
                                break;
                            }
                            c16 = 65535;
                            break;
                        case 102865796:
                            if (X9.equals("level")) {
                                c16 = 4;
                                break;
                            }
                            c16 = 65535;
                            break;
                        case 405645655:
                            if (X9.equals("attributes")) {
                                c16 = 5;
                                break;
                            }
                            c16 = 65535;
                            break;
                        case 1270300245:
                            if (X9.equals("trace_id")) {
                                c16 = 6;
                                break;
                            }
                            c16 = 65535;
                            break;
                        default:
                            c16 = 65535;
                            break;
                    }
                    switch (c16) {
                        case 0:
                            k6Var = (k6) x1Var.d0(iLogger, new d(23));
                            continue;
                        case 1:
                            num4 = x1Var.P();
                            continue;
                        case 2:
                            str7 = x1Var.l0();
                            continue;
                        case 3:
                            d6 = x1Var.t();
                            continue;
                        case 4:
                            z4Var = (z4) x1Var.d0(iLogger, new d(16));
                            continue;
                        case 5:
                            hashMap5 = x1Var.V(iLogger, new d(14));
                            continue;
                        case 6:
                            vVar3 = (io.sentry.protocol.v) x1Var.d0(iLogger, new io.sentry.clientreport.a(23));
                            break;
                        default:
                            if (hashMap4 == null) {
                                hashMap4 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap4, X9);
                            break;
                    }
                }
                x1Var.i();
                if (vVar3 == null) {
                    IllegalStateException illegalStateException2 = new IllegalStateException("Missing required field \"trace_id\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"trace_id\"", illegalStateException2);
                    throw illegalStateException2;
                }
                if (d6 == null) {
                    IllegalStateException illegalStateException3 = new IllegalStateException("Missing required field \"timestamp\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"timestamp\"", illegalStateException3);
                    throw illegalStateException3;
                }
                if (str7 == null) {
                    IllegalStateException illegalStateException4 = new IllegalStateException("Missing required field \"body\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"body\"", illegalStateException4);
                    throw illegalStateException4;
                }
                if (z4Var == null) {
                    IllegalStateException illegalStateException5 = new IllegalStateException("Missing required field \"level\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"level\"", illegalStateException5);
                    throw illegalStateException5;
                }
                x4 x4Var = new x4();
                x4Var.f12081d = vVar3;
                x4Var.f12083i = d6;
                x4Var.f12084v = str7;
                x4Var.f12085w = z4Var;
                x4Var.f12087y = hashMap5;
                x4Var.f12086x = num4;
                x4Var.f12082e = k6Var;
                x4Var.E = hashMap4;
                return x4Var;
            case 14:
                x1Var.f();
                Object obj2 = null;
                AbstractMap abstractMap = null;
                String str8 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X10 = x1Var.X();
                    X10.getClass();
                    if (X10.equals("type")) {
                        str8 = x1Var.l0();
                    } else if (X10.equals("value")) {
                        obj2 = x1Var.b0();
                    } else {
                        if (abstractMap == null) {
                            abstractMap = new HashMap();
                        }
                        x1Var.m0(iLogger, abstractMap, X10);
                    }
                }
                x1Var.i();
                if (str8 == null) {
                    IllegalStateException illegalStateException6 = new IllegalStateException("Missing required field \"type\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"type\"", illegalStateException6);
                    throw illegalStateException6;
                }
                io.sentry.protocol.l lVar = new io.sentry.protocol.l();
                lVar.f11832e = str8;
                if (obj2 == null || !str8.equals("string")) {
                    lVar.f11833i = obj2;
                } else {
                    lVar.f11833i = obj2.toString();
                }
                lVar.f11834v = abstractMap;
                return lVar;
            case 15:
                x1Var.f();
                HashMap hashMap6 = null;
                ArrayList arrayList3 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X11 = x1Var.X();
                    X11.getClass();
                    if (X11.equals(AlertFragment.ARG_ITEMS)) {
                        arrayList3 = x1Var.Q(iLogger, new d(13));
                    } else {
                        if (hashMap6 == null) {
                            hashMap6 = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap6, X11);
                    }
                }
                x1Var.i();
                if (arrayList3 != null) {
                    y4 y4Var = new y4(arrayList3);
                    y4Var.f12091e = hashMap6;
                    return y4Var;
                }
                IllegalStateException illegalStateException7 = new IllegalStateException("Missing required field \"items\"");
                iLogger.k(SentryLevel.ERROR, "Missing required field \"items\"", illegalStateException7);
                throw illegalStateException7;
            case 16:
                return z4.valueOf(x1Var.j0().toUpperCase(Locale.ROOT));
            case 17:
                x1Var.f();
                Double d7 = null;
                String str9 = null;
                HashMap hashMap7 = null;
                String str10 = null;
                Double d8 = null;
                HashMap hashMap8 = null;
                io.sentry.protocol.v vVar4 = null;
                k6 k6Var2 = null;
                String str11 = null;
                while (true) {
                    HashMap hashMap9 = hashMap7;
                    if (x1Var.o0() != io.sentry.vendor.gson.stream.b.NAME) {
                        x1Var.i();
                        if (vVar4 == null) {
                            IllegalStateException illegalStateException8 = new IllegalStateException("Missing required field \"trace_id\"");
                            iLogger.k(SentryLevel.ERROR, "Missing required field \"trace_id\"", illegalStateException8);
                            throw illegalStateException8;
                        }
                        if (d7 == null) {
                            IllegalStateException illegalStateException9 = new IllegalStateException("Missing required field \"timestamp\"");
                            iLogger.k(SentryLevel.ERROR, "Missing required field \"timestamp\"", illegalStateException9);
                            throw illegalStateException9;
                        }
                        if (str9 == null) {
                            IllegalStateException illegalStateException10 = new IllegalStateException("Missing required field \"type\"");
                            iLogger.k(SentryLevel.ERROR, "Missing required field \"type\"", illegalStateException10);
                            throw illegalStateException10;
                        }
                        if (str10 == null) {
                            IllegalStateException illegalStateException11 = new IllegalStateException("Missing required field \"name\"");
                            iLogger.k(SentryLevel.ERROR, "Missing required field \"name\"", illegalStateException11);
                            throw illegalStateException11;
                        }
                        if (d8 == null) {
                            IllegalStateException illegalStateException12 = new IllegalStateException("Missing required field \"value\"");
                            iLogger.k(SentryLevel.ERROR, "Missing required field \"value\"", illegalStateException12);
                            throw illegalStateException12;
                        }
                        b5 b5Var = new b5();
                        b5Var.f11396d = vVar4;
                        b5Var.f11398i = d7;
                        b5Var.f11399v = str10;
                        b5Var.f11401x = str9;
                        b5Var.f11402y = d8;
                        b5Var.E = hashMap8;
                        b5Var.f11397e = k6Var2;
                        b5Var.f11400w = str11;
                        b5Var.F = hashMap9;
                        return b5Var;
                    }
                    String X12 = x1Var.X();
                    X12.getClass();
                    switch (X12.hashCode()) {
                        case -2011840976:
                            if (X12.equals("span_id")) {
                                c17 = 0;
                                break;
                            }
                            c17 = 65535;
                            break;
                        case 3373707:
                            if (X12.equals(StackTraceHelper.NAME_KEY)) {
                                c17 = 1;
                                break;
                            }
                            c17 = 65535;
                            break;
                        case 3575610:
                            if (X12.equals("type")) {
                                c17 = 2;
                                break;
                            }
                            c17 = 65535;
                            break;
                        case 3594628:
                            if (X12.equals("unit")) {
                                c17 = 3;
                                break;
                            }
                            c17 = 65535;
                            break;
                        case 55126294:
                            if (X12.equals("timestamp")) {
                                c17 = 4;
                                break;
                            }
                            c17 = 65535;
                            break;
                        case 111972721:
                            if (X12.equals("value")) {
                                c17 = 5;
                                break;
                            }
                            c17 = 65535;
                            break;
                        case 405645655:
                            if (X12.equals("attributes")) {
                                c17 = 6;
                                break;
                            }
                            c17 = 65535;
                            break;
                        case 1270300245:
                            if (X12.equals("trace_id")) {
                                c17 = 7;
                                break;
                            }
                            c17 = 65535;
                            break;
                        default:
                            c17 = 65535;
                            break;
                    }
                    switch (c17) {
                        case 0:
                            k6Var2 = (k6) x1Var.d0(iLogger, new d(23));
                            break;
                        case 1:
                            str10 = x1Var.l0();
                            break;
                        case 2:
                            str9 = x1Var.l0();
                            break;
                        case 3:
                            str11 = x1Var.l0();
                            break;
                        case 4:
                            d7 = x1Var.t();
                            break;
                        case 5:
                            d8 = x1Var.t();
                            break;
                        case 6:
                            hashMap8 = x1Var.V(iLogger, new d(14));
                            break;
                        case 7:
                            vVar4 = (io.sentry.protocol.v) x1Var.d0(iLogger, new io.sentry.clientreport.a(23));
                            break;
                        default:
                            hashMap7 = hashMap9 == null ? new HashMap() : hashMap9;
                            x1Var.m0(iLogger, hashMap7, X12);
                            continue;
                    }
                    hashMap7 = hashMap9;
                }
            case 18:
                x1Var.f();
                HashMap hashMap10 = null;
                ArrayList arrayList4 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X13 = x1Var.X();
                    X13.getClass();
                    if (X13.equals(AlertFragment.ARG_ITEMS)) {
                        arrayList4 = x1Var.Q(iLogger, new d(17));
                    } else {
                        if (hashMap10 == null) {
                            hashMap10 = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap10, X13);
                    }
                }
                x1Var.i();
                if (arrayList4 != null) {
                    c5 c5Var = new c5(arrayList4);
                    c5Var.f11428e = hashMap10;
                    return c5Var;
                }
                IllegalStateException illegalStateException13 = new IllegalStateException("Missing required field \"items\"");
                iLogger.k(SentryLevel.ERROR, "Missing required field \"items\"", illegalStateException13);
                throw illegalStateException13;
            case 19:
                x5 x5Var = new x5();
                x1Var.f();
                w5 w5Var = null;
                Date date2 = null;
                HashMap hashMap11 = null;
                io.sentry.protocol.v vVar5 = null;
                Date date3 = null;
                List list4 = null;
                String str12 = null;
                List list5 = null;
                List list6 = null;
                Integer num5 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X14 = x1Var.X();
                    X14.getClass();
                    switch (X14.hashCode()) {
                        case -454767501:
                            if (X14.equals("replay_id")) {
                                c18 = 0;
                                break;
                            }
                            c18 = 65535;
                            break;
                        case -264026847:
                            if (X14.equals("replay_start_timestamp")) {
                                c18 = 1;
                                break;
                            }
                            c18 = 65535;
                            break;
                        case 3575610:
                            if (X14.equals("type")) {
                                c18 = 2;
                                break;
                            }
                            c18 = 65535;
                            break;
                        case 3598564:
                            if (X14.equals("urls")) {
                                c18 = 3;
                                break;
                            }
                            c18 = 65535;
                            break;
                        case 55126294:
                            if (X14.equals("timestamp")) {
                                c18 = 4;
                                break;
                            }
                            c18 = 65535;
                            break;
                        case 329864193:
                            if (X14.equals("error_ids")) {
                                c18 = 5;
                                break;
                            }
                            c18 = 65535;
                            break;
                        case 724602046:
                            if (X14.equals("trace_ids")) {
                                c18 = 6;
                                break;
                            }
                            c18 = 65535;
                            break;
                        case 1055447186:
                            if (X14.equals("replay_type")) {
                                c18 = 7;
                                break;
                            }
                            c18 = 65535;
                            break;
                        case 1077649831:
                            if (X14.equals("segment_id")) {
                                c18 = '\b';
                                break;
                            }
                            c18 = 65535;
                            break;
                        default:
                            c18 = 65535;
                            break;
                    }
                    switch (c18) {
                        case 0:
                            vVar5 = (io.sentry.protocol.v) x1Var.d0(iLogger, new io.sentry.clientreport.a(23));
                            break;
                        case 1:
                            date3 = x1Var.q(iLogger);
                            break;
                        case 2:
                            str12 = x1Var.l0();
                            break;
                        case 3:
                            list4 = (List) x1Var.b0();
                            break;
                        case 4:
                            date2 = x1Var.q(iLogger);
                            break;
                        case 5:
                            list5 = (List) x1Var.b0();
                            break;
                        case 6:
                            list6 = (List) x1Var.b0();
                            break;
                        case 7:
                            w5Var = (w5) x1Var.d0(iLogger, new d(20));
                            break;
                        case '\b':
                            num5 = x1Var.P();
                            break;
                        default:
                            if (ks.n.k(x5Var, X14, x1Var, iLogger)) {
                                break;
                            } else {
                                if (hashMap11 == null) {
                                    hashMap11 = new HashMap();
                                }
                                x1Var.m0(iLogger, hashMap11, X14);
                                break;
                            }
                    }
                }
                x1Var.i();
                if (str12 != null) {
                    x5Var.N = str12;
                }
                if (w5Var != null) {
                    x5Var.O = w5Var;
                }
                if (num5 != null) {
                    x5Var.Q = num5.intValue();
                }
                if (date2 != null) {
                    x5Var.R = date2;
                }
                x5Var.P = vVar5;
                x5Var.S = date3;
                x5Var.T = list4;
                x5Var.U = list5;
                x5Var.V = list6;
                x5Var.W = hashMap11;
                return x5Var;
            case 20:
                return w5.valueOf(x1Var.j0().toUpperCase(Locale.ROOT));
            case 21:
                x1Var.f();
                ConcurrentHashMap concurrentHashMap6 = null;
                Integer num6 = null;
                f6 f6Var = null;
                Date date4 = null;
                Date date5 = null;
                String str13 = null;
                String str14 = null;
                Boolean bool = null;
                Long l6 = null;
                Double d10 = null;
                String str15 = null;
                String str16 = null;
                String str17 = null;
                String str18 = null;
                String str19 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X15 = x1Var.X();
                    X15.getClass();
                    switch (X15.hashCode()) {
                        case -1992012396:
                            if (X15.equals("duration")) {
                                c19 = 0;
                                break;
                            }
                            c19 = 65535;
                            break;
                        case -1897185151:
                            if (X15.equals("started")) {
                                c19 = 1;
                                break;
                            }
                            c19 = 65535;
                            break;
                        case -1294635157:
                            if (X15.equals("errors")) {
                                c19 = 2;
                                break;
                            }
                            c19 = 65535;
                            break;
                        case -892481550:
                            if (X15.equals("status")) {
                                c19 = 3;
                                break;
                            }
                            c19 = 65535;
                            break;
                        case 99455:
                            if (X15.equals("did")) {
                                c19 = 4;
                                break;
                            }
                            c19 = 65535;
                            break;
                        case 113759:
                            if (X15.equals("seq")) {
                                c19 = 5;
                                break;
                            }
                            c19 = 65535;
                            break;
                        case 113870:
                            if (X15.equals("sid")) {
                                c19 = 6;
                                break;
                            }
                            c19 = 65535;
                            break;
                        case 3237136:
                            if (X15.equals("init")) {
                                c19 = 7;
                                break;
                            }
                            c19 = 65535;
                            break;
                        case 55126294:
                            if (X15.equals("timestamp")) {
                                c19 = '\b';
                                break;
                            }
                            c19 = 65535;
                            break;
                        case 93152418:
                            if (X15.equals("attrs")) {
                                c19 = '\t';
                                break;
                            }
                            c19 = 65535;
                            break;
                        case 213717026:
                            if (X15.equals("abnormal_mechanism")) {
                                c19 = '\n';
                                break;
                            }
                            c19 = 65535;
                            break;
                        default:
                            c19 = 65535;
                            break;
                    }
                    switch (c19) {
                        case 0:
                            d10 = x1Var.t();
                            continue;
                        case 1:
                            date4 = x1Var.q(iLogger);
                            continue;
                        case 2:
                            num6 = x1Var.P();
                            continue;
                        case 3:
                            String a = io.sentry.util.l.a(x1Var.l0());
                            if (a != null) {
                                f6Var = f6.valueOf(a);
                                break;
                            } else {
                                continue;
                            }
                        case 4:
                            str13 = x1Var.l0();
                            continue;
                        case 5:
                            l6 = x1Var.U();
                            continue;
                        case 6:
                            String l027 = x1Var.l0();
                            if (l027 != null && (l027.length() == 36 || l027.length() == 32)) {
                                str14 = l027;
                                break;
                            } else {
                                iLogger.u(SentryLevel.ERROR, "%s sid is not valid.", l027);
                                continue;
                            }
                            break;
                        case 7:
                            bool = x1Var.o();
                            continue;
                        case '\b':
                            date5 = x1Var.q(iLogger);
                            continue;
                        case '\t':
                            x1Var.f();
                            while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                                String X16 = x1Var.X();
                                X16.getClass();
                                switch (X16.hashCode()) {
                                    case -85904877:
                                        if (X16.equals("environment")) {
                                            c20 = 0;
                                            break;
                                        }
                                        c20 = 65535;
                                        break;
                                    case 1090594823:
                                        if (X16.equals("release")) {
                                            c20 = 1;
                                            break;
                                        }
                                        c20 = 65535;
                                        break;
                                    case 1480014044:
                                        if (X16.equals("ip_address")) {
                                            c20 = 2;
                                            break;
                                        }
                                        c20 = 65535;
                                        break;
                                    case 1917799825:
                                        if (X16.equals("user_agent")) {
                                            c20 = 3;
                                            break;
                                        }
                                        c20 = 65535;
                                        break;
                                    default:
                                        c20 = 65535;
                                        break;
                                }
                                switch (c20) {
                                    case 0:
                                        str17 = x1Var.l0();
                                        break;
                                    case 1:
                                        str18 = x1Var.l0();
                                        break;
                                    case 2:
                                        str15 = x1Var.l0();
                                        break;
                                    case 3:
                                        str16 = x1Var.l0();
                                        break;
                                    default:
                                        switch (x1Var.f12074d) {
                                            case 0:
                                                io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) x1Var.f12075e;
                                                int i14 = 0;
                                                do {
                                                    int i15 = aVar.E;
                                                    if (i15 == 0) {
                                                        i15 = aVar.i();
                                                    }
                                                    if (i15 == 3) {
                                                        i5 = 1;
                                                        aVar.l0(1);
                                                    } else {
                                                        i5 = 1;
                                                        if (i15 == 1) {
                                                            aVar.l0(3);
                                                        } else if (i15 == 4) {
                                                            aVar.J--;
                                                            i14--;
                                                            i6 = i5;
                                                            i10 = 0;
                                                            aVar.E = i10;
                                                        } else if (i15 == 2) {
                                                            aVar.J--;
                                                            i14--;
                                                            i6 = 1;
                                                            i10 = 0;
                                                            aVar.E = i10;
                                                        } else {
                                                            if (i15 == 14 || i15 == 10) {
                                                                do {
                                                                    int i16 = 0;
                                                                    while (true) {
                                                                        int i17 = aVar.f12056v + i16;
                                                                        if (i17 < aVar.f12057w) {
                                                                            char c23 = aVar.f12055i[i17];
                                                                            if (c23 != '\t' && c23 != '\n' && c23 != '\f' && c23 != '\r' && c23 != ' ') {
                                                                                if (c23 == '#') {
                                                                                    break;
                                                                                } else if (c23 == ',') {
                                                                                    break;
                                                                                } else if (c23 != '/' && c23 != '=') {
                                                                                    if (c23 != '{' && c23 != '}' && c23 != ':') {
                                                                                        if (c23 == ';') {
                                                                                            break;
                                                                                        } else {
                                                                                            switch (c23) {
                                                                                                case '[':
                                                                                                case ']':
                                                                                                    break;
                                                                                                case '\\':
                                                                                                    break;
                                                                                                default:
                                                                                                    i16++;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            aVar.f12056v = i17;
                                                                            i6 = 1;
                                                                        }
                                                                    }
                                                                } while (aVar.q(1));
                                                            } else {
                                                                if (i15 == 8 || i15 == 12) {
                                                                    aVar.n0('\'');
                                                                } else if (i15 == 9 || i15 == 13) {
                                                                    aVar.n0('\"');
                                                                } else if (i15 == 16) {
                                                                    aVar.f12056v += aVar.G;
                                                                }
                                                                i6 = 1;
                                                            }
                                                            i10 = 0;
                                                            aVar.E = i10;
                                                        }
                                                    }
                                                    i14++;
                                                    i6 = i5;
                                                    i10 = 0;
                                                    aVar.E = i10;
                                                } while (i14 != 0);
                                                int[] iArr = aVar.L;
                                                int i18 = aVar.J - i6;
                                                iArr[i18] = iArr[i18] + i6;
                                                aVar.K[i18] = "null";
                                                break;
                                        }
                                }
                            }
                            x1Var.i();
                            continue;
                        case '\n':
                            str19 = x1Var.l0();
                            break;
                        default:
                            if (concurrentHashMap6 == null) {
                                concurrentHashMap6 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap6, X15);
                            break;
                    }
                }
                if (f6Var == null) {
                    throw f("status", iLogger);
                }
                if (date4 == null) {
                    throw f("started", iLogger);
                }
                if (num6 == null) {
                    throw f("errors", iLogger);
                }
                if (str18 == null) {
                    throw f("release", iLogger);
                }
                g6 g6Var = new g6(f6Var, date4, date5, num6.intValue(), str13, str14, bool, l6, d10, str15, str16, str17, str18, str19);
                g6Var.M = concurrentHashMap6;
                x1Var.i();
                return g6Var;
            case 22:
                return b(x1Var, iLogger);
            case 23:
                return new k6(x1Var.j0());
            case 24:
                return l6.valueOf(x1Var.j0().toUpperCase(Locale.ROOT));
            case 25:
                x1Var.f();
                String str20 = null;
                ConcurrentHashMap concurrentHashMap7 = null;
                String str21 = null;
                String str22 = null;
                String str23 = null;
                String str24 = null;
                String str25 = null;
                io.sentry.protocol.v vVar6 = null;
                String str26 = null;
                String str27 = null;
                io.sentry.protocol.v vVar7 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X17 = x1Var.X();
                    X17.getClass();
                    switch (X17.hashCode()) {
                        case -454767501:
                            if (X17.equals("replay_id")) {
                                c21 = 0;
                                break;
                            }
                            c21 = 65535;
                            break;
                        case -147132913:
                            if (X17.equals("user_id")) {
                                c21 = 1;
                                break;
                            }
                            c21 = 65535;
                            break;
                        case -85904877:
                            if (X17.equals("environment")) {
                                c21 = 2;
                                break;
                            }
                            c21 = 65535;
                            break;
                        case 153192858:
                            if (X17.equals("sample_rand")) {
                                c21 = 3;
                                break;
                            }
                            c21 = 65535;
                            break;
                        case 153193045:
                            if (X17.equals("sample_rate")) {
                                c21 = 4;
                                break;
                            }
                            c21 = 65535;
                            break;
                        case 1090594823:
                            if (X17.equals("release")) {
                                c21 = 5;
                                break;
                            }
                            c21 = 65535;
                            break;
                        case 1270300245:
                            if (X17.equals("trace_id")) {
                                c21 = 6;
                                break;
                            }
                            c21 = 65535;
                            break;
                        case 1864843258:
                            if (X17.equals("sampled")) {
                                c21 = 7;
                                break;
                            }
                            c21 = 65535;
                            break;
                        case 1904812937:
                            if (X17.equals("public_key")) {
                                c21 = '\b';
                                break;
                            }
                            c21 = 65535;
                            break;
                        case 2141246174:
                            if (X17.equals("transaction")) {
                                c21 = '\t';
                                break;
                            }
                            c21 = 65535;
                            break;
                        default:
                            c21 = 65535;
                            break;
                    }
                    switch (c21) {
                        case 0:
                            vVar6 = new io.sentry.protocol.v(x1Var.j0());
                            break;
                        case 1:
                            str23 = x1Var.l0();
                            break;
                        case 2:
                            str22 = x1Var.l0();
                            break;
                        case 3:
                            str26 = x1Var.l0();
                            break;
                        case 4:
                            str25 = x1Var.l0();
                            break;
                        case 5:
                            str27 = x1Var.l0();
                            break;
                        case 6:
                            vVar7 = new io.sentry.protocol.v(x1Var.j0());
                            break;
                        case 7:
                            str20 = x1Var.l0();
                            break;
                        case '\b':
                            str21 = x1Var.j0();
                            break;
                        case '\t':
                            str24 = x1Var.l0();
                            break;
                        default:
                            if (concurrentHashMap7 == null) {
                                concurrentHashMap7 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap7, X17);
                            break;
                    }
                }
                if (vVar7 == null) {
                    throw g("trace_id", iLogger);
                }
                if (str21 == null) {
                    throw g("public_key", iLogger);
                }
                n6 n6Var2 = new n6(vVar7, str21, str27, str22, str23, str24, str25, str20, vVar6, str26);
                n6Var2.H = concurrentHashMap7;
                x1Var.i();
                return n6Var2;
            default:
                x1Var.f();
                io.sentry.protocol.v vVar8 = null;
                String str28 = null;
                String str29 = null;
                String str30 = null;
                HashMap hashMap12 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X18 = x1Var.X();
                    X18.getClass();
                    switch (X18.hashCode()) {
                        case -602415628:
                            if (X18.equals("comments")) {
                                c22 = 0;
                                break;
                            }
                            c22 = 65535;
                            break;
                        case 3373707:
                            if (X18.equals(StackTraceHelper.NAME_KEY)) {
                                c22 = 1;
                                break;
                            }
                            c22 = 65535;
                            break;
                        case 96619420:
                            if (X18.equals("email")) {
                                c22 = 2;
                                break;
                            }
                            c22 = 65535;
                            break;
                        case 278118624:
                            if (X18.equals("event_id")) {
                                c22 = 3;
                                break;
                            }
                            c22 = 65535;
                            break;
                        default:
                            c22 = 65535;
                            break;
                    }
                    switch (c22) {
                        case 0:
                            str30 = x1Var.l0();
                            break;
                        case 1:
                            str28 = x1Var.l0();
                            break;
                        case 2:
                            str29 = x1Var.l0();
                            break;
                        case 3:
                            vVar8 = new io.sentry.protocol.v(x1Var.j0());
                            break;
                        default:
                            if (hashMap12 == null) {
                                hashMap12 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap12, X18);
                            break;
                    }
                }
                x1Var.i();
                if (vVar8 != null) {
                    s6 s6Var = new s6(vVar8, str28, str29, str30);
                    s6Var.f11983w = hashMap12;
                    return s6Var;
                }
                IllegalStateException illegalStateException14 = new IllegalStateException("Missing required field \"event_id\"");
                iLogger.k(SentryLevel.ERROR, "Missing required field \"event_id\"", illegalStateException14);
                throw illegalStateException14;
        }
    }
}
