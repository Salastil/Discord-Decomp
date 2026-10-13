package net.time4j.tz;

import bg.s;
import j$.util.DesugarTimeZone;
import java.io.Serializable;
import java.lang.ref.ReferenceQueue;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.TimeZone;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes3.dex */
public abstract class i implements Serializable {
    public static final Map E;
    public static final h F;
    public static final o G;
    public static final ConcurrentHashMap H;
    public static final ReferenceQueue I;
    public static final LinkedList J;
    public static final ConcurrentHashMap K;
    public static final i L;

    /* renamed from: d, reason: collision with root package name */
    public static final String f15335d;

    /* renamed from: e, reason: collision with root package name */
    public static final s f15336e;

    /* renamed from: i, reason: collision with root package name */
    public static final k f15337i;

    /* renamed from: v, reason: collision with root package name */
    public static final boolean f15338v;

    /* renamed from: w, reason: collision with root package name */
    public static volatile i f15339w;

    /* renamed from: x, reason: collision with root package name */
    public static volatile boolean f15340x;

    /* renamed from: y, reason: collision with root package name */
    public static final int f15341y;

    /* JADX WARN: Removed duplicated region for block: B:100:0x0350  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0335  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x0356  */
    static {
        List list;
        i iVar;
        String property;
        System.getProperty("line.separator");
        f15335d = System.getProperty("net.time4j.tz.repository.version");
        f15336e = new s(10);
        f15337i = k.a(1, 2);
        k.a(3, 2);
        f15338v = "Dalvik".equalsIgnoreCase(System.getProperty("java.vm.name")) || Boolean.getBoolean("net.time4j.allow.system.tz.override");
        f15339w = null;
        f15340x = true;
        f15341y = 11;
        H = new ConcurrentHashMap();
        K = new ConcurrentHashMap();
        I = new ReferenceQueue();
        J = new LinkedList();
        try {
            ClassLoader classLoader = i.class.getClassLoader();
            String[] strArr = {"AFRICA", "AMERICA", "AMERICA$ARGENTINA", "AMERICA$INDIANA", "AMERICA$KENTUCKY", "AMERICA$NORTH_DAKOTA", "ANTARCTICA", "ASIA", "ATLANTIC", "AUSTRALIA", "EUROPE", "INDIAN", "PACIFIC"};
            ArrayList arrayList = new ArrayList();
            for (int i5 = 0; i5 < 13; i5++) {
                Class<?> cls = Class.forName("net.time4j.tz.olson." + strArr[i5], true, classLoader);
                if (f.class.isAssignableFrom(cls)) {
                    arrayList.add(cls);
                }
            }
            list = Collections.unmodifiableList(arrayList);
        } catch (ClassNotFoundException unused) {
            list = Collections.EMPTY_LIST;
        }
        HashMap hashMap = new HashMap();
        m mVar = m.f15346w;
        hashMap.put("Z", mVar);
        hashMap.put("UT", mVar);
        hashMap.put("UTC", mVar);
        hashMap.put("GMT", mVar);
        hashMap.put("UTC0", mVar);
        hashMap.put("GMT0", mVar);
        Iterator it = list.iterator();
        while (it.hasNext()) {
            for (f fVar : (f[]) ((Class) it.next()).getEnumConstants()) {
                hashMap.put(fVar.a(), fVar);
            }
        }
        E = Collections.unmodifiableMap(hashMap);
        HashMap hashMap2 = new HashMap();
        m mVar2 = m.f15346w;
        hashMap2.put("Etc/GMT", mVar2);
        hashMap2.put("Etc/Greenwich", mVar2);
        hashMap2.put("Etc/Universal", mVar2);
        hashMap2.put("Etc/Zulu", mVar2);
        hashMap2.put("Etc/GMT+0", mVar2);
        hashMap2.put("Etc/GMT-0", mVar2);
        hashMap2.put("Etc/GMT0", mVar2);
        hashMap2.put("Etc/UTC", mVar2);
        hashMap2.put("Etc/UCT", mVar2);
        hashMap2.put("Etc/GMT-14", m.e(50400, 0));
        hashMap2.put("Etc/GMT-13", m.e(46800, 0));
        hashMap2.put("Etc/GMT-12", m.e(43200, 0));
        hashMap2.put("Etc/GMT-11", m.e(39600, 0));
        hashMap2.put("Etc/GMT-10", m.e(36000, 0));
        hashMap2.put("Etc/GMT-9", m.e(32400, 0));
        hashMap2.put("Etc/GMT-8", m.e(28800, 0));
        hashMap2.put("Etc/GMT-7", m.e(25200, 0));
        hashMap2.put("Etc/GMT-6", m.e(21600, 0));
        hashMap2.put("Etc/GMT-5", m.e(18000, 0));
        hashMap2.put("Etc/GMT-4", m.e(14400, 0));
        hashMap2.put("Etc/GMT-3", m.e(10800, 0));
        hashMap2.put("Etc/GMT-2", m.e(7200, 0));
        hashMap2.put("Etc/GMT-1", m.e(3600, 0));
        hashMap2.put("Etc/GMT+1", m.e(-3600, 0));
        hashMap2.put("Etc/GMT+2", m.e(-7200, 0));
        hashMap2.put("Etc/GMT+3", m.e(-10800, 0));
        hashMap2.put("Etc/GMT+4", m.e(-14400, 0));
        hashMap2.put("Etc/GMT+5", m.e(-18000, 0));
        hashMap2.put("Etc/GMT+6", m.e(-21600, 0));
        hashMap2.put("Etc/GMT+7", m.e(-25200, 0));
        hashMap2.put("Etc/GMT+8", m.e(-28800, 0));
        hashMap2.put("Etc/GMT+9", m.e(-32400, 0));
        hashMap2.put("Etc/GMT+10", m.e(-36000, 0));
        hashMap2.put("Etc/GMT+11", m.e(-39600, 0));
        hashMap2.put("Etc/GMT+12", m.e(-43200, 0));
        Collections.unmodifiableMap(hashMap2);
        o oVar = null;
        for (o oVar2 : is.c.f12272b.d(o.class)) {
            String name = oVar2.getName();
            if (name.equals("TZDB")) {
                String version = oVar2.getVersion();
                if (!version.isEmpty()) {
                    String str = f15335d;
                    if (version.equals(str) || (str == null && (oVar == null || version.compareTo(oVar.getVersion()) > 0 || (version.compareTo(oVar.getVersion()) == 0 && !oVar2.c().contains("{java.home}"))))) {
                        oVar = oVar2;
                    }
                }
            } else if (!name.isEmpty() && !name.equals("DEFAULT")) {
                K.put(name, oVar2);
            }
        }
        for (p pVar : is.c.f12272b.d(p.class)) {
        }
        h hVar = new h();
        F = hVar;
        ConcurrentHashMap concurrentHashMap = K;
        concurrentHashMap.put("java.util.TimeZone", hVar);
        if (oVar == null) {
            G = hVar;
        } else {
            concurrentHashMap.put("TZDB", oVar);
            G = oVar;
        }
        try {
            property = System.getProperty("user.timezone");
        } catch (SecurityException unused2) {
        }
        if (!"Z".equals(property) && !"UTC".equals(property)) {
            if (property != null) {
                iVar = b(c(property), property, false);
                if (iVar == null) {
                    String id2 = TimeZone.getDefault().getID();
                    i b10 = b(null, id2, false);
                    if (b10 == null) {
                        b10 = new d(new c(id2));
                    }
                    L = b10;
                } else {
                    L = iVar;
                }
                if (f15338v) {
                    f15339w = L;
                }
                new io.sentry.internal.debugmeta.c(16);
            }
            iVar = null;
            if (iVar == null) {
            }
            if (f15338v) {
            }
            new io.sentry.internal.debugmeta.c(16);
        }
        iVar = m.f15346w.c();
        if (iVar == null) {
        }
        if (f15338v) {
        }
        new io.sentry.internal.debugmeta.c(16);
    }

    /* JADX WARN: Code restructure failed: missing block: B:57:0x0115, code lost:
    
        if (r1.equals("Z") != false) goto L67;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0148  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0170  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static i b(f fVar, String str, boolean z5) {
        i iVar;
        boolean z6;
        String str2;
        b bVar;
        TimeZone timeZone;
        ConcurrentHashMap concurrentHashMap = H;
        g gVar = (g) concurrentHashMap.get(str);
        if (gVar != null) {
            iVar = (i) gVar.get();
            if (iVar == null) {
                concurrentHashMap.remove(gVar.a);
            }
        } else {
            iVar = null;
        }
        if (iVar != null) {
            return iVar;
        }
        String str3 = "";
        int length = str.length();
        int i5 = 0;
        while (true) {
            z6 = true;
            if (i5 >= length) {
                str2 = str;
                break;
            }
            if (str.charAt(i5) == '~') {
                str3 = str.substring(0, i5);
                str2 = str.substring(i5 + 1);
                break;
            }
            i5++;
        }
        if (!str2.isEmpty()) {
            o oVar = G;
            if (!str3.isEmpty() && !str3.equals("DEFAULT")) {
                z6 = false;
            }
            if (z6 || (oVar = (o) K.get(str3)) != null) {
                if (fVar == null) {
                    if (z6) {
                        fVar = c(str2);
                        if (fVar instanceof m) {
                            return ((m) fVar).c();
                        }
                    } else {
                        fVar = new c(str);
                    }
                }
                if (oVar == F) {
                    if (str2.equals("Z")) {
                        timeZone = DesugarTimeZone.getTimeZone("GMT+00:00");
                    } else if (str2.startsWith("UTC")) {
                        timeZone = DesugarTimeZone.getTimeZone("GMT" + str2.substring(3));
                    } else if (str2.startsWith("UT")) {
                        timeZone = DesugarTimeZone.getTimeZone("GMT" + str2.substring(2));
                    } else {
                        timeZone = DesugarTimeZone.getTimeZone(str2);
                    }
                    d dVar = new d(fVar, timeZone, false);
                    boolean d6 = dVar.d();
                    bVar = dVar;
                    if (d6) {
                        bVar = dVar;
                        if (!str2.equals("GMT")) {
                            bVar = dVar;
                            if (!str2.startsWith("UT")) {
                                bVar = dVar;
                            }
                        }
                    }
                    iVar = bVar;
                    if (iVar == null) {
                        if (f15340x) {
                            g gVar2 = (g) H.putIfAbsent(str, new g(iVar, I));
                            if (gVar2 == null) {
                                synchronized (i.class) {
                                    try {
                                        J.addFirst(iVar);
                                        while (true) {
                                            LinkedList linkedList = J;
                                            if (linkedList.size() >= f15341y) {
                                                linkedList.removeLast();
                                            }
                                        }
                                    } catch (Throwable th2) {
                                        throw th2;
                                    }
                                }
                                return iVar;
                            }
                            i iVar2 = (i) gVar2.get();
                            if (iVar2 != null) {
                                return iVar2;
                            }
                        }
                        return iVar;
                    }
                    if (z5) {
                        if (TimeZone.getDefault().getID().equals(str)) {
                            return new d(new c(str));
                        }
                        throw new IllegalArgumentException("Unknown timezone: ".concat(str));
                    }
                } else {
                    j load = oVar.load(str2);
                    if (load == null) {
                        Map b10 = oVar.b();
                        j jVar = null;
                        while (jVar == null) {
                            str2 = (String) b10.get(str2);
                            if (str2 == null) {
                                break;
                            }
                            jVar = oVar.load(str2);
                        }
                        if (jVar == null) {
                            iVar = null;
                        } else {
                            bVar = new b(fVar, jVar, f15337i);
                            iVar = bVar;
                        }
                    } else {
                        iVar = new b(fVar, load, f15337i);
                    }
                    if (iVar == null) {
                    }
                }
            } else if (z5) {
                throw new IllegalArgumentException((str3.equals("TZDB") ? "TZDB provider not available: " : "Timezone model provider not registered: ").concat(str));
            }
        } else if (z5) {
            throw new IllegalArgumentException("Timezone key is empty.");
        }
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:63:0x004b, code lost:
    
        if (r13.startsWith("GMT") != false) goto L17;
     */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0054  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static f c(String str) {
        String str2;
        m mVar;
        int f2;
        int f10;
        f fVar = (f) E.get(str);
        if (fVar != null) {
            return fVar;
        }
        if (str.startsWith("GMT")) {
            str = "UTC" + str.substring(3);
        }
        ConcurrentHashMap concurrentHashMap = m.f15345v;
        if (str.equals("Z")) {
            mVar = m.f15346w;
        } else {
            int length = str.length();
            if (length >= 3) {
                if (str.startsWith("UTC")) {
                    str2 = str.substring(3);
                    length -= 3;
                    if (length >= 2) {
                        int i5 = str2.charAt(0) == '-' ? 1 : str2.charAt(0) == '+' ? 2 : 0;
                        int f11 = m.f(1, 2, str2);
                        if (f11 >= 0) {
                            if (length <= 3) {
                                mVar = m.d(i5, f11, 0);
                            } else {
                                int i6 = str2.charAt(2) != ':' ? 4 : 3;
                                int f12 = m.f(i6, 2, str2);
                                if (str2.charAt(i6 - 1) == ':' && f12 >= 0) {
                                    int i10 = i6 + 2;
                                    if (length == i10) {
                                        mVar = m.d(i5, f11, f12);
                                    } else {
                                        int i11 = i6 + 5;
                                        if (length >= i11 && str2.charAt(i10) == ':' && (f2 = m.f(i6 + 3, 2, str2)) >= 0) {
                                            int i12 = (f12 * 60) + (f11 * 3600) + f2;
                                            if (i5 == 1) {
                                                i12 = -i12;
                                            }
                                            if (length == i11) {
                                                mVar = m.e(i12, 0);
                                            } else if (length == i6 + 15 && str2.charAt(i11) == '.' && (f10 = m.f(i6 + 6, 9, str2)) >= 0) {
                                                if (i5 == 1) {
                                                    f10 = -f10;
                                                }
                                                mVar = m.e(i12, f10);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    mVar = null;
                }
            }
            str2 = str;
            if (length >= 2) {
            }
            mVar = null;
        }
        return mVar == null ? new c(str) : mVar;
    }

    public abstract f a();
}
