package io.sentry.clientreport;

import androidx.recyclerview.widget.RecyclerView;
import com.discord.jank_stats.JankRecordStore;
import com.discord.jank_stats.JankScreenContext;
import com.discord.js_watchdog.SharedPreferencesKey;
import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.e3;
import io.sentry.k6;
import io.sentry.l6;
import io.sentry.n1;
import io.sentry.protocol.DebugImage;
import io.sentry.protocol.SentryStackFrame;
import io.sentry.protocol.a0;
import io.sentry.protocol.e0;
import io.sentry.protocol.g;
import io.sentry.protocol.h;
import io.sentry.protocol.i;
import io.sentry.protocol.j;
import io.sentry.protocol.k;
import io.sentry.protocol.m;
import io.sentry.protocol.n;
import io.sentry.protocol.o;
import io.sentry.protocol.p;
import io.sentry.protocol.r;
import io.sentry.protocol.s;
import io.sentry.protocol.t;
import io.sentry.protocol.u;
import io.sentry.protocol.v;
import io.sentry.protocol.w;
import io.sentry.protocol.x;
import io.sentry.protocol.y;
import io.sentry.protocol.z;
import io.sentry.w4;
import io.sentry.x1;
import j$.util.DesugarTimeZone;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TimeZone;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArraySet;
import ys.l;

/* loaded from: classes3.dex */
public final class a implements n1 {
    public final /* synthetic */ int a;

    public /* synthetic */ a(int i5) {
        this.a = i5;
    }

    public static io.sentry.protocol.a b(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        io.sentry.protocol.a aVar = new io.sentry.protocol.a();
        ConcurrentHashMap concurrentHashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            X = x1Var.X();
            X.getClass();
            switch (X) {
                case "split_names":
                    List list = (List) x1Var.b0();
                    if (list == null) {
                        break;
                    } else {
                        aVar.J = list;
                        break;
                    }
                case "device_app_hash":
                    aVar.f11750i = x1Var.l0();
                    break;
                case "start_type":
                    aVar.G = x1Var.l0();
                    break;
                case "view_names":
                    List list2 = (List) x1Var.b0();
                    if (list2 == null) {
                        break;
                    } else {
                        aVar.F = list2;
                        break;
                    }
                case "app_version":
                    aVar.f11753x = x1Var.l0();
                    break;
                case "in_foreground":
                    aVar.H = x1Var.o();
                    break;
                case "build_type":
                    aVar.f11751v = x1Var.l0();
                    break;
                case "app_identifier":
                    aVar.f11748d = x1Var.l0();
                    break;
                case "app_start_time":
                    aVar.f11749e = x1Var.q(iLogger);
                    break;
                case "permissions":
                    aVar.E = l.r((Map) x1Var.b0());
                    break;
                case "app_name":
                    aVar.f11752w = x1Var.l0();
                    break;
                case "app_build":
                    aVar.f11754y = x1Var.l0();
                    break;
                case "is_split_apks":
                    aVar.I = x1Var.o();
                    break;
                default:
                    if (concurrentHashMap == null) {
                        concurrentHashMap = new ConcurrentHashMap();
                    }
                    x1Var.m0(iLogger, concurrentHashMap, X);
                    break;
            }
        }
        aVar.K = concurrentHashMap;
        x1Var.i();
        return aVar;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public static io.sentry.protocol.c c(x1 x1Var, ILogger iLogger) {
        char c6;
        boolean z5;
        boolean z6;
        io.sentry.protocol.c cVar = new io.sentry.protocol.c();
        x1Var.f();
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X = x1Var.X();
            X.getClass();
            int i5 = 11;
            switch (X.hashCode()) {
                case -1335157162:
                    if (X.equals("device")) {
                        c6 = 0;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -895679987:
                    if (X.equals("spring")) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -340323263:
                    if (X.equals("response")) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -309425751:
                    if (X.equals("profile")) {
                        c6 = 3;
                        break;
                    }
                    c6 = 65535;
                    break;
                case -191501435:
                    if (X.equals("feedback")) {
                        c6 = 4;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3556:
                    if (X.equals("os")) {
                        c6 = 5;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 96801:
                    if (X.equals("app")) {
                        c6 = 6;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 102572:
                    if (X.equals("gpu")) {
                        c6 = 7;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 97513095:
                    if (X.equals("flags")) {
                        c6 = '\b';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 110620997:
                    if (X.equals(SharedPreferencesKey.TRACE)) {
                        c6 = '\t';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 150940456:
                    if (X.equals("browser")) {
                        c6 = '\n';
                        break;
                    }
                    c6 = 65535;
                    break;
                case 1550962648:
                    if (X.equals("runtime")) {
                        c6 = 11;
                        break;
                    }
                    c6 = 65535;
                    break;
                default:
                    c6 = 65535;
                    break;
            }
            ArrayList arrayList = null;
            switch (c6) {
                case 0:
                    cVar.p(d(x1Var, iLogger));
                    break;
                case 1:
                    x1Var.f();
                    e0 e0Var = new e0();
                    ConcurrentHashMap concurrentHashMap = null;
                    while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                        String X2 = x1Var.X();
                        X2.getClass();
                        if (X2.equals("active_profiles")) {
                            List list = (List) x1Var.b0();
                            if (list != null) {
                                String[] strArr = new String[list.size()];
                                list.toArray(strArr);
                                e0Var.f11775d = strArr;
                            }
                        } else {
                            if (concurrentHashMap == null) {
                                concurrentHashMap = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap, X2);
                        }
                    }
                    e0Var.f11776e = concurrentHashMap;
                    x1Var.i();
                    cVar.v(e0Var);
                    break;
                case 2:
                    x1Var.f();
                    r rVar = new r();
                    ConcurrentHashMap concurrentHashMap2 = null;
                    while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                        String X3 = x1Var.X();
                        X3.getClass();
                        switch (X3.hashCode()) {
                            case -891699686:
                                if (X3.equals("status_code")) {
                                    z5 = false;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 3076010:
                                if (X3.equals("data")) {
                                    z5 = true;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 795307910:
                                if (X3.equals("headers")) {
                                    z5 = 2;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 952189583:
                                if (X3.equals("cookies")) {
                                    z5 = 3;
                                    break;
                                }
                                z5 = -1;
                                break;
                            case 1252988030:
                                if (X3.equals("body_size")) {
                                    z5 = 4;
                                    break;
                                }
                                z5 = -1;
                                break;
                            default:
                                z5 = -1;
                                break;
                        }
                        switch (z5) {
                            case false:
                                rVar.f11874i = x1Var.P();
                                break;
                            case true:
                                rVar.f11876w = x1Var.b0();
                                break;
                            case true:
                                Map map = (Map) x1Var.b0();
                                if (map == null) {
                                    break;
                                } else {
                                    rVar.f11873e = l.r(map);
                                    break;
                                }
                            case true:
                                rVar.f11872d = x1Var.l0();
                                break;
                            case true:
                                rVar.f11875v = x1Var.U();
                                break;
                            default:
                                if (concurrentHashMap2 == null) {
                                    concurrentHashMap2 = new ConcurrentHashMap();
                                }
                                x1Var.m0(iLogger, concurrentHashMap2, X3);
                                break;
                        }
                    }
                    rVar.f11877x = concurrentHashMap2;
                    x1Var.i();
                    cVar.t(rVar);
                    break;
                case 3:
                    x1Var.f();
                    e3 e3Var = new e3(v.f11895e);
                    ConcurrentHashMap concurrentHashMap3 = null;
                    while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                        String X4 = x1Var.X();
                        X4.getClass();
                        if (X4.equals("profiler_id")) {
                            v vVar = (v) x1Var.d0(iLogger, new a(23));
                            if (vVar != null) {
                                e3Var.f11530d = vVar;
                            }
                        } else {
                            if (concurrentHashMap3 == null) {
                                concurrentHashMap3 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap3, X4);
                        }
                    }
                    e3Var.f11531e = concurrentHashMap3;
                    x1Var.i();
                    cVar.k(e3Var, "profile");
                    break;
                case 4:
                    cVar.k(e(x1Var, iLogger), "feedback");
                    break;
                case 5:
                    cVar.s(g(x1Var, iLogger));
                    break;
                case 6:
                    cVar.n(b(x1Var, iLogger));
                    break;
                case 7:
                    cVar.r(f(x1Var, iLogger));
                    break;
                case '\b':
                    x1Var.f();
                    ConcurrentHashMap concurrentHashMap4 = null;
                    while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                        String X5 = x1Var.X();
                        X5.getClass();
                        if (X5.equals("values")) {
                            arrayList = x1Var.Q(iLogger, new a(i5));
                        } else {
                            if (concurrentHashMap4 == null) {
                                concurrentHashMap4 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap4, X5);
                        }
                    }
                    if (arrayList == null) {
                        arrayList = new ArrayList();
                    }
                    h hVar = new h(arrayList);
                    hVar.f11795e = concurrentHashMap4;
                    x1Var.i();
                    cVar.q(hVar);
                    break;
                case '\t':
                    cVar.w(io.sentry.d.b(x1Var, iLogger));
                    break;
                case '\n':
                    x1Var.f();
                    io.sentry.protocol.b bVar = new io.sentry.protocol.b();
                    ConcurrentHashMap concurrentHashMap5 = null;
                    while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                        String X6 = x1Var.X();
                        X6.getClass();
                        if (X6.equals(StackTraceHelper.NAME_KEY)) {
                            bVar.f11760d = x1Var.l0();
                        } else if (X6.equals("version")) {
                            bVar.f11761e = x1Var.l0();
                        } else {
                            if (concurrentHashMap5 == null) {
                                concurrentHashMap5 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap5, X6);
                        }
                    }
                    bVar.f11762i = concurrentHashMap5;
                    x1Var.i();
                    cVar.o(bVar);
                    break;
                case 11:
                    x1Var.f();
                    x xVar = new x();
                    ConcurrentHashMap concurrentHashMap6 = null;
                    while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                        String X7 = x1Var.X();
                        X7.getClass();
                        switch (X7.hashCode()) {
                            case -339173787:
                                if (X7.equals("raw_description")) {
                                    z6 = false;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case 3373707:
                                if (X7.equals(StackTraceHelper.NAME_KEY)) {
                                    z6 = true;
                                    break;
                                }
                                z6 = -1;
                                break;
                            case 351608024:
                                if (X7.equals("version")) {
                                    z6 = 2;
                                    break;
                                }
                                z6 = -1;
                                break;
                            default:
                                z6 = -1;
                                break;
                        }
                        switch (z6) {
                            case false:
                                xVar.f11902i = x1Var.l0();
                                break;
                            case true:
                                xVar.f11900d = x1Var.l0();
                                break;
                            case true:
                                xVar.f11901e = x1Var.l0();
                                break;
                            default:
                                if (concurrentHashMap6 == null) {
                                    concurrentHashMap6 = new ConcurrentHashMap();
                                }
                                x1Var.m0(iLogger, concurrentHashMap6, X7);
                                break;
                        }
                    }
                    xVar.f11903v = concurrentHashMap6;
                    x1Var.i();
                    cVar.u(xVar);
                    break;
                default:
                    Object b02 = x1Var.b0();
                    if (b02 == null) {
                        break;
                    } else {
                        cVar.k(b02, X);
                        break;
                    }
            }
        }
        x1Var.i();
        return cVar;
    }

    public static io.sentry.protocol.f d(x1 x1Var, ILogger iLogger) {
        String X;
        int i5;
        TimeZone timeZone;
        x1Var.f();
        io.sentry.protocol.f fVar = new io.sentry.protocol.f();
        ConcurrentHashMap concurrentHashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            X = x1Var.X();
            X.getClass();
            i5 = 10;
            switch (X) {
                case "timezone":
                    switch (x1Var.f12074d) {
                        case 0:
                            io.sentry.vendor.gson.stream.a aVar = (io.sentry.vendor.gson.stream.a) x1Var.f12075e;
                            if (aVar.j0() == io.sentry.vendor.gson.stream.b.NULL) {
                                aVar.V();
                            } else {
                                try {
                                    timeZone = DesugarTimeZone.getTimeZone(aVar.b0());
                                    break;
                                } catch (Exception e9) {
                                    iLogger.k(SentryLevel.ERROR, "Error when deserializing TimeZone", e9);
                                }
                            }
                            timeZone = null;
                            break;
                        default:
                            String str = (String) x1Var.n0();
                            if (str != null) {
                                timeZone = DesugarTimeZone.getTimeZone(str);
                                break;
                            }
                            timeZone = null;
                            break;
                    }
                    fVar.W = timeZone;
                    break;
                case "boot_time":
                    if (x1Var.o0() != io.sentry.vendor.gson.stream.b.STRING) {
                        break;
                    } else {
                        fVar.V = x1Var.q(iLogger);
                        break;
                    }
                case "simulator":
                    fVar.I = x1Var.o();
                    break;
                case "manufacturer":
                    fVar.f11781e = x1Var.l0();
                    break;
                case "processor_count":
                    fVar.f11777b0 = x1Var.P();
                    break;
                case "orientation":
                    fVar.H = (io.sentry.protocol.e) x1Var.d0(iLogger, new a(i5));
                    break;
                case "battery_temperature":
                    fVar.a0 = x1Var.A();
                    break;
                case "family":
                    fVar.f11785v = x1Var.l0();
                    break;
                case "locale":
                    fVar.Y = x1Var.l0();
                    break;
                case "online":
                    fVar.G = x1Var.o();
                    break;
                case "battery_level":
                    fVar.E = x1Var.A();
                    break;
                case "model_id":
                    fVar.f11787x = x1Var.l0();
                    break;
                case "screen_density":
                    fVar.T = x1Var.A();
                    break;
                case "screen_dpi":
                    fVar.U = x1Var.P();
                    break;
                case "free_memory":
                    fVar.K = x1Var.U();
                    break;
                case "id":
                    fVar.X = x1Var.l0();
                    break;
                case "name":
                    fVar.f11779d = x1Var.l0();
                    break;
                case "low_memory":
                    fVar.M = x1Var.o();
                    break;
                case "archs":
                    List list = (List) x1Var.b0();
                    if (list == null) {
                        break;
                    } else {
                        String[] strArr = new String[list.size()];
                        list.toArray(strArr);
                        fVar.f11788y = strArr;
                        break;
                    }
                case "brand":
                    fVar.f11784i = x1Var.l0();
                    break;
                case "model":
                    fVar.f11786w = x1Var.l0();
                    break;
                case "cpu_description":
                    fVar.f11780d0 = x1Var.l0();
                    break;
                case "processor_frequency":
                    fVar.f11778c0 = x1Var.t();
                    break;
                case "connection_type":
                    fVar.Z = x1Var.l0();
                    break;
                case "chipset":
                    fVar.f11782e0 = x1Var.l0();
                    break;
                case "screen_width_pixels":
                    fVar.R = x1Var.P();
                    break;
                case "external_storage_size":
                    fVar.P = x1Var.U();
                    break;
                case "storage_size":
                    fVar.N = x1Var.U();
                    break;
                case "usable_memory":
                    fVar.L = x1Var.U();
                    break;
                case "memory_size":
                    fVar.J = x1Var.U();
                    break;
                case "charging":
                    fVar.F = x1Var.o();
                    break;
                case "external_free_storage":
                    fVar.Q = x1Var.U();
                    break;
                case "free_storage":
                    fVar.O = x1Var.U();
                    break;
                case "screen_height_pixels":
                    fVar.S = x1Var.P();
                    break;
                default:
                    if (concurrentHashMap == null) {
                        concurrentHashMap = new ConcurrentHashMap();
                    }
                    x1Var.m0(iLogger, concurrentHashMap, X);
                    break;
            }
        }
        fVar.f11783f0 = concurrentHashMap;
        x1Var.i();
        return fVar;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x0061, code lost:
    
        if (r7.equals("associated_event_id") == false) goto L7;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static i e(x1 x1Var, ILogger iLogger) {
        x1Var.f();
        String str = null;
        String str2 = null;
        String str3 = null;
        v vVar = null;
        v vVar2 = null;
        String str4 = null;
        HashMap hashMap = null;
        while (true) {
            char c6 = 0;
            if (x1Var.o0() != io.sentry.vendor.gson.stream.b.NAME) {
                x1Var.i();
                if (str == null) {
                    IllegalStateException illegalStateException = new IllegalStateException("Missing required field \"message\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"message\"", illegalStateException);
                    throw illegalStateException;
                }
                i iVar = new i();
                if (str.length() > 4096) {
                    iVar.f11803d = str.substring(0, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT);
                } else {
                    iVar.f11803d = str;
                }
                iVar.f11804e = str2;
                iVar.f11805i = str3;
                iVar.f11806v = vVar;
                iVar.f11807w = vVar2;
                iVar.f11808x = str4;
                iVar.f11809y = hashMap;
                return iVar;
            }
            String X = x1Var.X();
            X.getClass();
            switch (X.hashCode()) {
                case -964729863:
                    break;
                case -454767501:
                    if (X.equals("replay_id")) {
                        c6 = 1;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 116079:
                    if (X.equals("url")) {
                        c6 = 2;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 3373707:
                    if (X.equals(StackTraceHelper.NAME_KEY)) {
                        c6 = 3;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 947010237:
                    if (X.equals("contact_email")) {
                        c6 = 4;
                        break;
                    }
                    c6 = 65535;
                    break;
                case 954925063:
                    if (X.equals("message")) {
                        c6 = 5;
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
                    vVar = new v(x1Var.j0());
                    break;
                case 1:
                    vVar2 = new v(x1Var.j0());
                    break;
                case 2:
                    str4 = x1Var.l0();
                    break;
                case 3:
                    str3 = x1Var.l0();
                    break;
                case 4:
                    str2 = x1Var.l0();
                    break;
                case 5:
                    str = x1Var.l0();
                    break;
                default:
                    if (hashMap == null) {
                        hashMap = new HashMap();
                    }
                    x1Var.m0(iLogger, hashMap, X);
                    break;
            }
        }
    }

    public static k f(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        k kVar = new k();
        ConcurrentHashMap concurrentHashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            X = x1Var.X();
            X.getClass();
            switch (X) {
                case "npot_support":
                    kVar.F = x1Var.l0();
                    break;
                case "vendor_id":
                    kVar.f11826i = x1Var.l0();
                    break;
                case "multi_threaded_rendering":
                    kVar.f11830y = x1Var.o();
                    break;
                case "id":
                    kVar.f11825e = x1Var.P();
                    break;
                case "name":
                    kVar.f11824d = x1Var.l0();
                    break;
                case "vendor_name":
                    kVar.f11827v = x1Var.l0();
                    break;
                case "version":
                    kVar.E = x1Var.l0();
                    break;
                case "api_type":
                    kVar.f11829x = x1Var.l0();
                    break;
                case "memory_size":
                    kVar.f11828w = x1Var.P();
                    break;
                default:
                    if (concurrentHashMap == null) {
                        concurrentHashMap = new ConcurrentHashMap();
                    }
                    x1Var.m0(iLogger, concurrentHashMap, X);
                    break;
            }
        }
        kVar.G = concurrentHashMap;
        x1Var.i();
        return kVar;
    }

    public static o g(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        o oVar = new o();
        ConcurrentHashMap concurrentHashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            X = x1Var.X();
            X.getClass();
            switch (X) {
                case "rooted":
                    oVar.f11851x = x1Var.o();
                    break;
                case "raw_description":
                    oVar.f11848i = x1Var.l0();
                    break;
                case "name":
                    oVar.f11846d = x1Var.l0();
                    break;
                case "build":
                    oVar.f11849v = x1Var.l0();
                    break;
                case "version":
                    oVar.f11847e = x1Var.l0();
                    break;
                case "kernel_version":
                    oVar.f11850w = x1Var.l0();
                    break;
                default:
                    if (concurrentHashMap == null) {
                        concurrentHashMap = new ConcurrentHashMap();
                    }
                    x1Var.m0(iLogger, concurrentHashMap, X);
                    break;
            }
        }
        oVar.f11852y = concurrentHashMap;
        x1Var.i();
        return oVar;
    }

    public static IllegalStateException h(String str, ILogger iLogger) {
        String f2 = s4.h.f("Missing required field \"", str, "\"");
        IllegalStateException illegalStateException = new IllegalStateException(f2);
        iLogger.k(SentryLevel.ERROR, f2, illegalStateException);
        return illegalStateException;
    }

    public static IllegalStateException i(String str, ILogger iLogger) {
        String f2 = s4.h.f("Missing required field \"", str, "\"");
        IllegalStateException illegalStateException = new IllegalStateException(f2);
        iLogger.k(SentryLevel.ERROR, f2, illegalStateException);
        return illegalStateException;
    }

    public static IllegalStateException j(String str, ILogger iLogger) {
        String f2 = s4.h.f("Missing required field \"", str, "\"");
        IllegalStateException illegalStateException = new IllegalStateException(f2);
        iLogger.k(SentryLevel.ERROR, f2, illegalStateException);
        return illegalStateException;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // io.sentry.n1
    public final Object a(x1 x1Var, ILogger iLogger) {
        boolean z5;
        boolean z6;
        Double valueOf;
        boolean z7;
        boolean z8;
        char c6;
        boolean z10;
        char c8;
        boolean z11;
        boolean z12;
        boolean z13;
        boolean z14;
        char c10;
        char c11;
        boolean z15;
        int i5 = 7;
        int i6 = 3;
        int i10 = 1;
        Boolean bool = null;
        switch (this.a) {
            case 0:
                ArrayList arrayList = new ArrayList();
                x1Var.f();
                Date date = null;
                HashMap hashMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X = x1Var.X();
                    X.getClass();
                    if (X.equals("discarded_events")) {
                        arrayList.addAll(x1Var.Q(iLogger, new a(i10)));
                    } else if (X.equals("timestamp")) {
                        date = x1Var.q(iLogger);
                    } else {
                        if (hashMap == null) {
                            hashMap = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap, X);
                    }
                }
                x1Var.i();
                if (date == null) {
                    throw h("timestamp", iLogger);
                }
                if (arrayList.isEmpty()) {
                    throw h("discarded_events", iLogger);
                }
                b bVar = new b(date, arrayList);
                bVar.f11464i = hashMap;
                return bVar;
            case 1:
                x1Var.f();
                String str = null;
                String str2 = null;
                Long l6 = null;
                HashMap hashMap2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X2 = x1Var.X();
                    X2.getClass();
                    switch (X2.hashCode()) {
                        case -1285004149:
                            if (X2.equals("quantity")) {
                                z5 = false;
                                break;
                            }
                            z5 = -1;
                            break;
                        case -934964668:
                            if (X2.equals("reason")) {
                                z5 = true;
                                break;
                            }
                            z5 = -1;
                            break;
                        case 50511102:
                            if (X2.equals("category")) {
                                z5 = 2;
                                break;
                            }
                            z5 = -1;
                            break;
                        default:
                            z5 = -1;
                            break;
                    }
                    switch (z5) {
                        case false:
                            l6 = x1Var.U();
                            break;
                        case true:
                            str = x1Var.l0();
                            break;
                        case true:
                            str2 = x1Var.l0();
                            break;
                        default:
                            if (hashMap2 == null) {
                                hashMap2 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap2, X2);
                            break;
                    }
                }
                x1Var.i();
                if (str == null) {
                    throw i("reason", iLogger);
                }
                if (str2 == null) {
                    throw i("category", iLogger);
                }
                if (l6 == null) {
                    throw i("quantity", iLogger);
                }
                e eVar = new e(l6, str, str2);
                eVar.f11469v = hashMap2;
                return eVar;
            case 2:
                x1Var.f();
                io.sentry.profilemeasurements.a aVar = new io.sentry.profilemeasurements.a(JankScreenContext.UNKNOWN_SCREEN, new ArrayList());
                ConcurrentHashMap concurrentHashMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X3 = x1Var.X();
                    X3.getClass();
                    if (X3.equals("values")) {
                        ArrayList Q = x1Var.Q(iLogger, new a(i6));
                        if (Q != null) {
                            aVar.f11736i = Q;
                        }
                    } else if (X3.equals("unit")) {
                        String l02 = x1Var.l0();
                        if (l02 != null) {
                            aVar.f11735e = l02;
                        }
                    } else {
                        if (concurrentHashMap == null) {
                            concurrentHashMap = new ConcurrentHashMap();
                        }
                        x1Var.m0(iLogger, concurrentHashMap, X3);
                    }
                }
                aVar.f11734d = concurrentHashMap;
                x1Var.i();
                return aVar;
            case 3:
                x1Var.f();
                io.sentry.profilemeasurements.b bVar2 = new io.sentry.profilemeasurements.b(0L, 0, 0L);
                ConcurrentHashMap concurrentHashMap2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X4 = x1Var.X();
                    X4.getClass();
                    switch (X4.hashCode()) {
                        case -1709412534:
                            if (X4.equals("elapsed_since_start_ns")) {
                                z6 = false;
                                break;
                            }
                            z6 = -1;
                            break;
                        case 55126294:
                            if (X4.equals("timestamp")) {
                                z6 = true;
                                break;
                            }
                            z6 = -1;
                            break;
                        case 111972721:
                            if (X4.equals("value")) {
                                z6 = 2;
                                break;
                            }
                            z6 = -1;
                            break;
                        default:
                            z6 = -1;
                            break;
                    }
                    switch (z6) {
                        case false:
                            String l03 = x1Var.l0();
                            if (l03 == null) {
                                break;
                            } else {
                                bVar2.f11739i = l03;
                                break;
                            }
                        case true:
                            try {
                                valueOf = x1Var.t();
                            } catch (NumberFormatException unused) {
                                valueOf = x1Var.q(iLogger) != null ? Double.valueOf(r5.getTime() / 1000.0d) : null;
                            }
                            if (valueOf == null) {
                                break;
                            } else {
                                bVar2.f11738e = valueOf.doubleValue();
                                break;
                            }
                        case true:
                            Double t5 = x1Var.t();
                            if (t5 == null) {
                                break;
                            } else {
                                bVar2.f11740v = t5.doubleValue();
                                break;
                            }
                        default:
                            if (concurrentHashMap2 == null) {
                                concurrentHashMap2 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap2, X4);
                            break;
                    }
                }
                bVar2.f11737d = concurrentHashMap2;
                x1Var.i();
                return bVar2;
            case 4:
                return b(x1Var, iLogger);
            case 5:
                x1Var.f();
                io.sentry.protocol.b bVar3 = new io.sentry.protocol.b();
                ConcurrentHashMap concurrentHashMap3 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X5 = x1Var.X();
                    X5.getClass();
                    if (X5.equals(StackTraceHelper.NAME_KEY)) {
                        bVar3.f11760d = x1Var.l0();
                    } else if (X5.equals("version")) {
                        bVar3.f11761e = x1Var.l0();
                    } else {
                        if (concurrentHashMap3 == null) {
                            concurrentHashMap3 = new ConcurrentHashMap();
                        }
                        x1Var.m0(iLogger, concurrentHashMap3, X5);
                    }
                }
                bVar3.f11762i = concurrentHashMap3;
                x1Var.i();
                return bVar3;
            case 6:
                return c(x1Var, iLogger);
            case 7:
                DebugImage debugImage = new DebugImage();
                x1Var.f();
                AbstractMap abstractMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X6 = x1Var.X();
                    X6.getClass();
                    switch (X6.hashCode()) {
                        case -1840639000:
                            if (X6.equals("debug_file")) {
                                z7 = false;
                                break;
                            }
                            z7 = -1;
                            break;
                        case -1443345323:
                            if (X6.equals("image_addr")) {
                                z7 = true;
                                break;
                            }
                            z7 = -1;
                            break;
                        case -1442803611:
                            if (X6.equals("image_size")) {
                                z7 = 2;
                                break;
                            }
                            z7 = -1;
                            break;
                        case -1127437170:
                            if (X6.equals("code_file")) {
                                z7 = 3;
                                break;
                            }
                            z7 = -1;
                            break;
                        case 3002454:
                            if (X6.equals("arch")) {
                                z7 = 4;
                                break;
                            }
                            z7 = -1;
                            break;
                        case 3575610:
                            if (X6.equals("type")) {
                                z7 = 5;
                                break;
                            }
                            z7 = -1;
                            break;
                        case 3601339:
                            if (X6.equals("uuid")) {
                                z7 = 6;
                                break;
                            }
                            z7 = -1;
                            break;
                        case 547804807:
                            if (X6.equals("debug_id")) {
                                z7 = 7;
                                break;
                            }
                            z7 = -1;
                            break;
                        case 941842605:
                            if (X6.equals("code_id")) {
                                z7 = 8;
                                break;
                            }
                            z7 = -1;
                            break;
                        default:
                            z7 = -1;
                            break;
                    }
                    switch (z7) {
                        case false:
                            debugImage.debugFile = x1Var.l0();
                            break;
                        case true:
                            debugImage.imageAddr = x1Var.l0();
                            break;
                        case true:
                            debugImage.imageSize = x1Var.U();
                            break;
                        case true:
                            debugImage.codeFile = x1Var.l0();
                            break;
                        case true:
                            debugImage.arch = x1Var.l0();
                            break;
                        case true:
                            debugImage.type = x1Var.l0();
                            break;
                        case true:
                            debugImage.uuid = x1Var.l0();
                            break;
                        case true:
                            debugImage.debugId = x1Var.l0();
                            break;
                        case true:
                            debugImage.codeId = x1Var.l0();
                            break;
                        default:
                            if (abstractMap == null) {
                                abstractMap = new HashMap();
                            }
                            x1Var.m0(iLogger, abstractMap, X6);
                            break;
                    }
                }
                x1Var.i();
                debugImage.setUnknown(abstractMap);
                return debugImage;
            case 8:
                io.sentry.protocol.d dVar = new io.sentry.protocol.d();
                x1Var.f();
                HashMap hashMap3 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X7 = x1Var.X();
                    X7.getClass();
                    if (X7.equals("images")) {
                        dVar.f11773e = x1Var.Q(iLogger, new a(i5));
                    } else if (X7.equals("sdk_info")) {
                        dVar.f11772d = (s) x1Var.d0(iLogger, new a(20));
                    } else {
                        if (hashMap3 == null) {
                            hashMap3 = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap3, X7);
                    }
                }
                x1Var.i();
                dVar.f11774i = hashMap3;
                return dVar;
            case 9:
                return d(x1Var, iLogger);
            case 10:
                return io.sentry.protocol.e.valueOf(x1Var.j0().toUpperCase(Locale.ROOT));
            case 11:
                x1Var.f();
                String str3 = null;
                ConcurrentHashMap concurrentHashMap4 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X8 = x1Var.X();
                    X8.getClass();
                    if (X8.equals("result")) {
                        bool = x1Var.o();
                    } else if (X8.equals("flag")) {
                        str3 = x1Var.l0();
                    } else {
                        if (concurrentHashMap4 == null) {
                            concurrentHashMap4 = new ConcurrentHashMap();
                        }
                        x1Var.m0(iLogger, concurrentHashMap4, X8);
                    }
                }
                if (str3 == null) {
                    IllegalStateException illegalStateException = new IllegalStateException("Missing required field \"flag\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"flag\"", illegalStateException);
                    throw illegalStateException;
                }
                if (bool == null) {
                    IllegalStateException illegalStateException2 = new IllegalStateException("Missing required field \"result\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"result\"", illegalStateException2);
                    throw illegalStateException2;
                }
                boolean booleanValue = bool.booleanValue();
                g gVar = new g();
                gVar.f11791d = str3;
                gVar.f11792e = booleanValue;
                gVar.f11793i = concurrentHashMap4;
                x1Var.i();
                return gVar;
            case 12:
                return e(x1Var, iLogger);
            case 13:
                x1Var.f();
                j jVar = new j();
                ConcurrentHashMap concurrentHashMap5 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X9 = x1Var.X();
                    X9.getClass();
                    switch (X9.hashCode()) {
                        case -934795532:
                            if (X9.equals("region")) {
                                z8 = false;
                                break;
                            }
                            z8 = -1;
                            break;
                        case 3053931:
                            if (X9.equals("city")) {
                                z8 = true;
                                break;
                            }
                            z8 = -1;
                            break;
                        case 1481071862:
                            if (X9.equals("country_code")) {
                                z8 = 2;
                                break;
                            }
                            z8 = -1;
                            break;
                        default:
                            z8 = -1;
                            break;
                    }
                    switch (z8) {
                        case false:
                            jVar.f11815i = x1Var.l0();
                            break;
                        case true:
                            jVar.f11813d = x1Var.l0();
                            break;
                        case true:
                            jVar.f11814e = x1Var.l0();
                            break;
                        default:
                            if (concurrentHashMap5 == null) {
                                concurrentHashMap5 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap5, X9);
                            break;
                    }
                }
                jVar.f11816v = concurrentHashMap5;
                x1Var.i();
                return jVar;
            case 14:
                return f(x1Var, iLogger);
            case 15:
                x1Var.f();
                Number number = null;
                String str4 = null;
                AbstractMap abstractMap2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X10 = x1Var.X();
                    X10.getClass();
                    if (X10.equals("unit")) {
                        str4 = x1Var.l0();
                    } else if (X10.equals("value")) {
                        number = (Number) x1Var.b0();
                    } else {
                        if (abstractMap2 == null) {
                            abstractMap2 = new ConcurrentHashMap();
                        }
                        x1Var.m0(iLogger, abstractMap2, X10);
                    }
                }
                x1Var.i();
                if (number != null) {
                    io.sentry.protocol.l lVar = new io.sentry.protocol.l(number, str4);
                    lVar.f11834v = abstractMap2;
                    return lVar;
                }
                IllegalStateException illegalStateException3 = new IllegalStateException("Missing required field \"value\"");
                iLogger.k(SentryLevel.ERROR, "Missing required field \"value\"", illegalStateException3);
                throw illegalStateException3;
            case 16:
                m mVar = new m();
                x1Var.f();
                HashMap hashMap4 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X11 = x1Var.X();
                    X11.getClass();
                    switch (X11.hashCode()) {
                        case -1724546052:
                            if (X11.equals("description")) {
                                c6 = 0;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -268203253:
                            if (X11.equals("exception_id")) {
                                c6 = 1;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 3076010:
                            if (X11.equals("data")) {
                                c6 = 2;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 3347973:
                            if (X11.equals("meta")) {
                                c6 = 3;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 3575610:
                            if (X11.equals("type")) {
                                c6 = 4;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 692803388:
                            if (X11.equals("handled")) {
                                c6 = 5;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 989128517:
                            if (X11.equals("synthetic")) {
                                c6 = 6;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1032012154:
                            if (X11.equals("is_exception_group")) {
                                c6 = 7;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1297152568:
                            if (X11.equals("help_link")) {
                                c6 = '\b';
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 2070327504:
                            if (X11.equals("parent_id")) {
                                c6 = '\t';
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
                            mVar.f11836e = x1Var.l0();
                            break;
                        case 1:
                            mVar.E = x1Var.P();
                            break;
                        case 2:
                            mVar.f11840x = l.r((Map) x1Var.b0());
                            break;
                        case 3:
                            mVar.f11839w = l.r((Map) x1Var.b0());
                            break;
                        case 4:
                            mVar.f11835d = x1Var.l0();
                            break;
                        case 5:
                            mVar.f11838v = x1Var.o();
                            break;
                        case 6:
                            mVar.f11841y = x1Var.o();
                            break;
                        case 7:
                            mVar.G = x1Var.o();
                            break;
                        case '\b':
                            mVar.f11837i = x1Var.l0();
                            break;
                        case '\t':
                            mVar.F = x1Var.P();
                            break;
                        default:
                            if (hashMap4 == null) {
                                hashMap4 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap4, X11);
                            break;
                    }
                }
                x1Var.i();
                mVar.H = hashMap4;
                return mVar;
            case 17:
                x1Var.f();
                n nVar = new n();
                ConcurrentHashMap concurrentHashMap6 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X12 = x1Var.X();
                    X12.getClass();
                    switch (X12.hashCode()) {
                        case -995427962:
                            if (X12.equals("params")) {
                                z10 = false;
                                break;
                            }
                            z10 = -1;
                            break;
                        case 954925063:
                            if (X12.equals("message")) {
                                z10 = true;
                                break;
                            }
                            z10 = -1;
                            break;
                        case 1811591356:
                            if (X12.equals("formatted")) {
                                z10 = 2;
                                break;
                            }
                            z10 = -1;
                            break;
                        default:
                            z10 = -1;
                            break;
                    }
                    switch (z10) {
                        case false:
                            List list = (List) x1Var.b0();
                            if (list == null) {
                                break;
                            } else {
                                nVar.f11844i = list;
                                break;
                            }
                        case true:
                            nVar.f11843e = x1Var.l0();
                            break;
                        case true:
                            nVar.f11842d = x1Var.l0();
                            break;
                        default:
                            if (concurrentHashMap6 == null) {
                                concurrentHashMap6 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap6, X12);
                            break;
                    }
                }
                nVar.f11845v = concurrentHashMap6;
                x1Var.i();
                return nVar;
            case 18:
                return g(x1Var, iLogger);
            case 19:
                x1Var.f();
                p pVar = new p();
                ConcurrentHashMap concurrentHashMap7 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X13 = x1Var.X();
                    X13.getClass();
                    switch (X13.hashCode()) {
                        case -1650269616:
                            if (X13.equals("fragment")) {
                                c8 = 0;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case -1077554975:
                            if (X13.equals("method")) {
                                c8 = 1;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 100589:
                            if (X13.equals("env")) {
                                c8 = 2;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 116079:
                            if (X13.equals("url")) {
                                c8 = 3;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 3076010:
                            if (X13.equals("data")) {
                                c8 = 4;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 106069776:
                            if (X13.equals(JankRecordStore.SCREEN_OTHER)) {
                                c8 = 5;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 795307910:
                            if (X13.equals("headers")) {
                                c8 = 6;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 952189583:
                            if (X13.equals("cookies")) {
                                c8 = 7;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 1252988030:
                            if (X13.equals("body_size")) {
                                c8 = '\b';
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 1595298664:
                            if (X13.equals("query_string")) {
                                c8 = '\t';
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 1980646230:
                            if (X13.equals("api_target")) {
                                c8 = '\n';
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
                            pVar.G = x1Var.l0();
                            break;
                        case 1:
                            pVar.f11854e = x1Var.l0();
                            break;
                        case 2:
                            Map map = (Map) x1Var.b0();
                            if (map == null) {
                                break;
                            } else {
                                pVar.f11859y = l.r(map);
                                break;
                            }
                        case 3:
                            pVar.f11853d = x1Var.l0();
                            break;
                        case 4:
                            pVar.f11856v = x1Var.b0();
                            break;
                        case 5:
                            Map map2 = (Map) x1Var.b0();
                            if (map2 == null) {
                                break;
                            } else {
                                pVar.F = l.r(map2);
                                break;
                            }
                        case 6:
                            Map map3 = (Map) x1Var.b0();
                            if (map3 == null) {
                                break;
                            } else {
                                pVar.f11858x = l.r(map3);
                                break;
                            }
                        case 7:
                            pVar.f11857w = x1Var.l0();
                            break;
                        case '\b':
                            pVar.E = x1Var.U();
                            break;
                        case '\t':
                            pVar.f11855i = x1Var.l0();
                            break;
                        case '\n':
                            pVar.H = x1Var.l0();
                            break;
                        default:
                            if (concurrentHashMap7 == null) {
                                concurrentHashMap7 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap7, X13);
                            break;
                    }
                }
                pVar.I = concurrentHashMap7;
                x1Var.i();
                return pVar;
            case 20:
                s sVar = new s();
                x1Var.f();
                HashMap hashMap5 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X14 = x1Var.X();
                    X14.getClass();
                    switch (X14.hashCode()) {
                        case 270207856:
                            if (X14.equals("sdk_name")) {
                                z11 = false;
                                break;
                            }
                            z11 = -1;
                            break;
                        case 696101379:
                            if (X14.equals("version_patchlevel")) {
                                z11 = true;
                                break;
                            }
                            z11 = -1;
                            break;
                        case 1111241618:
                            if (X14.equals("version_major")) {
                                z11 = 2;
                                break;
                            }
                            z11 = -1;
                            break;
                        case 1111483790:
                            if (X14.equals("version_minor")) {
                                z11 = 3;
                                break;
                            }
                            z11 = -1;
                            break;
                        default:
                            z11 = -1;
                            break;
                    }
                    switch (z11) {
                        case false:
                            sVar.f11878d = x1Var.l0();
                            break;
                        case true:
                            sVar.f11881v = x1Var.P();
                            break;
                        case true:
                            sVar.f11879e = x1Var.P();
                            break;
                        case true:
                            sVar.f11880i = x1Var.P();
                            break;
                        default:
                            if (hashMap5 == null) {
                                hashMap5 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap5, X14);
                            break;
                    }
                }
                x1Var.i();
                sVar.f11882w = hashMap5;
                return sVar;
            case 21:
                ArrayList arrayList2 = new ArrayList();
                ArrayList arrayList3 = new ArrayList();
                x1Var.f();
                String str5 = null;
                String str6 = null;
                HashMap hashMap6 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X15 = x1Var.X();
                    X15.getClass();
                    switch (X15.hashCode()) {
                        case 3373707:
                            if (X15.equals(StackTraceHelper.NAME_KEY)) {
                                z12 = false;
                                break;
                            }
                            z12 = -1;
                            break;
                        case 351608024:
                            if (X15.equals("version")) {
                                z12 = true;
                                break;
                            }
                            z12 = -1;
                            break;
                        case 750867693:
                            if (X15.equals("packages")) {
                                z12 = 2;
                                break;
                            }
                            z12 = -1;
                            break;
                        case 1487029535:
                            if (X15.equals("integrations")) {
                                z12 = 3;
                                break;
                            }
                            z12 = -1;
                            break;
                        default:
                            z12 = -1;
                            break;
                    }
                    switch (z12) {
                        case false:
                            str5 = x1Var.j0();
                            break;
                        case true:
                            str6 = x1Var.j0();
                            break;
                        case true:
                            ArrayList Q2 = x1Var.Q(iLogger, new a(24));
                            if (Q2 == null) {
                                break;
                            } else {
                                arrayList2.addAll(Q2);
                                break;
                            }
                        case true:
                            List list2 = (List) x1Var.b0();
                            if (list2 == null) {
                                break;
                            } else {
                                arrayList3.addAll(list2);
                                break;
                            }
                        default:
                            if (hashMap6 == null) {
                                hashMap6 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap6, X15);
                            break;
                    }
                }
                x1Var.i();
                if (str5 == null) {
                    IllegalStateException illegalStateException4 = new IllegalStateException("Missing required field \"name\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"name\"", illegalStateException4);
                    throw illegalStateException4;
                }
                if (str6 == null) {
                    IllegalStateException illegalStateException5 = new IllegalStateException("Missing required field \"version\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"version\"", illegalStateException5);
                    throw illegalStateException5;
                }
                t tVar = new t(str5, str6);
                tVar.f11885i = new CopyOnWriteArraySet(arrayList2);
                tVar.f11886v = new CopyOnWriteArraySet(arrayList3);
                tVar.f11887w = hashMap6;
                return tVar;
            case 22:
                u uVar = new u();
                x1Var.f();
                HashMap hashMap7 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X16 = x1Var.X();
                    X16.getClass();
                    switch (X16.hashCode()) {
                        case -1562235024:
                            if (X16.equals("thread_id")) {
                                z13 = false;
                                break;
                            }
                            z13 = -1;
                            break;
                        case -1068784020:
                            if (X16.equals("module")) {
                                z13 = true;
                                break;
                            }
                            z13 = -1;
                            break;
                        case 3575610:
                            if (X16.equals("type")) {
                                z13 = 2;
                                break;
                            }
                            z13 = -1;
                            break;
                        case 111972721:
                            if (X16.equals("value")) {
                                z13 = 3;
                                break;
                            }
                            z13 = -1;
                            break;
                        case 1225089881:
                            if (X16.equals("mechanism")) {
                                z13 = 4;
                                break;
                            }
                            z13 = -1;
                            break;
                        case 2055832509:
                            if (X16.equals("stacktrace")) {
                                z13 = 5;
                                break;
                            }
                            z13 = -1;
                            break;
                        default:
                            z13 = -1;
                            break;
                    }
                    switch (z13) {
                        case false:
                            uVar.f11891v = x1Var.U();
                            break;
                        case true:
                            uVar.f11890i = x1Var.l0();
                            break;
                        case true:
                            uVar.f11888d = x1Var.l0();
                            break;
                        case true:
                            uVar.f11889e = x1Var.l0();
                            break;
                        case true:
                            uVar.f11893x = (m) x1Var.d0(iLogger, new a(16));
                            break;
                        case true:
                            uVar.f11892w = (a0) x1Var.d0(iLogger, new a(28));
                            break;
                        default:
                            if (hashMap7 == null) {
                                hashMap7 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap7, X16);
                            break;
                    }
                }
                x1Var.i();
                uVar.f11894y = hashMap7;
                return uVar;
            case 23:
                return new v(x1Var.j0());
            case 24:
                x1Var.f();
                String str7 = null;
                String str8 = null;
                HashMap hashMap8 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X17 = x1Var.X();
                    X17.getClass();
                    if (X17.equals(StackTraceHelper.NAME_KEY)) {
                        str7 = x1Var.j0();
                    } else if (X17.equals("version")) {
                        str8 = x1Var.j0();
                    } else {
                        if (hashMap8 == null) {
                            hashMap8 = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap8, X17);
                    }
                }
                x1Var.i();
                if (str7 == null) {
                    IllegalStateException illegalStateException6 = new IllegalStateException("Missing required field \"name\"");
                    iLogger.k(SentryLevel.ERROR, "Missing required field \"name\"", illegalStateException6);
                    throw illegalStateException6;
                }
                if (str8 != null) {
                    w wVar = new w(str7, str8);
                    wVar.f11899i = hashMap8;
                    return wVar;
                }
                IllegalStateException illegalStateException7 = new IllegalStateException("Missing required field \"version\"");
                iLogger.k(SentryLevel.ERROR, "Missing required field \"version\"", illegalStateException7);
                throw illegalStateException7;
            case 25:
                x1Var.f();
                x xVar = new x();
                ConcurrentHashMap concurrentHashMap8 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X18 = x1Var.X();
                    X18.getClass();
                    switch (X18.hashCode()) {
                        case -339173787:
                            if (X18.equals("raw_description")) {
                                z14 = false;
                                break;
                            }
                            z14 = -1;
                            break;
                        case 3373707:
                            if (X18.equals(StackTraceHelper.NAME_KEY)) {
                                z14 = true;
                                break;
                            }
                            z14 = -1;
                            break;
                        case 351608024:
                            if (X18.equals("version")) {
                                z14 = 2;
                                break;
                            }
                            z14 = -1;
                            break;
                        default:
                            z14 = -1;
                            break;
                    }
                    switch (z14) {
                        case false:
                            xVar.f11902i = x1Var.l0();
                            break;
                        case true:
                            xVar.f11900d = x1Var.l0();
                            break;
                        case true:
                            xVar.f11901e = x1Var.l0();
                            break;
                        default:
                            if (concurrentHashMap8 == null) {
                                concurrentHashMap8 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap8, X18);
                            break;
                    }
                }
                xVar.f11903v = concurrentHashMap8;
                x1Var.i();
                return xVar;
            case 26:
                x1Var.f();
                ConcurrentHashMap concurrentHashMap9 = null;
                Map map4 = null;
                HashMap hashMap9 = null;
                Double d6 = null;
                Double d7 = null;
                v vVar = null;
                k6 k6Var = null;
                k6 k6Var2 = null;
                String str9 = null;
                String str10 = null;
                l6 l6Var = null;
                String str11 = null;
                Map map5 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X19 = x1Var.X();
                    X19.getClass();
                    switch (X19.hashCode()) {
                        case -2011840976:
                            if (X19.equals("span_id")) {
                                c10 = 0;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case -1757797477:
                            if (X19.equals("parent_span_id")) {
                                c10 = 1;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case -1724546052:
                            if (X19.equals("description")) {
                                c10 = 2;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case -1526966919:
                            if (X19.equals("start_timestamp")) {
                                c10 = 3;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case -1008619738:
                            if (X19.equals("origin")) {
                                c10 = 4;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case -892481550:
                            if (X19.equals("status")) {
                                c10 = 5;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case -362243017:
                            if (X19.equals("measurements")) {
                                c10 = 6;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 3553:
                            if (X19.equals("op")) {
                                c10 = 7;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 3076010:
                            if (X19.equals("data")) {
                                c10 = '\b';
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 3552281:
                            if (X19.equals("tags")) {
                                c10 = '\t';
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 55126294:
                            if (X19.equals("timestamp")) {
                                c10 = '\n';
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 1270300245:
                            if (X19.equals("trace_id")) {
                                c10 = 11;
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
                            k6Var = new k6(x1Var.j0());
                            break;
                        case 1:
                            k6Var2 = (k6) x1Var.d0(iLogger, new io.sentry.d(23));
                            break;
                        case 2:
                            str10 = x1Var.l0();
                            break;
                        case 3:
                            try {
                                d6 = x1Var.t();
                                break;
                            } catch (NumberFormatException unused2) {
                                if (x1Var.q(iLogger) == null) {
                                    d6 = null;
                                    break;
                                } else {
                                    d6 = Double.valueOf(r7.getTime() / 1000.0d);
                                    break;
                                }
                            }
                        case 4:
                            str11 = x1Var.l0();
                            break;
                        case 5:
                            l6Var = (l6) x1Var.d0(iLogger, new io.sentry.d(24));
                            break;
                        case 6:
                            hashMap9 = x1Var.V(iLogger, new a(15));
                            break;
                        case 7:
                            str9 = x1Var.l0();
                            break;
                        case '\b':
                            map5 = (Map) x1Var.b0();
                            break;
                        case '\t':
                            map4 = (Map) x1Var.b0();
                            break;
                        case '\n':
                            try {
                                d7 = x1Var.t();
                                break;
                            } catch (NumberFormatException unused3) {
                                if (x1Var.q(iLogger) == null) {
                                    d7 = null;
                                    break;
                                } else {
                                    d7 = Double.valueOf(r7.getTime() / 1000.0d);
                                    break;
                                }
                            }
                        case 11:
                            vVar = new v(x1Var.j0());
                            break;
                        default:
                            if (concurrentHashMap9 == null) {
                                concurrentHashMap9 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap9, X19);
                            break;
                    }
                }
                if (d6 == null) {
                    throw j("start_timestamp", iLogger);
                }
                if (vVar == null) {
                    throw j("trace_id", iLogger);
                }
                if (k6Var == null) {
                    throw j("span_id", iLogger);
                }
                if (str9 == null) {
                    throw j("op", iLogger);
                }
                if (map4 == null) {
                    map4 = new HashMap();
                }
                Map map6 = map4;
                if (hashMap9 == null) {
                    hashMap9 = new HashMap();
                }
                y yVar = new y(d6, d7, vVar, k6Var, k6Var2, str9, str10, l6Var, str11, map6, hashMap9, map5);
                yVar.J = concurrentHashMap9;
                x1Var.i();
                return yVar;
            case 27:
                SentryStackFrame sentryStackFrame = new SentryStackFrame();
                x1Var.f();
                ConcurrentHashMap concurrentHashMap10 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X20 = x1Var.X();
                    X20.getClass();
                    switch (X20.hashCode()) {
                        case -1641491184:
                            if (X20.equals("post_context")) {
                                c11 = 0;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -1443345323:
                            if (X20.equals("image_addr")) {
                                c11 = 1;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -1184392185:
                            if (X20.equals("in_app")) {
                                c11 = 2;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -1113875953:
                            if (X20.equals("raw_function")) {
                                c11 = 3;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -1102671691:
                            if (X20.equals("lineno")) {
                                c11 = 4;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -1068784020:
                            if (X20.equals("module")) {
                                c11 = 5;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -1052618729:
                            if (X20.equals("native")) {
                                c11 = 6;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -887523944:
                            if (X20.equals("symbol")) {
                                c11 = 7;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -807062458:
                            if (X20.equals("package")) {
                                c11 = '\b';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -734768633:
                            if (X20.equals("filename")) {
                                c11 = '\t';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -330260936:
                            if (X20.equals("symbol_addr")) {
                                c11 = '\n';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 3327275:
                            if (X20.equals("lock")) {
                                c11 = 11;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 3612204:
                            if (X20.equals("vars")) {
                                c11 = '\f';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 94842689:
                            if (X20.equals("colno")) {
                                c11 = '\r';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 410194178:
                            if (X20.equals("instruction_addr")) {
                                c11 = 14;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 822688787:
                            if (X20.equals("pre_context")) {
                                c11 = 15;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 868820273:
                            if (X20.equals("addr_mode")) {
                                c11 = 16;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1116694660:
                            if (X20.equals("context_line")) {
                                c11 = 17;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1380938712:
                            if (X20.equals("function")) {
                                c11 = 18;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1713445842:
                            if (X20.equals("abs_path")) {
                                c11 = 19;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1874684019:
                            if (X20.equals("platform")) {
                                c11 = 20;
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
                            sentryStackFrame.f11742e = (List) x1Var.b0();
                            break;
                        case 1:
                            sentryStackFrame.L = x1Var.l0();
                            break;
                        case 2:
                            sentryStackFrame.H = x1Var.o();
                            break;
                        case 3:
                            sentryStackFrame.R = x1Var.l0();
                            break;
                        case 4:
                            sentryStackFrame.f11747y = x1Var.P();
                            break;
                        case 5:
                            sentryStackFrame.f11746x = x1Var.l0();
                            break;
                        case 6:
                            sentryStackFrame.J = x1Var.o();
                            break;
                        case 7:
                            sentryStackFrame.P = x1Var.l0();
                            break;
                        case '\b':
                            sentryStackFrame.I = x1Var.l0();
                            break;
                        case '\t':
                            sentryStackFrame.f11744v = x1Var.l0();
                            break;
                        case '\n':
                            sentryStackFrame.M = x1Var.l0();
                            break;
                        case 11:
                            sentryStackFrame.S = (w4) x1Var.d0(iLogger, new io.sentry.d(12));
                            break;
                        case '\f':
                            sentryStackFrame.f11743i = (Map) x1Var.b0();
                            break;
                        case '\r':
                            sentryStackFrame.E = x1Var.P();
                            break;
                        case 14:
                            sentryStackFrame.N = x1Var.l0();
                            break;
                        case 15:
                            sentryStackFrame.f11741d = (List) x1Var.b0();
                            break;
                        case 16:
                            sentryStackFrame.O = x1Var.l0();
                            break;
                        case 17:
                            sentryStackFrame.G = x1Var.l0();
                            break;
                        case 18:
                            sentryStackFrame.f11745w = x1Var.l0();
                            break;
                        case 19:
                            sentryStackFrame.F = x1Var.l0();
                            break;
                        case 20:
                            sentryStackFrame.K = x1Var.l0();
                            break;
                        default:
                            if (concurrentHashMap10 == null) {
                                concurrentHashMap10 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap10, X20);
                            break;
                    }
                }
                sentryStackFrame.Q = concurrentHashMap10;
                x1Var.i();
                return sentryStackFrame;
            case 28:
                a0 a0Var = new a0();
                x1Var.f();
                ConcurrentHashMap concurrentHashMap11 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X21 = x1Var.X();
                    X21.getClass();
                    switch (X21.hashCode()) {
                        case -1266514778:
                            if (X21.equals("frames")) {
                                z15 = false;
                                break;
                            }
                            z15 = -1;
                            break;
                        case -1010705206:
                            if (X21.equals("instruction_addr_adjustment")) {
                                z15 = true;
                                break;
                            }
                            z15 = -1;
                            break;
                        case 78226992:
                            if (X21.equals("registers")) {
                                z15 = 2;
                                break;
                            }
                            z15 = -1;
                            break;
                        case 284874180:
                            if (X21.equals("snapshot")) {
                                z15 = 3;
                                break;
                            }
                            z15 = -1;
                            break;
                        default:
                            z15 = -1;
                            break;
                    }
                    switch (z15) {
                        case false:
                            a0Var.f11755d = x1Var.Q(iLogger, new a(27));
                            break;
                        case true:
                            a0Var.f11758v = (z) x1Var.d0(iLogger, new a(29));
                            break;
                        case true:
                            a0Var.f11756e = l.r((Map) x1Var.b0());
                            break;
                        case true:
                            a0Var.f11757i = x1Var.o();
                            break;
                        default:
                            if (concurrentHashMap11 == null) {
                                concurrentHashMap11 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap11, X21);
                            break;
                    }
                }
                a0Var.f11759w = concurrentHashMap11;
                x1Var.i();
                return a0Var;
            default:
                return z.valueOf(x1Var.j0().toUpperCase(Locale.ROOT));
        }
    }
}
