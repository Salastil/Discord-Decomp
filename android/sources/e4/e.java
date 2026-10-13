package e4;

import a5.k0;
import ad.g0;
import android.content.ComponentName;
import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.util.Log;
import android.view.KeyEvent;
import android.view.ViewGroup;
import android.widget.ScrollView;
import androidx.core.widget.NestedScrollView;
import androidx.work.impl.WorkDatabase;
import com.facebook.common.references.CloseableReference;
import com.facebook.soloader.b0;
import com.facebook.soloader.v;
import com.google.android.exoplayer2.Format;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import di.a0;
import et.y;
import hc.f0;
import ie.m0;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.net.MalformedURLException;
import java.net.URI;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Properties;
import java.util.concurrent.atomic.AtomicBoolean;
import ke.d0;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.ByteString;
import rd.u;
import th.s0;
import th.s1;
import th.u0;
import th.v0;

/* loaded from: classes.dex */
public class e implements OnCompleteListener, uq.f, wd.e, s8.c, io.sentry.internal.debugmeta.a, lb.c, m0, u0, uh.g, di.o {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7942d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7943e;

    /* renamed from: i, reason: collision with root package name */
    public Object f7944i;

    public /* synthetic */ e(int i5, Object obj, Object obj2) {
        this.f7942d = i5;
        this.f7943e = obj;
        this.f7944i = obj2;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x003a A[Catch: IOException -> 0x006f, TryCatch #0 {IOException -> 0x006f, blocks: (B:2:0x0000, B:3:0x000a, B:5:0x000d, B:7:0x001e, B:9:0x0026, B:13:0x0042, B:15:0x003a, B:16:0x003d, B:27:0x0047, B:29:0x004a, B:32:0x005b), top: B:1:0x0000 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static e x(String... strArr) {
        String str;
        try {
            ByteString[] byteStringArr = new ByteString[strArr.length];
            Buffer buffer = new Buffer();
            for (int i5 = 0; i5 < strArr.length; i5++) {
                String str2 = strArr[i5];
                String[] strArr2 = w4.a.f19679w;
                buffer.U(34);
                int length = str2.length();
                int i6 = 0;
                for (int i10 = 0; i10 < length; i10++) {
                    char charAt = str2.charAt(i10);
                    if (charAt < 128) {
                        str = strArr2[charAt];
                        if (str == null) {
                        }
                        if (i6 < i10) {
                            buffer.j0(i6, i10, str2);
                        }
                        buffer.l0(str);
                        i6 = i10 + 1;
                    } else {
                        if (charAt == 8232) {
                            str = "\\u2028";
                        } else if (charAt == 8233) {
                            str = "\\u2029";
                        }
                        if (i6 < i10) {
                        }
                        buffer.l0(str);
                        i6 = i10 + 1;
                    }
                }
                if (i6 < length) {
                    buffer.j0(i6, length, str2);
                }
                buffer.U(34);
                buffer.readByte();
                byteStringArr[i5] = buffer.m(buffer.f16114e);
            }
            String[] strArr3 = (String[]) strArr.clone();
            int i11 = et.o.f8260v;
            return new e(25, strArr3, y.h(byteStringArr));
        } catch (IOException e9) {
            throw new AssertionError(e9);
        }
    }

    @Override // wd.e
    public int A() {
        return ((long[]) this.f7944i).length;
    }

    @Override // th.u0
    public Object a() {
        switch (this.f7942d) {
            case 22:
                v0 v0Var = (v0) this.f7943e;
                List list = (List) this.f7944i;
                HashMap hashMap = new HashMap();
                for (s0 s0Var : v0Var.f18600c.values()) {
                    String str = s0Var.f18571c.a;
                    if (list.contains(str)) {
                        s0 s0Var2 = (s0) hashMap.get(str);
                        if ((s0Var2 == null ? -1 : s0Var2.a) < s0Var.a) {
                            hashMap.put(str, s0Var);
                        }
                    }
                }
                return hashMap;
            case 23:
                Object a = ((uh.f) this.f7943e).a();
                Context context = ((di.p) ((u) this.f7944i).f17275e).f7601d;
                s1 s1Var = (s1) a;
                zk.a.b(context.getPackageManager(), new ComponentName(context.getPackageName(), "com.google.android.play.core.assetpacks.AssetPackExtractionService"));
                zk.a.b(context.getPackageManager(), new ComponentName(context.getPackageName(), "com.google.android.play.core.assetpacks.ExtractionForegroundService"));
                k0.c(s1Var);
                return s1Var;
            default:
                return new xh.g(((di.p) this.f7943e).f7601d, (a0) ((di.n) this.f7944i).a(), new j8.b(21, (byte) 0));
        }
    }

    @Override // uq.f
    public uq.e b(hq.b classId) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        ha.l lVar = (ha.l) this.f7943e;
        aq.f fVar = (aq.f) this.f7944i;
        fVar.c().f19017c.getClass();
        np.b o6 = io.sentry.config.a.o(lVar, classId, eq.f.f8216g);
        if (o6 == null) {
            return null;
        }
        Intrinsics.areEqual(op.c.a(o6.a), classId);
        return fVar.g(o6);
    }

    public e c(e eVar) {
        pj.a aVar = (pj.a) this.f7943e;
        if (!aVar.equals((pj.a) eVar.f7943e)) {
            throw new IllegalArgumentException("GenericGFPolys do not have same GenericGF field");
        }
        if (v()) {
            return eVar;
        }
        if (eVar.v()) {
            return this;
        }
        int[] iArr = (int[]) this.f7944i;
        int[] iArr2 = (int[]) eVar.f7944i;
        if (iArr.length <= iArr2.length) {
            iArr = iArr2;
            iArr2 = iArr;
        }
        int[] iArr3 = new int[iArr.length];
        int length = iArr.length - iArr2.length;
        System.arraycopy(iArr, 0, iArr3, 0, length);
        for (int i5 = length; i5 < iArr.length; i5++) {
            iArr3[i5] = iArr2[i5 - length] ^ iArr[i5];
        }
        return new e(aVar, iArr3);
    }

    @Override // wd.e
    public int d(long j) {
        long[] jArr = (long[]) this.f7944i;
        int b10 = d0.b(jArr, j, false);
        if (b10 < jArr.length) {
            return b10;
        }
        return -1;
    }

    @Override // lb.c
    public boolean e(UnsatisfiedLinkError unsatisfiedLinkError, b0[] b0VarArr) {
        String str = ((Context) this.f7943e).getApplicationInfo().sourceDir;
        if (!new File(str).exists()) {
            StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Base apk does not exist: ", str, ". ");
            ((a5.a0) this.f7944i).D(m5);
            throw new v(m5.toString(), unsatisfiedLinkError);
        }
        Log.w("soloader.recovery.CheckBaseApkExists", "Base apk exists: " + str);
        return false;
    }

    @Override // ie.m0
    public Object f(Uri uri, ie.n nVar) {
        md.a aVar = (md.a) ((m0) this.f7943e).f(uri, nVar);
        List list = (List) this.f7944i;
        return (list == null || list.isEmpty()) ? aVar : (md.a) aVar.a(list);
    }

    public void g(qc.l lVar, g0 g0Var) {
        qc.v[] vVarArr = (qc.v[]) this.f7944i;
        for (int i5 = 0; i5 < vVarArr.length; i5++) {
            g0Var.a();
            g0Var.b();
            qc.v y5 = lVar.y(g0Var.f367d, 3);
            Format format = (Format) ((List) this.f7943e).get(i5);
            String str = format.I;
            ke.b.f("Invalid closed caption MIME type provided: " + str, "application/cea-608".equals(str) || "application/cea-708".equals(str));
            String str2 = format.f5225d;
            if (str2 == null) {
                g0Var.b();
                str2 = g0Var.f368e;
            }
            f0 f0Var = new f0();
            f0Var.a = str2;
            f0Var.k = str;
            f0Var.f9672d = format.f5230v;
            f0Var.f9671c = format.f5229i;
            f0Var.C = format.a0;
            f0Var.f9679m = format.K;
            y5.e(new Format(f0Var));
            vVarArr[i5] = y5;
        }
    }

    public int h(int i5) {
        int[] iArr = (int[]) this.f7944i;
        if (i5 == 0) {
            return m(0);
        }
        if (i5 != 1) {
            int i6 = iArr[0];
            int length = iArr.length;
            for (int i10 = 1; i10 < length; i10++) {
                i6 = ((pj.a) this.f7943e).b(i5, i6) ^ iArr[i10];
            }
            return i6;
        }
        int i11 = 0;
        for (int i12 : iArr) {
            pj.a aVar = pj.a.f16398h;
            i11 ^= i12;
        }
        return i11;
    }

    @Override // wd.e
    public long i(int i5) {
        long[] jArr = (long[]) this.f7944i;
        ke.b.g(i5 >= 0);
        ke.b.g(i5 < jArr.length);
        return jArr[i5];
    }

    public ViewGroup j(ViewGroup view) {
        ViewGroup viewGroup;
        ViewGroup b10;
        Intrinsics.checkNotNullParameter(view, "owner");
        ViewGroup viewGroup2 = (ViewGroup) ((WeakReference) this.f7944i).get();
        if (viewGroup2 != null) {
            return viewGroup2;
        }
        sm.a aVar = (sm.a) ((WeakReference) this.f7943e).get();
        if (aVar != null && (b10 = aVar.b()) != null) {
            return b10;
        }
        Intrinsics.checkNotNullParameter(view, "view");
        KeyEvent.Callback callback = view;
        while (callback != null) {
            if (!(callback instanceof ScrollView) && !(callback instanceof NestedScrollView)) {
                if (!(callback instanceof ViewGroup)) {
                    break;
                }
                ViewGroup viewGroup3 = (ViewGroup) callback;
                if (viewGroup3.getChildCount() == 0) {
                    break;
                }
                callback = viewGroup3.getChildAt(0);
            } else {
                viewGroup = (ViewGroup) callback;
                break;
            }
        }
        viewGroup = null;
        if (viewGroup != null) {
            return viewGroup;
        }
        return null;
    }

    public nj.b k() {
        if (((nj.b) this.f7944i) == null) {
            nj.d dVar = (nj.d) this.f7943e;
            int[] iArr = dVar.f15521c;
            nj.b bVar = dVar.f15522d;
            if (bVar == null) {
                eq.d dVar2 = dVar.a;
                int i5 = dVar2.f8191b;
                int i6 = dVar2.f8192c;
                boolean z5 = true;
                int i10 = 0;
                if (i5 < 40 || i6 < 40) {
                    nj.b bVar2 = new nj.b(i5, i6);
                    if (dVar.f15520b.length < i5) {
                        dVar.f15520b = new byte[i5];
                    }
                    for (int i11 = 0; i11 < 32; i11++) {
                        iArr[i11] = 0;
                    }
                    for (int i12 = 1; i12 < 5; i12++) {
                        byte[] d6 = dVar2.d(dVar.f15520b, (i6 * i12) / 5);
                        int i13 = (i5 << 2) / 5;
                        for (int i14 = i5 / 5; i14 < i13; i14++) {
                            int i15 = (d6[i14] & 255) >> 3;
                            iArr[i15] = iArr[i15] + 1;
                        }
                    }
                    int a = nj.d.a(iArr);
                    byte[] c6 = dVar2.c();
                    for (int i16 = 0; i16 < i6; i16++) {
                        int i17 = i16 * i5;
                        for (int i18 = 0; i18 < i5; i18++) {
                            if ((c6[i17 + i18] & 255) < a) {
                                bVar2.f(i18, i16);
                            }
                        }
                    }
                    dVar.f15522d = bVar2;
                } else {
                    byte[] c8 = dVar2.c();
                    int i19 = i5 >> 3;
                    if ((i5 & 7) != 0) {
                        i19++;
                    }
                    int i20 = i6 >> 3;
                    if ((i6 & 7) != 0) {
                        i20++;
                    }
                    int i21 = i6 - 8;
                    int i22 = i5 - 8;
                    int i23 = 2;
                    int[][] iArr2 = (int[][]) Array.newInstance((Class<?>) Integer.TYPE, i20, i19);
                    int i24 = 0;
                    while (true) {
                        int i25 = 8;
                        if (i24 >= i20) {
                            break;
                        }
                        boolean z6 = z5;
                        int i26 = i24 << 3;
                        if (i26 > i21) {
                            i26 = i21;
                        }
                        int i27 = i10;
                        while (i10 < i19) {
                            int i28 = i23;
                            int i29 = i10 << 3;
                            if (i29 > i22) {
                                i29 = i22;
                            }
                            int i30 = (i26 * i5) + i29;
                            int i31 = i27;
                            int i32 = i31;
                            int i33 = i32;
                            int i34 = 255;
                            while (i31 < i25) {
                                byte[] bArr = c8;
                                int i35 = i26;
                                int i36 = i27;
                                int i37 = i33;
                                int i38 = i34;
                                while (i36 < i25) {
                                    int i39 = i36;
                                    int i40 = bArr[i30 + i36] & 255;
                                    i32 += i40;
                                    if (i40 < i38) {
                                        i38 = i40;
                                    }
                                    if (i40 > i37) {
                                        i37 = i40;
                                    }
                                    i36 = i39 + 1;
                                    i25 = 8;
                                }
                                if (i37 - i38 > 24) {
                                    while (true) {
                                        i31++;
                                        i30 += i5;
                                        if (i31 < 8) {
                                            int i41 = i27;
                                            for (int i42 = 8; i41 < i42; i42 = 8) {
                                                i32 += bArr[i30 + i41] & 255;
                                                i41++;
                                                i38 = i38;
                                            }
                                        }
                                    }
                                }
                                i31++;
                                i30 += i5;
                                i34 = i38;
                                c8 = bArr;
                                i26 = i35;
                                i25 = 8;
                                i33 = i37;
                            }
                            byte[] bArr2 = c8;
                            int i43 = i26;
                            int i44 = i32 >> 6;
                            int i45 = i34;
                            if (i33 - i45 <= 24) {
                                i44 = i45 / 2;
                                if (i24 > 0 && i10 > 0) {
                                    int[] iArr3 = iArr2[i24 - 1];
                                    int i46 = i10 - 1;
                                    int i47 = (((iArr2[i24][i46] * 2) + iArr3[i10]) + iArr3[i46]) / 4;
                                    if (i45 < i47) {
                                        i44 = i47;
                                    }
                                }
                            }
                            iArr2[i24][i10] = i44;
                            i10++;
                            i23 = i28;
                            c8 = bArr2;
                            i26 = i43;
                            i25 = 8;
                        }
                        i24++;
                        z5 = z6;
                        i10 = i27;
                    }
                    byte[] bArr3 = c8;
                    int i48 = i10;
                    int i49 = i23;
                    nj.b bVar3 = new nj.b(i5, i6);
                    int i50 = i48;
                    while (i50 < i20) {
                        int i51 = i50 << 3;
                        if (i51 > i21) {
                            i51 = i21;
                        }
                        int i52 = i20 - 3;
                        if (i50 < i49) {
                            i52 = 2;
                        } else if (i50 <= i52) {
                            i52 = i50;
                        }
                        int i53 = i48;
                        while (i53 < i19) {
                            int i54 = i53 << 3;
                            if (i54 > i22) {
                                i54 = i22;
                            }
                            int i55 = i19 - 3;
                            if (i53 < 2) {
                                i55 = 2;
                            } else if (i53 <= i55) {
                                i55 = i53;
                            }
                            int i56 = i19;
                            int i57 = -2;
                            int i58 = i48;
                            for (int i59 = 2; i57 <= i59; i59 = 2) {
                                int[] iArr4 = iArr2[i52 + i57];
                                i58 = iArr4[i55 - 2] + iArr4[i55 - 1] + iArr4[i55] + iArr4[i55 + 1] + iArr4[i55 + 2] + i58;
                                i57++;
                            }
                            int i60 = i58 / 25;
                            int i61 = (i51 * i5) + i54;
                            int i62 = i50;
                            int i63 = i48;
                            while (true) {
                                if (i63 < 8) {
                                    int i64 = i51;
                                    int i65 = i48;
                                    for (int i66 = 8; i65 < i66; i66 = 8) {
                                        int i67 = i65;
                                        if ((bArr3[i61 + i65] & 255) <= i60) {
                                            bVar3.f(i54 + i67, i64 + i63);
                                        }
                                        i65 = i67 + 1;
                                    }
                                    i63++;
                                    i61 += i5;
                                    i51 = i64;
                                }
                            }
                            i53++;
                            i50 = i62;
                            i19 = i56;
                        }
                        i49 = 2;
                        i50++;
                    }
                    dVar.f15522d = bVar3;
                }
                bVar = dVar.f15522d;
            }
            this.f7944i = bVar;
        }
        return (nj.b) this.f7944i;
    }

    public nj.a l(nj.a aVar, int i5) {
        nj.d dVar = (nj.d) this.f7943e;
        int[] iArr = dVar.f15521c;
        eq.d dVar2 = dVar.a;
        int i6 = dVar2.f8191b;
        if (aVar.f15509e < i6) {
            aVar = new nj.a(i6);
        } else {
            int length = aVar.f15508d.length;
            for (int i10 = 0; i10 < length; i10++) {
                aVar.f15508d[i10] = 0;
            }
        }
        if (dVar.f15520b.length < i6) {
            dVar.f15520b = new byte[i6];
        }
        for (int i11 = 0; i11 < 32; i11++) {
            iArr[i11] = 0;
        }
        byte[] d6 = dVar2.d(dVar.f15520b, i5);
        for (int i12 = 0; i12 < i6; i12++) {
            int i13 = (d6[i12] & 255) >> 3;
            iArr[i13] = iArr[i13] + 1;
        }
        int a = nj.d.a(iArr);
        if (i6 < 3) {
            for (int i14 = 0; i14 < i6; i14++) {
                if ((d6[i14] & 255) < a) {
                    aVar.f(i14);
                }
            }
        } else {
            int i15 = d6[0] & 255;
            int i16 = d6[1] & 255;
            int i17 = 1;
            while (i17 < i6 - 1) {
                int i18 = i17 + 1;
                int i19 = d6[i18] & 255;
                if ((((i16 << 2) - i15) - i19) / 2 < a) {
                    aVar.f(i17);
                }
                i15 = i16;
                i17 = i18;
                i16 = i19;
            }
        }
        return aVar;
    }

    public int m(int i5) {
        return ((int[]) this.f7944i)[(r0.length - 1) - i5];
    }

    public int n() {
        return ((int[]) this.f7944i).length - 1;
    }

    public qc.j o(Object... objArr) {
        Constructor c6;
        synchronized (((AtomicBoolean) this.f7944i)) {
            if (!((AtomicBoolean) this.f7944i).get()) {
                try {
                    c6 = ((n1.k) this.f7943e).c();
                } catch (ClassNotFoundException unused) {
                    ((AtomicBoolean) this.f7944i).set(true);
                } catch (Exception e9) {
                    throw new RuntimeException("Error instantiating extension", e9);
                }
            }
            c6 = null;
        }
        if (c6 == null) {
            return null;
        }
        try {
            return (qc.j) c6.newInstance(objArr);
        } catch (Exception e10) {
            throw new IllegalStateException("Unexpected error creating extractor", e10);
        }
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public void onComplete(Task task) {
        switch (this.f7942d) {
            case 3:
                ai.j jVar = (ai.j) this.f7943e;
                jg.g gVar = (jg.g) this.f7944i;
                synchronized (jVar.f628f) {
                    jVar.f627e.remove(gVar);
                }
                return;
            default:
                dg.g gVar2 = (dg.g) this.f7943e;
                jg.g gVar3 = (jg.g) this.f7944i;
                synchronized (gVar2.f7554f) {
                    gVar2.f7553e.remove(gVar3);
                }
                return;
        }
    }

    @Override // io.sentry.internal.debugmeta.a
    public List p() {
        ILogger iLogger = (ILogger) this.f7944i;
        try {
            BufferedInputStream bufferedInputStream = new BufferedInputStream(((Context) this.f7943e).getAssets().open("sentry-debug-meta.properties"));
            try {
                Properties properties = new Properties();
                properties.load(bufferedInputStream);
                List singletonList = Collections.singletonList(properties);
                bufferedInputStream.close();
                return singletonList;
            } catch (Throwable th2) {
                try {
                    bufferedInputStream.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        } catch (FileNotFoundException unused) {
            iLogger.u(SentryLevel.INFO, "%s file was not found.", "sentry-debug-meta.properties");
            return null;
        } catch (IOException e9) {
            iLogger.k(SentryLevel.ERROR, "Error getting Proguard UUIDs.", e9);
            return null;
        } catch (RuntimeException e10) {
            iLogger.i(SentryLevel.ERROR, e10, "%s file is malformed.", "sentry-debug-meta.properties");
            return null;
        }
    }

    @Override // wd.e
    public List q(long j) {
        wd.b bVar;
        int e9 = d0.e((long[]) this.f7944i, j, false);
        return (e9 == -1 || (bVar = ((wd.b[]) this.f7943e)[e9]) == wd.b.O) ? Collections.EMPTY_LIST : Collections.singletonList(bVar);
    }

    public Long r(String str) {
        WorkDatabase workDatabase = (WorkDatabase) this.f7943e;
        a3.o g6 = a3.o.g(1, "SELECT long_value FROM Preference where `key`=?");
        g6.n(1, str);
        workDatabase.b();
        Cursor D = nt.a.D(workDatabase, g6);
        try {
            Long l6 = null;
            if (D.moveToFirst() && !D.isNull(0)) {
                l6 = Long.valueOf(D.getLong(0));
            }
            return l6;
        } finally {
            D.close();
            g6.i();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x003d  */
    @Override // s8.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void release(Object obj) {
        boolean z5;
        u4.b bVar;
        ha.h hVar = (ha.h) this.f7944i;
        ha.d dVar = (ha.d) this.f7943e;
        synchronized (hVar) {
            synchronized (hVar) {
                z5 = false;
                o8.h.e(dVar.f9602c > 0);
                dVar.f9602c--;
            }
            CloseableReference.l(hVar.g(dVar));
            if (!z5) {
                dVar = null;
            }
            if (dVar != null && (bVar = dVar.f9604e) != null) {
                bVar.m(dVar.a, true);
            }
            hVar.e();
            hVar.c();
        }
        synchronized (hVar) {
            try {
                if (!dVar.f9603d && dVar.f9602c == 0) {
                    hVar.f9605d.d(dVar.a, dVar);
                    z5 = true;
                }
            } finally {
            }
        }
        CloseableReference.l(hVar.g(dVar));
        if (!z5) {
        }
        if (dVar != null) {
            bVar.m(dVar.a, true);
        }
        hVar.e();
        hVar.c();
    }

    public Object s(lh.v vVar) {
        return (l4.g0) this.f7944i;
    }

    public Object t(float f2, float f10, Object obj, Object obj2, float f11, float f12, float f13) {
        lh.v vVar = (lh.v) this.f7943e;
        vVar.a = f2;
        vVar.f14041b = f10;
        vVar.f14045f = obj;
        vVar.f14046g = obj2;
        vVar.f14042c = f11;
        vVar.f14043d = f12;
        vVar.f14044e = f13;
        return s(vVar);
    }

    public String toString() {
        switch (this.f7942d) {
            case 14:
                try {
                    return k().toString();
                } catch (jj.g unused) {
                    return "";
                }
            case 18:
                StringBuilder sb2 = new StringBuilder(n() * 8);
                for (int n6 = n(); n6 >= 0; n6--) {
                    int m5 = m(n6);
                    if (m5 != 0) {
                        if (m5 < 0) {
                            sb2.append(" - ");
                            m5 = -m5;
                        } else if (sb2.length() > 0) {
                            sb2.append(" + ");
                        }
                        if (n6 == 0 || m5 != 1) {
                            pj.a aVar = (pj.a) this.f7943e;
                            if (m5 == 0) {
                                aVar.getClass();
                                throw new IllegalArgumentException();
                            }
                            int i5 = aVar.f16404b[m5];
                            if (i5 == 0) {
                                sb2.append('1');
                            } else if (i5 == 1) {
                                sb2.append('a');
                            } else {
                                sb2.append("a^");
                                sb2.append(i5);
                            }
                        }
                        if (n6 != 0) {
                            if (n6 == 1) {
                                sb2.append('x');
                            } else {
                                sb2.append("x^");
                                sb2.append(n6);
                            }
                        }
                    }
                }
                return sb2.toString();
            default:
                return super.toString();
        }
    }

    public void u(d dVar) {
        WorkDatabase workDatabase = (WorkDatabase) this.f7943e;
        workDatabase.b();
        workDatabase.c();
        try {
            ((b) this.f7944i).g(dVar);
            workDatabase.o();
        } finally {
            workDatabase.k();
        }
    }

    public boolean v() {
        return ((int[]) this.f7944i)[0] == 0;
    }

    public e w(int i5) {
        int[] iArr = (int[]) this.f7944i;
        pj.a aVar = (pj.a) this.f7943e;
        if (i5 == 0) {
            return aVar.f16405c;
        }
        if (i5 == 1) {
            return this;
        }
        int length = iArr.length;
        int[] iArr2 = new int[length];
        for (int i6 = 0; i6 < length; i6++) {
            iArr2[i6] = aVar.b(iArr[i6], i5);
        }
        return new e(aVar, iArr2);
    }

    public void y(i1.e eVar) {
        af.n nVar = (af.n) this.f7944i;
        u4.b bVar = (u4.b) this.f7943e;
        int i5 = eVar.f10449b;
        if (i5 != 0) {
            nVar.execute(new af.p(i5, 4, bVar));
        } else {
            nVar.execute(new com.google.android.gms.internal.play_billing.v0(12, bVar, eVar.a));
        }
    }

    public /* synthetic */ e(int i5, boolean z5) {
        this.f7942d = i5;
    }

    public e(di.p pVar, di.n nVar, wi.d dVar) {
        this.f7942d = 26;
        this.f7943e = pVar;
        this.f7944i = nVar;
    }

    public e(String str, nt.a aVar, ze.d dVar) {
        this.f7942d = 28;
        this.f7944i = str;
        this.f7943e = aVar;
    }

    public e(int i5) {
        this.f7942d = i5;
        switch (i5) {
            case 24:
                List list = Collections.EMPTY_LIST;
                this.f7943e = list;
                this.f7944i = list;
                break;
            case 27:
                this.f7943e = new lh.v();
                this.f7944i = null;
                break;
            default:
                this.f7943e = new WeakReference(null);
                this.f7944i = new WeakReference(null);
                break;
        }
    }

    public e(String str, HashMap hashMap) {
        this.f7942d = 12;
        d9.a.L(str, "url is required");
        try {
            this.f7943e = URI.create(str).toURL();
            this.f7944i = hashMap;
        } catch (MalformedURLException e9) {
            throw new IllegalArgumentException("Failed to compose the Sentry's server URL.", e9);
        }
    }

    public e(aq.f deserializedDescriptorResolver, ha.l kotlinClassFinder) {
        this.f7942d = 4;
        Intrinsics.checkNotNullParameter(kotlinClassFinder, "kotlinClassFinder");
        Intrinsics.checkNotNullParameter(deserializedDescriptorResolver, "deserializedDescriptorResolver");
        this.f7943e = kotlinClassFinder;
        this.f7944i = deserializedDescriptorResolver;
    }

    public e(Context context, ILogger iLogger) {
        this.f7942d = 13;
        Context applicationContext = context.getApplicationContext();
        this.f7943e = applicationContext != null ? applicationContext : context;
        this.f7944i = iLogger;
    }

    public e(WorkDatabase workDatabase) {
        this.f7942d = 0;
        this.f7943e = workDatabase;
        this.f7944i = new b(workDatabase);
    }

    public e(nj.d dVar) {
        this.f7942d = 14;
        this.f7943e = dVar;
    }

    public e(l4.g0 g0Var) {
        this.f7942d = 27;
        this.f7943e = new lh.v();
        this.f7944i = g0Var;
    }

    public e(pj.a aVar, int[] iArr) {
        this.f7942d = 18;
        if (iArr.length != 0) {
            this.f7943e = aVar;
            int length = iArr.length;
            int i5 = 1;
            if (length > 1 && iArr[0] == 0) {
                while (i5 < length && iArr[i5] == 0) {
                    i5++;
                }
                if (i5 == length) {
                    this.f7944i = new int[]{0};
                    return;
                }
                int i6 = length - i5;
                int[] iArr2 = new int[i6];
                this.f7944i = iArr2;
                System.arraycopy(iArr, i5, iArr2, 0, i6);
                return;
            }
            this.f7944i = iArr;
            return;
        }
        throw new IllegalArgumentException();
    }

    public e(List list) {
        this.f7942d = 2;
        this.f7943e = list;
        this.f7944i = new qc.v[list.size()];
    }

    public e(ha.h hVar, ha.d dVar) {
        this.f7942d = 10;
        this.f7944i = hVar;
        this.f7943e = dVar;
    }

    public e(ArrayList parameters, Class cls) {
        this.f7942d = 7;
        Intrinsics.checkNotNullParameter(parameters, "parameters");
        this.f7943e = parameters;
        this.f7944i = cls;
    }

    public e(n1.k kVar) {
        this.f7942d = 19;
        this.f7943e = kVar;
        this.f7944i = new AtomicBoolean(false);
    }
}
