package ub;

import android.content.Context;
import android.content.pm.PackageManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.telephony.TelephonyManager;
import android.util.SparseArray;
import androidx.appcompat.widget.w;
import com.appsflyer.AdRevenueScheme;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.Calendar;
import java.util.HashMap;
import java.util.Locale;
import java.util.TimeZone;
import qd.f;
import ti.d;
import vb.c;
import vb.g;
import vb.h;
import vb.i;
import vb.j;
import vb.k;
import vb.l;
import vb.n;
import vb.o;
import vb.q;
import vb.r;
import vb.s;
import vb.t;
import vb.u;
import vb.v;
import xb.e;

/* loaded from: classes3.dex */
public final class b implements e {
    public final f a;

    /* renamed from: b, reason: collision with root package name */
    public final ConnectivityManager f18823b;

    /* renamed from: c, reason: collision with root package name */
    public final Context f18824c;

    /* renamed from: d, reason: collision with root package name */
    public final URL f18825d;

    /* renamed from: e, reason: collision with root package name */
    public final fc.a f18826e;

    /* renamed from: f, reason: collision with root package name */
    public final fc.a f18827f;

    /* renamed from: g, reason: collision with root package name */
    public final int f18828g;

    public b(Context context, fc.a aVar, fc.a aVar2) {
        d dVar = new d();
        c cVar = c.a;
        dVar.a(o.class, cVar);
        dVar.a(i.class, cVar);
        vb.f fVar = vb.f.a;
        dVar.a(s.class, fVar);
        dVar.a(l.class, fVar);
        vb.d dVar2 = vb.d.a;
        dVar.a(q.class, dVar2);
        dVar.a(j.class, dVar2);
        vb.b bVar = vb.b.a;
        dVar.a(vb.a.class, bVar);
        dVar.a(h.class, bVar);
        vb.e eVar = vb.e.a;
        dVar.a(r.class, eVar);
        dVar.a(k.class, eVar);
        g gVar = g.a;
        dVar.a(v.class, gVar);
        dVar.a(n.class, gVar);
        dVar.f18649d = true;
        this.a = new f(7, dVar);
        this.f18824c = context;
        this.f18823b = (ConnectivityManager) context.getSystemService("connectivity");
        this.f18825d = b(a.f18818c);
        this.f18826e = aVar2;
        this.f18827f = aVar;
        this.f18828g = 130000;
    }

    public static URL b(String str) {
        try {
            return new URL(str);
        } catch (MalformedURLException e9) {
            throw new IllegalArgumentException(a3.e.k("Invalid url: ", str), e9);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x00a7, code lost:
    
        if (((vb.t) vb.t.f19316d.get(r0)) != null) goto L21;
     */
    /* JADX WARN: Removed duplicated region for block: B:16:0x00af  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x010a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final wb.h a(wb.h hVar) {
        int type;
        int subtype;
        HashMap hashMap;
        NetworkInfo activeNetworkInfo = this.f18823b.getActiveNetworkInfo();
        w c6 = hVar.c();
        int i5 = Build.VERSION.SDK_INT;
        HashMap hashMap2 = (HashMap) c6.f1146x;
        if (hashMap2 == null) {
            throw new IllegalStateException("Property \"autoMetadata\" has not been set");
        }
        hashMap2.put("sdk-version", String.valueOf(i5));
        c6.h("model", Build.MODEL);
        c6.h("hardware", Build.HARDWARE);
        c6.h("device", Build.DEVICE);
        c6.h("product", Build.PRODUCT);
        c6.h("os-uild", Build.ID);
        c6.h("manufacturer", Build.MANUFACTURER);
        c6.h("fingerprint", Build.FINGERPRINT);
        Calendar.getInstance();
        long offset = TimeZone.getDefault().getOffset(Calendar.getInstance().getTimeInMillis()) / 1000;
        HashMap hashMap3 = (HashMap) c6.f1146x;
        if (hashMap3 == null) {
            throw new IllegalStateException("Property \"autoMetadata\" has not been set");
        }
        hashMap3.put("tz-offset", String.valueOf(offset));
        int i6 = -1;
        if (activeNetworkInfo == null) {
            SparseArray sparseArray = u.f19318d;
            type = -1;
        } else {
            type = activeNetworkInfo.getType();
        }
        HashMap hashMap4 = (HashMap) c6.f1146x;
        if (hashMap4 == null) {
            throw new IllegalStateException("Property \"autoMetadata\" has not been set");
        }
        hashMap4.put("net-type", String.valueOf(type));
        if (activeNetworkInfo != null) {
            subtype = activeNetworkInfo.getSubtype();
            if (subtype == -1) {
                SparseArray sparseArray2 = t.f19316d;
                subtype = 100;
            }
            hashMap = (HashMap) c6.f1146x;
            if (hashMap != null) {
                throw new IllegalStateException("Property \"autoMetadata\" has not been set");
            }
            hashMap.put("mobile-subtype", String.valueOf(subtype));
            c6.h(AdRevenueScheme.COUNTRY, Locale.getDefault().getCountry());
            c6.h("locale", Locale.getDefault().getLanguage());
            Context context = this.f18824c;
            c6.h("mcc_mnc", ((TelephonyManager) context.getSystemService("phone")).getSimOperator());
            try {
                i6 = context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode;
            } catch (PackageManager.NameNotFoundException e9) {
                io.sentry.config.a.m("CctTransportBackend", "Unable to find version code for package", e9);
            }
            c6.h("application_build", Integer.toString(i6));
            return c6.p();
        }
        SparseArray sparseArray3 = t.f19316d;
        subtype = 0;
        hashMap = (HashMap) c6.f1146x;
        if (hashMap != null) {
        }
    }
}
