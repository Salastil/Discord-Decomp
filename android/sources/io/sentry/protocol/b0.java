package io.sentry.protocol;

import com.discord.notifications.renderer.NotificationRenderer;
import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.n1;
import io.sentry.x1;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public final class b0 implements n1 {
    public final /* synthetic */ int a;

    public /* synthetic */ b0(int i5) {
        this.a = i5;
    }

    public static io.sentry.rrweb.a b(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        io.sentry.rrweb.a aVar = new io.sentry.rrweb.a();
        HashMap hashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X2 = x1Var.X();
            X2.getClass();
            if (X2.equals("data")) {
                x1Var.f();
                ConcurrentHashMap concurrentHashMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X3 = x1Var.X();
                    X3.getClass();
                    if (X3.equals("payload")) {
                        x1Var.f();
                        ConcurrentHashMap concurrentHashMap2 = null;
                        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                            X = x1Var.X();
                            X.getClass();
                            switch (X) {
                                case "data":
                                    ConcurrentHashMap r5 = ys.l.r((Map) x1Var.b0());
                                    if (r5 == null) {
                                        break;
                                    } else {
                                        aVar.F = r5;
                                        break;
                                    }
                                case "type":
                                    aVar.f11939w = x1Var.l0();
                                    break;
                                case "category":
                                    aVar.f11940x = x1Var.l0();
                                    break;
                                case "timestamp":
                                    aVar.f11938v = x1Var.r();
                                    break;
                                case "level":
                                    try {
                                        aVar.E = SentryLevel.valueOf(x1Var.j0().toUpperCase(Locale.ROOT));
                                        break;
                                    } catch (Exception e9) {
                                        iLogger.i(SentryLevel.DEBUG, e9, "Error when deserializing SentryLevel", new Object[0]);
                                        break;
                                    }
                                case "message":
                                    aVar.f11941y = x1Var.l0();
                                    break;
                                default:
                                    if (concurrentHashMap2 == null) {
                                        concurrentHashMap2 = new ConcurrentHashMap();
                                    }
                                    x1Var.m0(iLogger, concurrentHashMap2, X);
                                    break;
                            }
                        }
                        aVar.H = concurrentHashMap2;
                        x1Var.i();
                    } else if (X3.equals("tag")) {
                        String l02 = x1Var.l0();
                        if (l02 == null) {
                            l02 = "";
                        }
                        aVar.f11937i = l02;
                    } else {
                        if (concurrentHashMap == null) {
                            concurrentHashMap = new ConcurrentHashMap();
                        }
                        x1Var.m0(iLogger, concurrentHashMap, X3);
                    }
                }
                aVar.I = concurrentHashMap;
                x1Var.i();
            } else if (X2.equals("type")) {
                io.sentry.rrweb.c cVar = (io.sentry.rrweb.c) x1Var.d0(iLogger, new b0(10));
                d9.a.L(cVar, "");
                aVar.f11942d = cVar;
            } else if (X2.equals("timestamp")) {
                aVar.f11943e = x1Var.R();
            } else {
                if (hashMap == null) {
                    hashMap = new HashMap();
                }
                x1Var.m0(iLogger, hashMap, X2);
            }
        }
        aVar.G = hashMap;
        x1Var.i();
        return aVar;
    }

    public static io.sentry.rrweb.g c(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        io.sentry.rrweb.g gVar = new io.sentry.rrweb.g();
        HashMap hashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X2 = x1Var.X();
            X2.getClass();
            if (X2.equals("data")) {
                x1Var.f();
                HashMap hashMap2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    X = x1Var.X();
                    X.getClass();
                    switch (X) {
                        case "x":
                            gVar.f11947x = x1Var.x();
                            break;
                        case "y":
                            gVar.f11948y = x1Var.x();
                            break;
                        case "id":
                            gVar.f11946w = x1Var.C();
                            break;
                        case "type":
                            gVar.f11945v = (io.sentry.rrweb.f) x1Var.d0(iLogger, new b0(13));
                            break;
                        case "pointerType":
                            gVar.E = x1Var.C();
                            break;
                        case "pointerId":
                            gVar.F = x1Var.C();
                            break;
                        default:
                            if (!X.equals("source")) {
                                if (hashMap2 == null) {
                                    hashMap2 = new HashMap();
                                }
                                x1Var.m0(iLogger, hashMap2, X);
                                break;
                            } else {
                                io.sentry.rrweb.d dVar = (io.sentry.rrweb.d) x1Var.d0(iLogger, new b0(11));
                                d9.a.L(dVar, "");
                                gVar.f11944i = dVar;
                                break;
                            }
                    }
                }
                gVar.H = hashMap2;
                x1Var.i();
            } else if (X2.equals("type")) {
                io.sentry.rrweb.c cVar = (io.sentry.rrweb.c) x1Var.d0(iLogger, new b0(10));
                d9.a.L(cVar, "");
                gVar.f11942d = cVar;
            } else if (X2.equals("timestamp")) {
                gVar.f11943e = x1Var.R();
            } else {
                if (hashMap == null) {
                    hashMap = new HashMap();
                }
                x1Var.m0(iLogger, hashMap, X2);
            }
        }
        gVar.G = hashMap;
        x1Var.i();
        return gVar;
    }

    public static io.sentry.rrweb.i d(x1 x1Var, ILogger iLogger) {
        x1Var.f();
        io.sentry.rrweb.i iVar = new io.sentry.rrweb.i();
        HashMap hashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X = x1Var.X();
            X.getClass();
            if (X.equals("data")) {
                x1Var.f();
                HashMap hashMap2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X2 = x1Var.X();
                    X2.getClass();
                    if (X2.equals("pointerId")) {
                        iVar.f11954v = x1Var.C();
                    } else if (X2.equals("positions")) {
                        iVar.f11955w = x1Var.Q(iLogger, new b0(15));
                    } else if (X2.equals("source")) {
                        io.sentry.rrweb.d dVar = (io.sentry.rrweb.d) x1Var.d0(iLogger, new b0(11));
                        d9.a.L(dVar, "");
                        iVar.f11944i = dVar;
                    } else {
                        if (hashMap2 == null) {
                            hashMap2 = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap2, X2);
                    }
                }
                iVar.f11957y = hashMap2;
                x1Var.i();
            } else if (X.equals("type")) {
                io.sentry.rrweb.c cVar = (io.sentry.rrweb.c) x1Var.d0(iLogger, new b0(10));
                d9.a.L(cVar, "");
                iVar.f11942d = cVar;
            } else if (X.equals("timestamp")) {
                iVar.f11943e = x1Var.R();
            } else {
                if (hashMap == null) {
                    hashMap = new HashMap();
                }
                x1Var.m0(iLogger, hashMap, X);
            }
        }
        iVar.f11956x = hashMap;
        x1Var.i();
        return iVar;
    }

    public static io.sentry.rrweb.j e(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        io.sentry.rrweb.j jVar = new io.sentry.rrweb.j();
        HashMap hashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X2 = x1Var.X();
            X2.getClass();
            if (X2.equals("data")) {
                x1Var.f();
                AbstractMap abstractMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    X = x1Var.X();
                    X.getClass();
                    switch (X) {
                        case "height":
                            Integer P = x1Var.P();
                            jVar.f11959v = P != null ? P.intValue() : 0;
                            break;
                        case "href":
                            String l02 = x1Var.l0();
                            if (l02 == null) {
                                l02 = "";
                            }
                            jVar.f11958i = l02;
                            break;
                        case "width":
                            Integer P2 = x1Var.P();
                            jVar.f11960w = P2 != null ? P2.intValue() : 0;
                            break;
                        default:
                            if (abstractMap == null) {
                                abstractMap = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, abstractMap, X);
                            break;
                    }
                }
                x1Var.i();
            } else if (X2.equals("type")) {
                io.sentry.rrweb.c cVar = (io.sentry.rrweb.c) x1Var.d0(iLogger, new b0(10));
                d9.a.L(cVar, "");
                jVar.f11942d = cVar;
            } else if (X2.equals("timestamp")) {
                jVar.f11943e = x1Var.R();
            } else {
                if (hashMap == null) {
                    hashMap = new HashMap();
                }
                x1Var.m0(iLogger, hashMap, X2);
            }
        }
        jVar.f11961x = hashMap;
        x1Var.i();
        return jVar;
    }

    public static io.sentry.rrweb.l f(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        io.sentry.rrweb.l lVar = new io.sentry.rrweb.l();
        HashMap hashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X2 = x1Var.X();
            X2.getClass();
            if (X2.equals("data")) {
                x1Var.f();
                ConcurrentHashMap concurrentHashMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X3 = x1Var.X();
                    X3.getClass();
                    if (X3.equals("payload")) {
                        x1Var.f();
                        ConcurrentHashMap concurrentHashMap2 = null;
                        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                            X = x1Var.X();
                            X.getClass();
                            switch (X) {
                                case "description":
                                    lVar.f11966w = x1Var.l0();
                                    break;
                                case "endTimestamp":
                                    lVar.f11968y = x1Var.r();
                                    break;
                                case "startTimestamp":
                                    lVar.f11967x = x1Var.r();
                                    break;
                                case "op":
                                    lVar.f11965v = x1Var.l0();
                                    break;
                                case "data":
                                    ConcurrentHashMap r5 = ys.l.r((Map) x1Var.b0());
                                    if (r5 == null) {
                                        break;
                                    } else {
                                        lVar.E = r5;
                                        break;
                                    }
                                default:
                                    if (concurrentHashMap2 == null) {
                                        concurrentHashMap2 = new ConcurrentHashMap();
                                    }
                                    x1Var.m0(iLogger, concurrentHashMap2, X);
                                    break;
                            }
                        }
                        lVar.G = concurrentHashMap2;
                        x1Var.i();
                    } else if (X3.equals("tag")) {
                        String l02 = x1Var.l0();
                        if (l02 == null) {
                            l02 = "";
                        }
                        lVar.f11964i = l02;
                    } else {
                        if (concurrentHashMap == null) {
                            concurrentHashMap = new ConcurrentHashMap();
                        }
                        x1Var.m0(iLogger, concurrentHashMap, X3);
                    }
                }
                lVar.H = concurrentHashMap;
                x1Var.i();
            } else if (X2.equals("type")) {
                io.sentry.rrweb.c cVar = (io.sentry.rrweb.c) x1Var.d0(iLogger, new b0(10));
                d9.a.L(cVar, "");
                lVar.f11942d = cVar;
            } else if (X2.equals("timestamp")) {
                lVar.f11943e = x1Var.R();
            } else {
                if (hashMap == null) {
                    hashMap = new HashMap();
                }
                x1Var.m0(iLogger, hashMap, X2);
            }
        }
        lVar.F = hashMap;
        x1Var.i();
        return lVar;
    }

    public static io.sentry.rrweb.m g(x1 x1Var, ILogger iLogger) {
        String X;
        x1Var.f();
        io.sentry.rrweb.m mVar = new io.sentry.rrweb.m();
        HashMap hashMap = null;
        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
            String X2 = x1Var.X();
            X2.getClass();
            int i5 = 10;
            if (X2.equals("data")) {
                x1Var.f();
                ConcurrentHashMap concurrentHashMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X3 = x1Var.X();
                    X3.getClass();
                    if (X3.equals("payload")) {
                        x1Var.f();
                        ConcurrentHashMap concurrentHashMap2 = null;
                        while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                            X = x1Var.X();
                            X.getClass();
                            switch (X) {
                                case "duration":
                                    mVar.f11972x = x1Var.R();
                                    break;
                                case "segmentId":
                                    mVar.f11970v = x1Var.C();
                                    break;
                                case "height":
                                    Integer P = x1Var.P();
                                    mVar.F = P != null ? P.intValue() : 0;
                                    break;
                                case "container":
                                    String l02 = x1Var.l0();
                                    if (l02 == null) {
                                        l02 = "";
                                    }
                                    mVar.E = l02;
                                    break;
                                case "frameCount":
                                    Integer P2 = x1Var.P();
                                    mVar.H = P2 != null ? P2.intValue() : 0;
                                    break;
                                case "top":
                                    Integer P3 = x1Var.P();
                                    mVar.L = P3 != null ? P3.intValue() : 0;
                                    break;
                                case "left":
                                    Integer P4 = x1Var.P();
                                    mVar.K = P4 != null ? P4.intValue() : 0;
                                    break;
                                case "size":
                                    Long U = x1Var.U();
                                    mVar.f11971w = U == null ? 0L : U.longValue();
                                    break;
                                case "width":
                                    Integer P5 = x1Var.P();
                                    mVar.G = P5 != null ? P5.intValue() : 0;
                                    break;
                                case "frameRate":
                                    Integer P6 = x1Var.P();
                                    mVar.J = P6 != null ? P6.intValue() : 0;
                                    break;
                                case "encoding":
                                    String l03 = x1Var.l0();
                                    if (l03 == null) {
                                        l03 = "";
                                    }
                                    mVar.f11973y = l03;
                                    break;
                                case "frameRateType":
                                    String l04 = x1Var.l0();
                                    if (l04 == null) {
                                        l04 = "";
                                    }
                                    mVar.I = l04;
                                    break;
                                default:
                                    if (concurrentHashMap2 == null) {
                                        concurrentHashMap2 = new ConcurrentHashMap();
                                    }
                                    x1Var.m0(iLogger, concurrentHashMap2, X);
                                    break;
                            }
                        }
                        mVar.N = concurrentHashMap2;
                        x1Var.i();
                    } else if (X3.equals("tag")) {
                        String l05 = x1Var.l0();
                        if (l05 == null) {
                            l05 = "";
                        }
                        mVar.f11969i = l05;
                    } else {
                        if (concurrentHashMap == null) {
                            concurrentHashMap = new ConcurrentHashMap();
                        }
                        x1Var.m0(iLogger, concurrentHashMap, X3);
                    }
                }
                mVar.O = concurrentHashMap;
                x1Var.i();
            } else if (X2.equals("type")) {
                io.sentry.rrweb.c cVar = (io.sentry.rrweb.c) x1Var.d0(iLogger, new b0(i5));
                d9.a.L(cVar, "");
                mVar.f11942d = cVar;
            } else if (X2.equals("timestamp")) {
                mVar.f11943e = x1Var.R();
            } else {
                if (hashMap == null) {
                    hashMap = new HashMap();
                }
                x1Var.m0(iLogger, hashMap, X2);
            }
        }
        mVar.M = hashMap;
        x1Var.i();
        return mVar;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // io.sentry.n1
    public final Object a(x1 x1Var, ILogger iLogger) {
        char c6;
        char c8;
        char c10;
        boolean z5;
        char c11;
        boolean z6;
        boolean z7;
        boolean z8;
        int i5 = 7;
        int i6 = 8;
        int i10 = 4;
        int i11 = 6;
        switch (this.a) {
            case 0:
                c0 c0Var = new c0();
                x1Var.f();
                ConcurrentHashMap concurrentHashMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X = x1Var.X();
                    X.getClass();
                    switch (X.hashCode()) {
                        case -1339353468:
                            if (X.equals("daemon")) {
                                c6 = 0;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -1165461084:
                            if (X.equals("priority")) {
                                c6 = 1;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case -502917346:
                            if (X.equals("held_locks")) {
                                c6 = 2;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 3355:
                            if (X.equals(StackTraceHelper.ID_KEY)) {
                                c6 = 3;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 3343801:
                            if (X.equals("main")) {
                                c6 = 4;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 3373707:
                            if (X.equals(StackTraceHelper.NAME_KEY)) {
                                c6 = 5;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 109757585:
                            if (X.equals("state")) {
                                c6 = 6;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1025385094:
                            if (X.equals("crashed")) {
                                c6 = 7;
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 1126940025:
                            if (X.equals("current")) {
                                c6 = '\b';
                                break;
                            }
                            c6 = 65535;
                            break;
                        case 2055832509:
                            if (X.equals("stacktrace")) {
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
                            c0Var.f11771y = x1Var.o();
                            break;
                        case 1:
                            c0Var.f11766e = x1Var.P();
                            break;
                        case 2:
                            HashMap V = x1Var.V(iLogger, new io.sentry.d(12));
                            if (V == null) {
                                break;
                            } else {
                                c0Var.G = new HashMap(V);
                                break;
                            }
                        case 3:
                            c0Var.f11765d = x1Var.U();
                            break;
                        case 4:
                            c0Var.E = x1Var.o();
                            break;
                        case 5:
                            c0Var.f11767i = x1Var.l0();
                            break;
                        case 6:
                            c0Var.f11768v = x1Var.l0();
                            break;
                        case 7:
                            c0Var.f11769w = x1Var.o();
                            break;
                        case '\b':
                            c0Var.f11770x = x1Var.o();
                            break;
                        case '\t':
                            c0Var.F = (a0) x1Var.d0(iLogger, new io.sentry.clientreport.a(28));
                            break;
                        default:
                            if (concurrentHashMap == null) {
                                concurrentHashMap = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap, X);
                            break;
                    }
                }
                c0Var.H = concurrentHashMap;
                x1Var.i();
                return c0Var;
            case 1:
                x1Var.f();
                d0 d0Var = new d0(new ArrayList(), new HashMap(), new f0(g0.CUSTOM.apiName()));
                ConcurrentHashMap concurrentHashMap2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X2 = x1Var.X();
                    X2.getClass();
                    switch (X2.hashCode()) {
                        case -1526966919:
                            if (X2.equals("start_timestamp")) {
                                c8 = 0;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case -362243017:
                            if (X2.equals("measurements")) {
                                c8 = 1;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 3575610:
                            if (X2.equals("type")) {
                                c8 = 2;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 55126294:
                            if (X2.equals("timestamp")) {
                                c8 = 3;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 109638249:
                            if (X2.equals("spans")) {
                                c8 = 4;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 508716399:
                            if (X2.equals("transaction_info")) {
                                c8 = 5;
                                break;
                            }
                            c8 = 65535;
                            break;
                        case 2141246174:
                            if (X2.equals("transaction")) {
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
                            try {
                                Double t5 = x1Var.t();
                                if (t5 == null) {
                                    break;
                                } else {
                                    d0Var.N = t5;
                                    break;
                                }
                            } catch (NumberFormatException unused) {
                                if (x1Var.q(iLogger) == null) {
                                    break;
                                } else {
                                    d0Var.N = Double.valueOf(r8.getTime() / 1000.0d);
                                    break;
                                }
                            }
                        case 1:
                            HashMap V2 = x1Var.V(iLogger, new io.sentry.clientreport.a(15));
                            if (V2 == null) {
                                break;
                            } else {
                                d0Var.Q.putAll(V2);
                                break;
                            }
                        case 2:
                            x1Var.j0();
                            break;
                        case 3:
                            try {
                                Double t10 = x1Var.t();
                                if (t10 == null) {
                                    break;
                                } else {
                                    d0Var.O = t10;
                                    break;
                                }
                            } catch (NumberFormatException unused2) {
                                if (x1Var.q(iLogger) == null) {
                                    break;
                                } else {
                                    d0Var.O = Double.valueOf(r8.getTime() / 1000.0d);
                                    break;
                                }
                            }
                        case 4:
                            ArrayList Q = x1Var.Q(iLogger, new io.sentry.clientreport.a(26));
                            if (Q == null) {
                                break;
                            } else {
                                d0Var.P.addAll(Q);
                                break;
                            }
                        case 5:
                            x1Var.f();
                            String str = null;
                            ConcurrentHashMap concurrentHashMap3 = null;
                            while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                                String X3 = x1Var.X();
                                X3.getClass();
                                if (X3.equals("source")) {
                                    str = x1Var.l0();
                                } else {
                                    if (concurrentHashMap3 == null) {
                                        concurrentHashMap3 = new ConcurrentHashMap();
                                    }
                                    x1Var.m0(iLogger, concurrentHashMap3, X3);
                                }
                            }
                            f0 f0Var = new f0(str);
                            f0Var.f11790e = concurrentHashMap3;
                            x1Var.i();
                            d0Var.R = f0Var;
                            break;
                        case 6:
                            d0Var.M = x1Var.l0();
                            break;
                        default:
                            if (!ks.n.k(d0Var, X2, x1Var, iLogger)) {
                                if (concurrentHashMap2 == null) {
                                    concurrentHashMap2 = new ConcurrentHashMap();
                                }
                                x1Var.m0(iLogger, concurrentHashMap2, X2);
                                break;
                            } else {
                                break;
                            }
                    }
                }
                d0Var.S = concurrentHashMap2;
                x1Var.i();
                return d0Var;
            case 2:
                x1Var.f();
                h0 h0Var = new h0();
                ConcurrentHashMap concurrentHashMap4 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X4 = x1Var.X();
                    X4.getClass();
                    switch (X4.hashCode()) {
                        case -265713450:
                            if (X4.equals(NotificationRenderer.USERNAME)) {
                                c10 = 0;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 3355:
                            if (X4.equals(StackTraceHelper.ID_KEY)) {
                                c10 = 1;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 102225:
                            if (X4.equals("geo")) {
                                c10 = 2;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 3076010:
                            if (X4.equals("data")) {
                                c10 = 3;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 3373707:
                            if (X4.equals(StackTraceHelper.NAME_KEY)) {
                                c10 = 4;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 96619420:
                            if (X4.equals("email")) {
                                c10 = 5;
                                break;
                            }
                            c10 = 65535;
                            break;
                        case 1480014044:
                            if (X4.equals("ip_address")) {
                                c10 = 6;
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
                            h0Var.f11798i = x1Var.l0();
                            break;
                        case 1:
                            h0Var.f11797e = x1Var.l0();
                            break;
                        case 2:
                            x1Var.f();
                            j jVar = new j();
                            ConcurrentHashMap concurrentHashMap5 = null;
                            while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                                String X5 = x1Var.X();
                                X5.getClass();
                                switch (X5.hashCode()) {
                                    case -934795532:
                                        if (X5.equals("region")) {
                                            z5 = false;
                                            break;
                                        }
                                        z5 = -1;
                                        break;
                                    case 3053931:
                                        if (X5.equals("city")) {
                                            z5 = true;
                                            break;
                                        }
                                        z5 = -1;
                                        break;
                                    case 1481071862:
                                        if (X5.equals("country_code")) {
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
                                        x1Var.m0(iLogger, concurrentHashMap5, X5);
                                        break;
                                }
                            }
                            jVar.f11816v = concurrentHashMap5;
                            x1Var.i();
                            h0Var.f11801x = jVar;
                            break;
                        case 3:
                            h0Var.f11802y = ys.l.r((Map) x1Var.b0());
                            break;
                        case 4:
                            h0Var.f11800w = x1Var.l0();
                            break;
                        case 5:
                            h0Var.f11796d = x1Var.l0();
                            break;
                        case 6:
                            h0Var.f11799v = x1Var.l0();
                            break;
                        default:
                            if (concurrentHashMap4 == null) {
                                concurrentHashMap4 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap4, X4);
                            break;
                    }
                }
                h0Var.E = concurrentHashMap4;
                x1Var.i();
                return h0Var;
            case 3:
                x1Var.f();
                String str2 = null;
                ArrayList arrayList = null;
                HashMap hashMap = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X6 = x1Var.X();
                    X6.getClass();
                    if (X6.equals("rendering_system")) {
                        str2 = x1Var.l0();
                    } else if (X6.equals("windows")) {
                        arrayList = x1Var.Q(iLogger, new b0(i10));
                    } else {
                        if (hashMap == null) {
                            hashMap = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap, X6);
                    }
                }
                x1Var.i();
                i0 i0Var = new i0(str2, arrayList);
                i0Var.f11812i = hashMap;
                return i0Var;
            case 4:
                j0 j0Var = new j0();
                x1Var.f();
                HashMap hashMap2 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X7 = x1Var.X();
                    X7.getClass();
                    switch (X7.hashCode()) {
                        case -1784982718:
                            if (X7.equals("rendering_system")) {
                                c11 = 0;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -1618432855:
                            if (X7.equals("identifier")) {
                                c11 = 1;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case -1221029593:
                            if (X7.equals("height")) {
                                c11 = 2;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 120:
                            if (X7.equals("x")) {
                                c11 = 3;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 121:
                            if (X7.equals("y")) {
                                c11 = 4;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 114586:
                            if (X7.equals("tag")) {
                                c11 = 5;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 3575610:
                            if (X7.equals("type")) {
                                c11 = 6;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 92909918:
                            if (X7.equals("alpha")) {
                                c11 = 7;
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 113126854:
                            if (X7.equals("width")) {
                                c11 = '\b';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1659526655:
                            if (X7.equals("children")) {
                                c11 = '\t';
                                break;
                            }
                            c11 = 65535;
                            break;
                        case 1941332754:
                            if (X7.equals("visibility")) {
                                c11 = '\n';
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
                            j0Var.f11817d = x1Var.l0();
                            break;
                        case 1:
                            j0Var.f11819i = x1Var.l0();
                            break;
                        case 2:
                            j0Var.f11822x = x1Var.t();
                            break;
                        case 3:
                            j0Var.f11823y = x1Var.t();
                            break;
                        case 4:
                            j0Var.E = x1Var.t();
                            break;
                        case 5:
                            j0Var.f11820v = x1Var.l0();
                            break;
                        case 6:
                            j0Var.f11818e = x1Var.l0();
                            break;
                        case 7:
                            j0Var.G = x1Var.t();
                            break;
                        case '\b':
                            j0Var.f11821w = x1Var.t();
                            break;
                        case '\t':
                            j0Var.H = x1Var.Q(iLogger, this);
                            break;
                        case '\n':
                            j0Var.F = x1Var.l0();
                            break;
                        default:
                            if (hashMap2 == null) {
                                hashMap2 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap2, X7);
                            break;
                    }
                }
                x1Var.i();
                j0Var.I = hashMap2;
                return j0Var;
            case 5:
                x1Var.f();
                io.sentry.protocol.profiling.a aVar = new io.sentry.protocol.profiling.a();
                ConcurrentHashMap concurrentHashMap6 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X8 = x1Var.X();
                    X8.getClass();
                    switch (X8.hashCode()) {
                        case -1266514778:
                            if (X8.equals("frames")) {
                                z6 = false;
                                break;
                            }
                            z6 = -1;
                            break;
                        case -892498197:
                            if (X8.equals("stacks")) {
                                z6 = true;
                                break;
                            }
                            z6 = -1;
                            break;
                        case 1864843273:
                            if (X8.equals("samples")) {
                                z6 = 2;
                                break;
                            }
                            z6 = -1;
                            break;
                        case 2061486532:
                            if (X8.equals("thread_metadata")) {
                                z6 = 3;
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
                            ArrayList Q2 = x1Var.Q(iLogger, new io.sentry.clientreport.a(27));
                            if (Q2 == null) {
                                break;
                            } else {
                                aVar.f11862i = Q2;
                                break;
                            }
                        case true:
                            List list = (List) x1Var.d0(iLogger, new b0(i11));
                            if (list == null) {
                                break;
                            } else {
                                aVar.f11861e = list;
                                break;
                            }
                        case true:
                            ArrayList Q3 = x1Var.Q(iLogger, new b0(i5));
                            if (Q3 == null) {
                                break;
                            } else {
                                aVar.f11860d = Q3;
                                break;
                            }
                        case true:
                            HashMap V3 = x1Var.V(iLogger, new b0(i6));
                            if (V3 == null) {
                                break;
                            } else {
                                aVar.f11863v = V3;
                                break;
                            }
                        default:
                            if (concurrentHashMap6 == null) {
                                concurrentHashMap6 = new ConcurrentHashMap();
                            }
                            x1Var.m0(iLogger, concurrentHashMap6, X8);
                            break;
                    }
                }
                aVar.f11864w = concurrentHashMap6;
                x1Var.i();
                return aVar;
            case 6:
                ArrayList arrayList2 = new ArrayList();
                x1Var.c();
                while (x1Var.l()) {
                    ArrayList arrayList3 = new ArrayList();
                    x1Var.c();
                    while (x1Var.l()) {
                        arrayList3.add(Integer.valueOf(x1Var.C()));
                    }
                    x1Var.g();
                    arrayList2.add(arrayList3);
                }
                x1Var.g();
                return arrayList2;
            case 7:
                x1Var.f();
                io.sentry.protocol.profiling.b bVar = new io.sentry.protocol.profiling.b();
                HashMap hashMap3 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X9 = x1Var.X();
                    X9.getClass();
                    switch (X9.hashCode()) {
                        case -1562235024:
                            if (X9.equals("thread_id")) {
                                z7 = false;
                                break;
                            }
                            z7 = -1;
                            break;
                        case 55126294:
                            if (X9.equals("timestamp")) {
                                z7 = true;
                                break;
                            }
                            z7 = -1;
                            break;
                        case 1302676018:
                            if (X9.equals("stack_id")) {
                                z7 = 2;
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
                            bVar.f11867i = x1Var.l0();
                            break;
                        case true:
                            bVar.f11865d = x1Var.r();
                            break;
                        case true:
                            bVar.f11866e = x1Var.C();
                            break;
                        default:
                            if (hashMap3 == null) {
                                hashMap3 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap3, X9);
                            break;
                    }
                }
                bVar.f11868v = hashMap3;
                x1Var.i();
                return bVar;
            case 8:
                x1Var.f();
                io.sentry.protocol.profiling.c cVar = new io.sentry.protocol.profiling.c();
                HashMap hashMap4 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X10 = x1Var.X();
                    X10.getClass();
                    if (X10.equals("priority")) {
                        cVar.f11870e = x1Var.C();
                    } else if (X10.equals(StackTraceHelper.NAME_KEY)) {
                        cVar.f11869d = x1Var.l0();
                    } else {
                        if (hashMap4 == null) {
                            hashMap4 = new HashMap();
                        }
                        x1Var.m0(iLogger, hashMap4, X10);
                    }
                }
                cVar.f11871i = hashMap4;
                x1Var.i();
                return cVar;
            case 9:
                return b(x1Var, iLogger);
            case 10:
                return io.sentry.rrweb.c.values()[x1Var.C()];
            case 11:
                return io.sentry.rrweb.d.values()[x1Var.C()];
            case 12:
                return c(x1Var, iLogger);
            case 13:
                return io.sentry.rrweb.f.values()[x1Var.C()];
            case 14:
                return d(x1Var, iLogger);
            case 15:
                x1Var.f();
                io.sentry.rrweb.h hVar = new io.sentry.rrweb.h();
                HashMap hashMap5 = null;
                while (x1Var.o0() == io.sentry.vendor.gson.stream.b.NAME) {
                    String X11 = x1Var.X();
                    X11.getClass();
                    switch (X11.hashCode()) {
                        case 120:
                            if (X11.equals("x")) {
                                z8 = false;
                                break;
                            }
                            z8 = -1;
                            break;
                        case 121:
                            if (X11.equals("y")) {
                                z8 = true;
                                break;
                            }
                            z8 = -1;
                            break;
                        case 3355:
                            if (X11.equals(StackTraceHelper.ID_KEY)) {
                                z8 = 2;
                                break;
                            }
                            z8 = -1;
                            break;
                        case 665490880:
                            if (X11.equals("timeOffset")) {
                                z8 = 3;
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
                            hVar.f11950e = x1Var.x();
                            break;
                        case true:
                            hVar.f11951i = x1Var.x();
                            break;
                        case true:
                            hVar.f11949d = x1Var.C();
                            break;
                        case true:
                            hVar.f11952v = x1Var.R();
                            break;
                        default:
                            if (hashMap5 == null) {
                                hashMap5 = new HashMap();
                            }
                            x1Var.m0(iLogger, hashMap5, X11);
                            break;
                    }
                }
                hVar.f11953w = hashMap5;
                x1Var.i();
                return hVar;
            case 16:
                return e(x1Var, iLogger);
            case 17:
                return f(x1Var, iLogger);
            default:
                return g(x1Var, iLogger);
        }
    }
}
