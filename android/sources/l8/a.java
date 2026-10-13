package l8;

import a3.j;
import a5.k0;
import af.i;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.os.Parcel;
import di.o;
import ie.l0;
import io.sentry.internal.debugmeta.c;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.Enumeration;
import java.util.HashSet;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicReference;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;
import k2.r;
import kotlin.jvm.internal.Intrinsics;
import ks.l;
import net.time4j.w0;
import okhttp3.internal.publicsuffix.PublicSuffixDatabase;
import t2.b;
import uh.g;
import wf.d;
import wf.e;

/* loaded from: classes3.dex */
public final class a implements b, fc.a, g5.b, l0, jb.b, g, i, tm.a, o {

    /* renamed from: e, reason: collision with root package name */
    public static a f13839e;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13840d;

    public /* synthetic */ a(int i5) {
        this.f13840d = i5;
    }

    public static final String g(byte[] bArr, byte[][] bArr2, int i5) {
        int i6;
        boolean z5;
        int i10;
        int i11;
        byte[] bArr3 = PublicSuffixDatabase.f16107e;
        int length = bArr.length;
        int i12 = 0;
        while (i12 < length) {
            int i13 = (i12 + length) / 2;
            while (i13 > -1 && bArr[i13] != 10) {
                i13--;
            }
            int i14 = i13 + 1;
            int i15 = 1;
            while (true) {
                i6 = i14 + i15;
                if (bArr[i6] == 10) {
                    break;
                }
                i15++;
            }
            int i16 = i6 - i14;
            int i17 = i5;
            boolean z6 = false;
            int i18 = 0;
            int i19 = 0;
            while (true) {
                if (z6) {
                    i10 = 46;
                    z5 = false;
                } else {
                    byte b10 = bArr2[i17][i18];
                    byte[] bArr4 = qs.b.a;
                    int i20 = b10 & 255;
                    z5 = z6;
                    i10 = i20;
                }
                byte b11 = bArr[i14 + i19];
                byte[] bArr5 = qs.b.a;
                i11 = i10 - (b11 & 255);
                if (i11 != 0) {
                    break;
                }
                i19++;
                i18++;
                if (i19 == i16) {
                    break;
                }
                if (bArr2[i17].length != i18) {
                    z6 = z5;
                } else {
                    if (i17 == bArr2.length - 1) {
                        break;
                    }
                    i17++;
                    i18 = -1;
                    z6 = true;
                }
            }
            if (i11 >= 0) {
                if (i11 <= 0) {
                    int i21 = i16 - i19;
                    int length2 = bArr2[i17].length - i18;
                    int length3 = bArr2.length;
                    for (int i22 = i17 + 1; i22 < length3; i22++) {
                        length2 += bArr2[i22].length;
                    }
                    if (length2 >= i21) {
                        if (length2 <= i21) {
                            Charset UTF_8 = StandardCharsets.UTF_8;
                            Intrinsics.checkNotNullExpressionValue(UTF_8, "UTF_8");
                            return new String(bArr, i14, i16, UTF_8);
                        }
                    }
                }
                i12 = i6 + 1;
            }
            length = i13;
        }
        return null;
    }

    public static void h(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException unused) {
            }
        }
    }

    public static c i(Context context, String[] strArr, String str) {
        String[] m5 = m(context);
        int length = m5.length;
        int i5 = 0;
        while (true) {
            ZipFile zipFile = null;
            if (i5 >= length) {
                return null;
            }
            String str2 = m5[i5];
            int i6 = 0;
            while (true) {
                int i10 = i6 + 1;
                if (i6 >= 5) {
                    break;
                }
                try {
                    zipFile = new ZipFile(new File(str2), 1);
                    break;
                } catch (IOException unused) {
                    i6 = i10;
                }
            }
            if (zipFile != null) {
                int i11 = 0;
                while (true) {
                    int i12 = i11 + 1;
                    if (i11 < 5) {
                        for (String str3 : strArr) {
                            StringBuilder sb2 = new StringBuilder("lib");
                            char c6 = File.separatorChar;
                            sb2.append(c6);
                            sb2.append(str3);
                            sb2.append(c6);
                            sb2.append(str);
                            String sb3 = sb2.toString();
                            r.C("Looking for %s in APK %s...", sb3, str2);
                            ZipEntry entry = zipFile.getEntry(sb3);
                            if (entry != null) {
                                c cVar = new c(17, false);
                                cVar.f11622e = zipFile;
                                cVar.f11623i = entry;
                                return cVar;
                            }
                        }
                        i11 = i12;
                    } else {
                        try {
                            zipFile.close();
                            break;
                        } catch (IOException unused2) {
                        }
                    }
                }
            }
            i5++;
        }
    }

    public static String[] k(Context context, String str) {
        StringBuilder sb2 = new StringBuilder("lib");
        char c6 = File.separatorChar;
        sb2.append(c6);
        sb2.append("([^\\");
        sb2.append(c6);
        sb2.append("]*)");
        sb2.append(c6);
        sb2.append(str);
        Pattern compile = Pattern.compile(sb2.toString());
        HashSet hashSet = new HashSet();
        for (String str2 : m(context)) {
            try {
                Enumeration<? extends ZipEntry> entries = new ZipFile(new File(str2), 1).entries();
                while (entries.hasMoreElements()) {
                    Matcher matcher = compile.matcher(entries.nextElement().getName());
                    if (matcher.matches()) {
                        hashSet.add(matcher.group(1));
                    }
                }
            } catch (IOException unused) {
            }
        }
        return (String[]) hashSet.toArray(new String[hashSet.size()]);
    }

    public static String[] m(Context context) {
        ApplicationInfo applicationInfo = context.getApplicationInfo();
        String[] strArr = applicationInfo.splitSourceDirs;
        if (strArr == null || strArr.length == 0) {
            return new String[]{applicationInfo.sourceDir};
        }
        String[] strArr2 = new String[strArr.length + 1];
        strArr2[0] = applicationInfo.sourceDir;
        System.arraycopy(strArr, 0, strArr2, 1, strArr.length);
        return strArr2;
    }

    @Override // uh.g
    public Object a() {
        switch (this.f13840d) {
            case 18:
                ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor(new i1.i(2));
                k0.c(newSingleThreadExecutor);
                return newSingleThreadExecutor;
            default:
                return new j8.b(21, (byte) 0);
        }
    }

    @Override // af.i
    public void accept(Object obj, Object obj2) {
        d dVar = (d) ((e) obj).o();
        j jVar = new j((jg.g) obj2);
        Parcel obtain = Parcel.obtain();
        obtain.writeInterfaceToken("com.google.android.gms.auth.api.phone.internal.ISmsRetrieverApiService");
        int i5 = wf.c.a;
        obtain.writeStrongBinder(jVar);
        Parcel obtain2 = Parcel.obtain();
        try {
            dVar.f19824f.transact(1, obtain, obtain2, 0);
            obtain2.readException();
        } finally {
            obtain.recycle();
            obtain2.recycle();
        }
    }

    @Override // tm.a
    public String d() {
        return "onWillDisappear";
    }

    @Override // fc.a
    public long e() {
        return System.currentTimeMillis();
    }

    @Override // jb.b
    public boolean f(String str) {
        System.loadLibrary(str);
        return true;
    }

    @Override // tm.a
    /* renamed from: getEventName */
    public String getName() {
        return "topWillDisappear";
    }

    public long j() {
        return 365241779741L;
    }

    public void l(int i5, String str) {
        AtomicReference atomicReference = kb.b.a;
        kb.a[] aVarArr = (kb.a[]) atomicReference.get();
        if (aVarArr != null && aVarArr.length > 0) {
            kb.a aVar = aVarArr[0];
            throw null;
        }
        try {
            System.load(str);
            kb.a[] aVarArr2 = (kb.a[]) atomicReference.get();
            if (aVarArr2 == null || aVarArr2.length <= 0) {
                return;
            }
            kb.a aVar2 = aVarArr2[0];
            throw null;
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                kb.a[] aVarArr3 = (kb.a[]) kb.b.a.get();
                if (aVarArr3 == null || aVarArr3.length <= 0) {
                    throw th3;
                }
                kb.a aVar3 = aVarArr3[0];
                throw null;
            }
        }
    }

    public long n(Object obj) {
        w0 w0Var = (w0) obj;
        return l.UTC.b(tn.g.y(w0Var.a(), w0Var.b(), w0Var.c()), l.MODIFIED_JULIAN_DATE);
    }

    public Object o(long j) {
        if (j == -365243219892L) {
            return w0.f15384v;
        }
        if (j == 365241779741L) {
            return w0.f15385w;
        }
        long z5 = tn.g.z(l.MODIFIED_JULIAN_DATE.b(j, l.UTC));
        return w0.z((int) (z5 >> 32), (int) ((z5 >> 16) & 255), (int) (z5 & 255), true);
    }

    public /* synthetic */ a(int i5, Object obj) {
        this.f13840d = i5;
    }

    public a(String name, String description) {
        this.f13840d = 22;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(description, "description");
    }

    @Override // ie.l0
    public void b() {
    }

    @Override // g5.b
    public void c() {
    }
}
