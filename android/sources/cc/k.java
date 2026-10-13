package cc;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.util.Log;
import androidx.appcompat.widget.b4;
import androidx.appcompat.widget.w;
import com.appsflyer.AdRevenueScheme;
import di.p;
import e4.m;
import ip.l;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.net.URL;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Objects;
import k2.r;
import kotlin.jvm.internal.Intrinsics;
import nd.m0;
import qa.t;
import rd.u;
import th.b1;
import th.c0;
import th.d1;
import th.e0;
import th.g1;
import th.k1;
import th.m1;
import th.n0;
import th.p0;
import th.q1;
import th.v0;
import th.w0;
import wb.n;

/* loaded from: classes3.dex */
public final class k implements uh.g {
    public Object E;
    public Object F;
    public Object G;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3397d;

    /* renamed from: e, reason: collision with root package name */
    public Object f3398e;

    /* renamed from: i, reason: collision with root package name */
    public Object f3399i;

    /* renamed from: v, reason: collision with root package name */
    public Object f3400v;

    /* renamed from: w, reason: collision with root package name */
    public Object f3401w;

    /* renamed from: x, reason: collision with root package name */
    public Object f3402x;

    /* renamed from: y, reason: collision with root package name */
    public Object f3403y;

    public /* synthetic */ k() {
        this.f3397d = 1;
    }

    @Override // uh.g
    public Object a() {
        switch (this.f3397d) {
            case 2:
                Context context = ((p) ((u) this.f3398e).f17275e).f7601d;
                Object a = ((uh.f) this.f3399i).a();
                Object a10 = ((uh.f) this.f3400v).a();
                uh.f fVar = new uh.f(new u(7, (t) this.f3401w));
                Object a11 = ((uh.f) this.f3402x).a();
                Object a12 = ((uh.f) this.f3403y).a();
                return new th.p(context, (v0) a, (n0) a10, fVar, (p0) a11, (c0) a12, new uh.f(new u(7, (uh.f) this.E)), new uh.f(new u(7, (uh.f) this.F)), (g1) ((uh.f) this.G).a());
            default:
                Object a13 = ((uh.f) this.f3398e).a();
                return new n0((v0) a13, new uh.f(new u(7, (t) this.f3399i)), (e0) ((uh.f) this.f3400v).a(), (q1) ((uh.f) this.f3401w).a(), (b1) ((uh.f) this.f3402x).a(), (d1) ((uh.f) this.f3403y).a(), (k1) ((uh.f) this.E).a(), (m1) ((uh.f) this.F).a(), (w0) ((uh.f) this.G).a());
        }
    }

    public k b(l descriptor, List typeParameterProtos, eq.g nameResolver, a4.i typeTable, eq.h versionRequirementTable, eq.a version) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(typeParameterProtos, "typeParameterProtos");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        Intrinsics.checkNotNullParameter(versionRequirementTable, "versionRequirementTable");
        Intrinsics.checkNotNullParameter(version, "metadataVersion");
        uq.j jVar = (uq.j) this.f3398e;
        Intrinsics.checkNotNullParameter(version, "version");
        Intrinsics.checkNotNullParameter(version, "version");
        int i5 = version.f8186b;
        return new k(jVar, nameResolver, descriptor, typeTable, ((i5 != 1 || version.f8187c < 4) && i5 <= 1) ? (eq.h) this.f3402x : versionRequirementTable, version, (wq.k) this.E, (uq.c0) this.F, typeParameterProtos);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0407  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x03ed A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void d(wb.i iVar, int i5) {
        byte[] bArr;
        long j;
        xb.a aVar;
        String str;
        int i6;
        m0 a;
        String str2;
        Integer num;
        String str3;
        b4 b4Var;
        int i10;
        final k kVar = this;
        final wb.i iVar2 = iVar;
        byte[] bArr2 = iVar2.f19704b;
        ec.c cVar = (ec.c) kVar.f3403y;
        xb.e a10 = ((xb.d) kVar.f3399i).a(iVar2.a);
        long j5 = 0;
        while (true) {
            final int i11 = 0;
            dc.h hVar = (dc.h) cVar;
            if (!((Boolean) hVar.o(new ec.b(kVar) { // from class: cc.g

                /* renamed from: e, reason: collision with root package name */
                public final /* synthetic */ k f3384e;

                {
                    this.f3384e = kVar;
                }

                @Override // ec.b
                public final Object execute() {
                    Boolean bool;
                    switch (i11) {
                        case 0:
                            wb.i iVar3 = iVar2;
                            dc.h hVar2 = (dc.h) ((dc.d) this.f3384e.f3400v);
                            SQLiteDatabase c6 = hVar2.c();
                            c6.beginTransaction();
                            try {
                                Long f2 = dc.h.f(c6, iVar3);
                                if (f2 == null) {
                                    bool = Boolean.FALSE;
                                } else {
                                    Cursor rawQuery = hVar2.c().rawQuery("SELECT 1 FROM events WHERE context_id = ? LIMIT 1", new String[]{f2.toString()});
                                    try {
                                        Boolean valueOf = Boolean.valueOf(rawQuery.moveToNext());
                                        rawQuery.close();
                                        bool = valueOf;
                                    } catch (Throwable th2) {
                                        rawQuery.close();
                                        throw th2;
                                    }
                                }
                                c6.setTransactionSuccessful();
                                return bool;
                            } finally {
                                c6.endTransaction();
                            }
                        default:
                            dc.h hVar3 = (dc.h) ((dc.d) this.f3384e.f3400v);
                            hVar3.getClass();
                            return (Iterable) hVar3.g(new i(10, hVar3, iVar2));
                    }
                }
            })).booleanValue()) {
                hVar.o(new j(j5, kVar, iVar2));
                return;
            }
            final int i12 = 1;
            Iterable iterable = (Iterable) hVar.o(new ec.b(kVar) { // from class: cc.g

                /* renamed from: e, reason: collision with root package name */
                public final /* synthetic */ k f3384e;

                {
                    this.f3384e = kVar;
                }

                @Override // ec.b
                public final Object execute() {
                    Boolean bool;
                    switch (i12) {
                        case 0:
                            wb.i iVar3 = iVar2;
                            dc.h hVar2 = (dc.h) ((dc.d) this.f3384e.f3400v);
                            SQLiteDatabase c6 = hVar2.c();
                            c6.beginTransaction();
                            try {
                                Long f2 = dc.h.f(c6, iVar3);
                                if (f2 == null) {
                                    bool = Boolean.FALSE;
                                } else {
                                    Cursor rawQuery = hVar2.c().rawQuery("SELECT 1 FROM events WHERE context_id = ? LIMIT 1", new String[]{f2.toString()});
                                    try {
                                        Boolean valueOf = Boolean.valueOf(rawQuery.moveToNext());
                                        rawQuery.close();
                                        bool = valueOf;
                                    } catch (Throwable th2) {
                                        rawQuery.close();
                                        throw th2;
                                    }
                                }
                                c6.setTransactionSuccessful();
                                return bool;
                            } finally {
                                c6.endTransaction();
                            }
                        default:
                            dc.h hVar3 = (dc.h) ((dc.d) this.f3384e.f3400v);
                            hVar3.getClass();
                            return (Iterable) hVar3.g(new i(10, hVar3, iVar2));
                    }
                }
            });
            if (!iterable.iterator().hasNext()) {
                return;
            }
            if (a10 == null) {
                io.sentry.config.a.k(iVar2, "Uploader", "Unknown backend for %s, deleting event batch for it...");
                aVar = new xb.a(3, -1L);
                bArr = bArr2;
                j = j5;
            } else {
                ArrayList arrayList = new ArrayList();
                Iterator it = iterable.iterator();
                while (it.hasNext()) {
                    arrayList.add(((dc.b) it.next()).f7472c);
                }
                String str4 = "proto";
                if (bArr2 != null) {
                    dc.c cVar2 = (dc.c) kVar.G;
                    Objects.requireNonNull(cVar2);
                    zb.a aVar2 = (zb.a) hVar.o(new app.rive.runtime.kotlin.core.a(i12, cVar2));
                    w wVar = new w();
                    wVar.f1146x = new HashMap();
                    wVar.f1144v = Long.valueOf(((fc.a) kVar.E).e());
                    wVar.f1145w = Long.valueOf(((fc.a) kVar.F).e());
                    wVar.f1141d = "GDT_CLIENT_METRICS";
                    tb.c cVar3 = new tb.c("proto");
                    aVar2.getClass();
                    r rVar = n.a;
                    rVar.getClass();
                    ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                    try {
                        rVar.s(aVar2, byteArrayOutputStream);
                    } catch (IOException unused) {
                    }
                    wVar.f1143i = new wb.l(cVar3, byteArrayOutputStream.toByteArray());
                    arrayList.add(((ub.b) a10).a(wVar.p()));
                }
                ub.b bVar = (ub.b) a10;
                HashMap hashMap = new HashMap();
                Iterator it2 = arrayList.iterator();
                while (it2.hasNext()) {
                    wb.h hVar2 = (wb.h) it2.next();
                    String str5 = hVar2.a;
                    if (hashMap.containsKey(str5)) {
                        ((List) hashMap.get(str5)).add(hVar2);
                    } else {
                        ArrayList arrayList2 = new ArrayList();
                        arrayList2.add(hVar2);
                        hashMap.put(str5, arrayList2);
                    }
                }
                ArrayList arrayList3 = new ArrayList();
                for (Map.Entry entry : hashMap.entrySet()) {
                    wb.h hVar3 = (wb.h) ((List) entry.getValue()).get(0);
                    vb.w wVar2 = vb.w.f19320d;
                    long e9 = bVar.f18827f.e();
                    long e10 = bVar.f18826e.e();
                    vb.j jVar = new vb.j(new vb.h(Integer.valueOf(hVar3.b("sdk-version")), hVar3.a("model"), hVar3.a("hardware"), hVar3.a("device"), hVar3.a("product"), hVar3.a("os-uild"), hVar3.a("manufacturer"), hVar3.a("fingerprint"), hVar3.a("locale"), hVar3.a(AdRevenueScheme.COUNTRY), hVar3.a("mcc_mnc"), hVar3.a("application_build")));
                    try {
                        num = Integer.valueOf(Integer.parseInt((String) entry.getKey()));
                        str2 = null;
                    } catch (NumberFormatException unused2) {
                        str2 = (String) entry.getKey();
                        num = null;
                    }
                    ArrayList arrayList4 = new ArrayList();
                    for (wb.h hVar4 : (List) entry.getValue()) {
                        byte[] bArr3 = bArr2;
                        wb.l lVar = hVar4.f19700c;
                        long j7 = j5;
                        tb.c cVar4 = lVar.a;
                        byte[] bArr4 = lVar.f19713b;
                        if (cVar4.equals(new tb.c(str4))) {
                            b4Var = new b4();
                            b4Var.f930v = bArr4;
                            str3 = str4;
                        } else {
                            str3 = str4;
                            if (cVar4.equals(new tb.c("json"))) {
                                String str6 = new String(bArr4, Charset.forName("UTF-8"));
                                b4 b4Var2 = new b4();
                                b4Var2.f931w = str6;
                                b4Var = b4Var2;
                            } else {
                                String s2 = io.sentry.config.a.s("CctTransportBackend");
                                if (Log.isLoggable(s2, 5)) {
                                    Log.w(s2, "Received event of unsupported encoding " + cVar4 + ". Skipping...");
                                }
                                bArr2 = bArr3;
                                j5 = j7;
                                str4 = str3;
                            }
                        }
                        b4Var.f927d = Long.valueOf(hVar4.f19701d);
                        b4Var.f929i = Long.valueOf(hVar4.f19702e);
                        String str7 = (String) hVar4.f19703f.get("tz-offset");
                        b4Var.f932x = Long.valueOf(str7 == null ? 0L : Long.valueOf(str7).longValue());
                        b4Var.f933y = new vb.n((vb.u) vb.u.f19318d.get(hVar4.b("net-type")), (vb.t) vb.t.f19316d.get(hVar4.b("mobile-subtype")));
                        Integer num2 = hVar4.f19699b;
                        if (num2 != null) {
                            b4Var.f928e = num2;
                        }
                        String str8 = ((Long) b4Var.f927d) == null ? " eventTimeMs" : "";
                        if (((Long) b4Var.f929i) == null) {
                            str8 = str8.concat(" eventUptimeMs");
                        }
                        if (((Long) b4Var.f932x) == null) {
                            str8 = k0.d.k(str8, " timezoneOffsetSeconds");
                        }
                        if (!str8.isEmpty()) {
                            throw new IllegalStateException("Missing required properties:".concat(str8));
                        }
                        arrayList4.add(new vb.k(((Long) b4Var.f927d).longValue(), (Integer) b4Var.f928e, ((Long) b4Var.f929i).longValue(), (byte[]) b4Var.f930v, (String) b4Var.f931w, ((Long) b4Var.f932x).longValue(), (vb.n) b4Var.f933y));
                        bArr2 = bArr3;
                        j5 = j7;
                        str4 = str3;
                    }
                    arrayList3.add(new vb.l(e9, e10, jVar, num, str2, arrayList4));
                    bArr2 = bArr2;
                }
                bArr = bArr2;
                j = j5;
                vb.i iVar3 = new vb.i(arrayList3);
                URL url = bVar.f18825d;
                if (bArr != null) {
                    try {
                        ub.a a11 = ub.a.a(bArr);
                        str = a11.f18822b;
                        if (str == null) {
                            str = null;
                        }
                        String str9 = a11.a;
                        if (str9 != null) {
                            url = ub.b.b(str9);
                        }
                    } catch (IllegalArgumentException unused3) {
                        aVar = new xb.a(3, -1L);
                    }
                } else {
                    str = null;
                }
                try {
                    int i13 = 19;
                    r rVar2 = new r(url, iVar3, str, i13);
                    ni.a aVar3 = new ni.a(8, bVar);
                    int i14 = 5;
                    do {
                        a = aVar3.a(rVar2);
                        URL url2 = (URL) a.f15141c;
                        if (url2 != null) {
                            io.sentry.config.a.k(url2, "CctTransportBackend", "Following redirect to: %s");
                            rVar2 = new r(url2, (vb.i) rVar2.f13143i, (String) rVar2.f13144v, i13);
                        } else {
                            rVar2 = null;
                        }
                        if (rVar2 == null) {
                            break;
                        } else {
                            i14--;
                        }
                    } while (i14 >= 1);
                    int i15 = a.a;
                    if (i15 == 200) {
                        aVar = new xb.a(1, a.f15140b);
                    } else if (i15 >= 500 || i15 == 404) {
                        aVar = new xb.a(2, -1L);
                    } else if (i15 == 400) {
                        try {
                            aVar = new xb.a(4, -1L);
                        } catch (IOException e11) {
                            e = e11;
                            io.sentry.config.a.m("CctTransportBackend", "Could not make request to the backend", e);
                            i6 = 2;
                            aVar = new xb.a(2, -1L);
                            i10 = aVar.a;
                            if (i10 != i6) {
                            }
                        }
                    } else {
                        aVar = new xb.a(3, -1L);
                    }
                } catch (IOException e12) {
                    e = e12;
                }
            }
            i6 = 2;
            i10 = aVar.a;
            if (i10 != i6) {
                hVar.o(new h(this, iterable, iVar, j));
                ((m) this.f3401w).g0(iVar, i5 + 1, true);
                return;
            }
            kVar = this;
            iVar2 = iVar;
            long j10 = j;
            hVar.o(new i(0, kVar, iterable));
            if (i10 == 1) {
                j5 = Math.max(j10, aVar.f20295b);
                if (bArr != null) {
                    hVar.o(new app.rive.runtime.kotlin.core.a(3, kVar));
                }
            } else {
                if (i10 == 4) {
                    HashMap hashMap2 = new HashMap();
                    Iterator it3 = iterable.iterator();
                    while (it3.hasNext()) {
                        String str10 = ((dc.b) it3.next()).f7472c.a;
                        if (hashMap2.containsKey(str10)) {
                            hashMap2.put(str10, Integer.valueOf(((Integer) hashMap2.get(str10)).intValue() + 1));
                        } else {
                            hashMap2.put(str10, 1);
                        }
                    }
                    hVar.o(new i(1, kVar, hashMap2));
                }
                j5 = j10;
            }
            bArr2 = bArr;
        }
    }

    public /* synthetic */ k(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6, Object obj7, Object obj8, Object obj9, int i5) {
        this.f3397d = i5;
        this.f3398e = obj;
        this.f3399i = obj2;
        this.f3400v = obj3;
        this.f3401w = obj4;
        this.f3402x = obj5;
        this.f3403y = obj6;
        this.E = obj7;
        this.F = obj8;
        this.G = obj9;
    }

    public k(uq.j components, eq.g nameResolver, l containingDeclaration, a4.i typeTable, eq.h versionRequirementTable, eq.a metadataVersion, wq.k kVar, uq.c0 c0Var, List typeParameters) {
        String p3;
        this.f3397d = 4;
        Intrinsics.checkNotNullParameter(components, "components");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        Intrinsics.checkNotNullParameter(versionRequirementTable, "versionRequirementTable");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        Intrinsics.checkNotNullParameter(typeParameters, "typeParameters");
        this.f3398e = components;
        this.f3399i = nameResolver;
        this.f3400v = containingDeclaration;
        this.f3401w = typeTable;
        this.f3402x = versionRequirementTable;
        this.f3403y = metadataVersion;
        this.E = kVar;
        this.F = new uq.c0(this, c0Var, typeParameters, "Deserializer for \"" + containingDeclaration.getName() + '\"', (kVar == null || (p3 = kVar.p()) == null) ? "[container not found]" : p3);
        this.G = new uq.t(this);
    }
}
