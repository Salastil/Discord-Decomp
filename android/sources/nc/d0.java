package nc;

import android.net.Uri;
import android.text.TextUtils;
import ie.s0;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;

/* loaded from: classes3.dex */
public final class d0 implements f0 {
    public final a5.g a;

    /* renamed from: b, reason: collision with root package name */
    public final String f15002b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f15003c;

    /* renamed from: d, reason: collision with root package name */
    public final HashMap f15004d;

    public d0(String str, boolean z5, a5.g gVar) {
        ke.b.g((z5 && TextUtils.isEmpty(str)) ? false : true);
        this.a = gVar;
        this.f15002b = str;
        this.f15003c = z5;
        this.f15004d = new HashMap();
    }

    public static byte[] b(a5.g gVar, String str, byte[] bArr, Map map) {
        Map map2;
        List list;
        s0 s0Var = new s0(gVar.createDataSource());
        Map map3 = Collections.EMPTY_MAP;
        Uri parse = Uri.parse(str);
        ke.b.m(parse, "The uri must be set.");
        ie.p pVar = new ie.p(parse, 0L, 2, bArr, map, 0L, -1L, null, 1);
        int i5 = 0;
        int i6 = 0;
        while (true) {
            try {
                ie.n nVar = new ie.n(s0Var, pVar);
                try {
                    byte[] T = ke.d0.T(nVar);
                    ke.d0.g(nVar);
                    return T;
                } catch (ie.d0 e9) {
                    try {
                        int i10 = e9.f10662v;
                        String str2 = null;
                        if ((i10 == 307 || i10 == 308) && i6 < 5 && (map2 = e9.f10663w) != null && (list = (List) map2.get("Location")) != null && !list.isEmpty()) {
                            str2 = (String) list.get(i5);
                        }
                        if (str2 == null) {
                            throw e9;
                        }
                        i6++;
                        ie.o a = pVar.a();
                        a.a = Uri.parse(str2);
                        pVar = a.a();
                        ke.d0.g(nVar);
                    } catch (Throwable th2) {
                        ke.d0.g(nVar);
                        throw th2;
                    }
                }
            } catch (Exception e10) {
                s0Var.f10756i.getClass();
                s0Var.f10754d.s();
                throw new g0(e10);
            }
        }
    }

    public final byte[] a(UUID uuid, w wVar) {
        String str = wVar.f15049b;
        if (this.f15003c || TextUtils.isEmpty(str)) {
            str = this.f15002b;
        }
        if (TextUtils.isEmpty(str)) {
            Map map = Collections.EMPTY_MAP;
            Uri uri = Uri.EMPTY;
            ke.b.m(uri, "The uri must be set.");
            new ie.p(uri, 0L, 1, null, map, 0L, -1L, null, 0);
            throw new g0(new IllegalStateException("No license URL"));
        }
        HashMap hashMap = new HashMap();
        UUID uuid2 = hc.h.f9712e;
        hashMap.put("Content-Type", uuid2.equals(uuid) ? "text/xml" : hc.h.f9710c.equals(uuid) ? "application/json" : "application/octet-stream");
        if (uuid2.equals(uuid)) {
            hashMap.put("SOAPAction", "http://schemas.microsoft.com/DRM/2007/03/protocols/AcquireLicense");
        }
        synchronized (this.f15004d) {
            hashMap.putAll(this.f15004d);
        }
        return b(this.a, str, wVar.a, hashMap);
    }

    public final byte[] c(x xVar) {
        return b(this.a, xVar.f15050b + "&signedRequest=" + ke.d0.n(xVar.a), null, Collections.EMPTY_MAP);
    }
}
