package a3;

import android.content.Context;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffXfermode;
import android.opengl.Matrix;
import android.os.Bundle;
import com.facebook.common.references.CloseableReference;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.internal.play_billing.w1;
import com.google.firebase.messaging.FirebaseMessaging;
import et.y;
import io.sentry.q3;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okio.Sink;
import qa.t;

/* loaded from: classes.dex */
public class f {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public Object f56b;

    /* renamed from: c, reason: collision with root package name */
    public Object f57c;

    /* renamed from: d, reason: collision with root package name */
    public Object f58d;

    public f(int i5, boolean z5) {
        switch (i5) {
            case 7:
                this.f56b = new float[16];
                this.f57c = new float[16];
                this.f58d = new w1();
                break;
            default:
                this.f56b = null;
                this.f57c = q3.AUTO;
                this.a = false;
                this.f58d = "manual";
                break;
        }
    }

    public static float b(int i5, int[] iArr) {
        return ((i5 - iArr[4]) - iArr[3]) - (iArr[2] / 2.0f);
    }

    public static void c(int[] iArr) {
        for (int i5 = 0; i5 < iArr.length; i5++) {
            iArr[i5] = 0;
        }
    }

    public static void e(float[] fArr, float[] fArr2) {
        Matrix.setIdentityM(fArr, 0);
        float f2 = fArr2[10];
        float f10 = fArr2[8];
        float sqrt = (float) Math.sqrt((f10 * f10) + (f2 * f2));
        float f11 = fArr2[10] / sqrt;
        fArr[0] = f11;
        float f12 = fArr2[8];
        fArr[2] = f12 / sqrt;
        fArr[8] = (-f12) / sqrt;
        fArr[10] = f11;
    }

    public static boolean i(int[] iArr) {
        int i5 = 0;
        for (int i6 = 0; i6 < 5; i6++) {
            int i10 = iArr[i6];
            if (i10 == 0) {
                return false;
            }
            i5 += i10;
        }
        if (i5 < 7) {
            return false;
        }
        float f2 = i5 / 7.0f;
        float f10 = f2 / 2.0f;
        return Math.abs(f2 - ((float) iArr[0])) < f10 && Math.abs(f2 - ((float) iArr[1])) < f10 && Math.abs((f2 * 3.0f) - ((float) iArr[2])) < 3.0f * f10 && Math.abs(f2 - ((float) iArr[3])) < f10 && Math.abs(f2 - ((float) iArr[4])) < f10;
    }

    public void a() {
        rs.g gVar = (rs.g) this.f58d;
        synchronized (gVar) {
            try {
                if (this.a) {
                    throw new IllegalStateException("Check failed.");
                }
                if (Intrinsics.areEqual(((rs.d) this.f56b).f17642g, this)) {
                    gVar.f(this, false);
                }
                this.a = true;
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public void d() {
        rs.g gVar = (rs.g) this.f58d;
        synchronized (gVar) {
            try {
                if (this.a) {
                    throw new IllegalStateException("Check failed.");
                }
                if (Intrinsics.areEqual(((rs.d) this.f56b).f17642g, this)) {
                    gVar.f(this, true);
                }
                this.a = true;
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public int f(int i5, int i6, int i10) {
        nj.b bVar = (nj.b) this.f56b;
        return this.a ? bVar.b(i6, i5) : bVar.b(i5, i6) ? (i10 << 1) | 1 : i10 << 1;
    }

    public void g() {
        rs.d dVar = (rs.d) this.f56b;
        if (Intrinsics.areEqual(dVar.f17642g, this)) {
            rs.g gVar = (rs.g) this.f58d;
            if (gVar.H) {
                gVar.f(this, false);
            } else {
                dVar.f17641f = true;
            }
        }
    }

    public void h(Canvas canvas, ba.a aVar) {
        canvas.drawRect(aVar.a, aVar.f2756b, r0 + aVar.f2757c, r1 + aVar.f2758d, (Paint) this.f58d);
    }

    public int[] j() {
        synchronized (this) {
            try {
                if (!this.a) {
                    return null;
                }
                long[] jArr = (long[]) this.f56b;
                int length = jArr.length;
                int i5 = 0;
                int i6 = 0;
                while (i5 < length) {
                    int i10 = i6 + 1;
                    int i11 = 1;
                    boolean z5 = jArr[i5] > 0;
                    boolean[] zArr = (boolean[]) this.f57c;
                    if (z5 != zArr[i6]) {
                        int[] iArr = (int[]) this.f58d;
                        if (!z5) {
                            i11 = 2;
                        }
                        iArr[i6] = i11;
                    } else {
                        ((int[]) this.f58d)[i6] = 0;
                    }
                    zArr[i6] = z5;
                    i5++;
                    i6 = i10;
                }
                this.a = false;
                return (int[]) ((int[]) this.f58d).clone();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x00f2  */
    /* JADX WARN: Type inference failed for: r17v12 */
    /* JADX WARN: Type inference failed for: r17v13 */
    /* JADX WARN: Type inference failed for: r17v4, types: [boolean] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean k(int i5, int i6, int[] iArr) {
        boolean z5;
        float b10;
        ?? r17;
        char c6;
        char c8;
        char c10;
        int i10;
        int i11;
        int i12;
        ArrayList arrayList = (ArrayList) this.f57c;
        boolean z6 = false;
        char c11 = 2;
        char c12 = 3;
        char c13 = 4;
        int i13 = iArr[0] + iArr[1] + iArr[2] + iArr[3] + iArr[4];
        int b11 = (int) b(i6, iArr);
        int i14 = iArr[2];
        nj.b bVar = (nj.b) this.f56b;
        int i15 = bVar.f15511e;
        int i16 = bVar.f15510d;
        int[] iArr2 = (int[]) this.f58d;
        c(iArr2);
        int i17 = i5;
        while (i17 >= 0 && bVar.b(b11, i17)) {
            iArr2[2] = iArr2[2] + 1;
            i17--;
        }
        float f2 = Float.NaN;
        if (i17 < 0) {
            z5 = false;
        } else {
            while (i17 >= 0 && !bVar.b(b11, i17)) {
                z5 = z6;
                int i18 = iArr2[1];
                if (i18 > i14) {
                    break;
                }
                iArr2[1] = i18 + 1;
                i17--;
                z6 = z5 ? 1 : 0;
            }
            z5 = z6;
            if (i17 >= 0 && iArr2[1] <= i14) {
                while (i17 >= 0 && bVar.b(b11, i17)) {
                    int i19 = iArr2[z5 ? 1 : 0];
                    if (i19 > i14) {
                        break;
                    }
                    iArr2[z5 ? 1 : 0] = i19 + 1;
                    i17--;
                }
                if (iArr2[z5 ? 1 : 0] <= i14) {
                    int i20 = i5 + 1;
                    while (i20 < i15 && bVar.b(b11, i20)) {
                        iArr2[2] = iArr2[2] + 1;
                        i20++;
                    }
                    if (i20 != i15) {
                        while (i20 < i15 && !bVar.b(b11, i20)) {
                            int i21 = iArr2[3];
                            if (i21 >= i14) {
                                break;
                            }
                            iArr2[3] = i21 + 1;
                            i20++;
                        }
                        if (i20 != i15 && iArr2[3] < i14) {
                            while (i20 < i15 && bVar.b(b11, i20)) {
                                int i22 = iArr2[4];
                                if (i22 >= i14) {
                                    break;
                                }
                                iArr2[4] = i22 + 1;
                                i20++;
                            }
                            int i23 = iArr2[4];
                            if (i23 < i14 && Math.abs(((((iArr2[z5 ? 1 : 0] + iArr2[1]) + iArr2[2]) + iArr2[3]) + i23) - i13) * 5 < i13 * 2 && i(iArr2)) {
                                b10 = b(i20, iArr2);
                                r17 = z5;
                                if (!Float.isNaN(b10)) {
                                    int i24 = (int) b10;
                                    int i25 = iArr[2];
                                    c(iArr2);
                                    int i26 = b11;
                                    while (i26 >= 0 && bVar.b(i26, i24)) {
                                        iArr2[2] = iArr2[2] + 1;
                                        i26--;
                                    }
                                    if (i26 < 0) {
                                        c6 = 2;
                                    } else {
                                        while (i26 >= 0 && !bVar.b(i26, i24)) {
                                            c6 = c11;
                                            int i27 = iArr2[1];
                                            if (i27 > i25) {
                                                break;
                                            }
                                            iArr2[1] = i27 + 1;
                                            i26--;
                                            c11 = c6;
                                        }
                                        c6 = c11;
                                        if (i26 >= 0 && iArr2[1] <= i25) {
                                            while (i26 >= 0 && bVar.b(i26, i24)) {
                                                int i28 = iArr2[r17];
                                                if (i28 > i25) {
                                                    break;
                                                }
                                                iArr2[r17] = i28 + 1;
                                                i26--;
                                            }
                                            if (iArr2[r17] <= i25) {
                                                int i29 = b11 + 1;
                                                while (i29 < i16 && bVar.b(i29, i24)) {
                                                    iArr2[c6] = iArr2[c6] + 1;
                                                    i29++;
                                                }
                                                if (i29 != i16) {
                                                    while (i29 < i16 && !bVar.b(i29, i24)) {
                                                        int i30 = iArr2[3];
                                                        if (i30 >= i25) {
                                                            break;
                                                        }
                                                        iArr2[3] = i30 + 1;
                                                        i29++;
                                                    }
                                                    if (i29 != i16 && iArr2[3] < i25) {
                                                        while (i29 < i16 && bVar.b(i29, i24)) {
                                                            int i31 = iArr2[4];
                                                            if (i31 >= i25) {
                                                                break;
                                                            }
                                                            iArr2[4] = i31 + 1;
                                                            i29++;
                                                        }
                                                        int i32 = iArr2[4];
                                                        if (i32 < i25 && Math.abs(((((iArr2[r17] + iArr2[1]) + iArr2[c6]) + iArr2[3]) + i32) - i13) * 5 < i13 && i(iArr2)) {
                                                            f2 = b(i29, iArr2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    float f10 = f2;
                                    if (!Float.isNaN(f10)) {
                                        int i33 = (int) f10;
                                        c(iArr2);
                                        int i34 = r17;
                                        while (i24 >= i34 && i33 >= i34) {
                                            c8 = c12;
                                            if (!bVar.b(i33 - i34, i24 - i34)) {
                                                break;
                                            }
                                            iArr2[c6] = iArr2[c6] + 1;
                                            i34++;
                                            c12 = c8;
                                        }
                                        c8 = c12;
                                        if (iArr2[c6] != 0) {
                                            while (i24 >= i34 && i33 >= i34 && !bVar.b(i33 - i34, i24 - i34)) {
                                                iArr2[1] = iArr2[1] + 1;
                                                i34++;
                                            }
                                            if (iArr2[1] != 0) {
                                                while (i24 >= i34 && i33 >= i34 && bVar.b(i33 - i34, i24 - i34)) {
                                                    iArr2[r17] = iArr2[r17] + 1;
                                                    i34++;
                                                }
                                                if (iArr2[r17] != 0) {
                                                    int i35 = bVar.f15511e;
                                                    int i36 = 1;
                                                    while (true) {
                                                        int i37 = i24 + i36;
                                                        c10 = c13;
                                                        if (i37 >= i35 || (i12 = i33 + i36) >= i16 || !bVar.b(i12, i37)) {
                                                            break;
                                                        }
                                                        iArr2[c6] = iArr2[c6] + 1;
                                                        i36++;
                                                        c13 = c10;
                                                    }
                                                    while (true) {
                                                        int i38 = i24 + i36;
                                                        if (i38 >= i35 || (i11 = i33 + i36) >= i16 || bVar.b(i11, i38)) {
                                                            break;
                                                        }
                                                        iArr2[c8] = iArr2[c8] + 1;
                                                        i36++;
                                                    }
                                                    if (iArr2[c8] != 0) {
                                                        while (true) {
                                                            int i39 = i24 + i36;
                                                            if (i39 >= i35 || (i10 = i33 + i36) >= i16 || !bVar.b(i10, i39)) {
                                                                break;
                                                            }
                                                            iArr2[c10] = iArr2[c10] + 1;
                                                            i36++;
                                                        }
                                                        if (iArr2[c10] != 0) {
                                                            int i40 = r17;
                                                            int i41 = i40;
                                                            while (true) {
                                                                if (i40 < 5) {
                                                                    int i42 = iArr2[i40];
                                                                    if (i42 == 0) {
                                                                        break;
                                                                    }
                                                                    i41 += i42;
                                                                    i40++;
                                                                } else if (i41 >= 7) {
                                                                    float f11 = i41 / 7.0f;
                                                                    float f12 = f11 / 1.333f;
                                                                    if (Math.abs(f11 - iArr2[r17]) < f12 && Math.abs(f11 - iArr2[1]) < f12 && Math.abs((f11 * 3.0f) - iArr2[c6]) < 3.0f * f12 && Math.abs(f11 - iArr2[c8]) < f12 && Math.abs(f11 - iArr2[c10]) < f12) {
                                                                        float f13 = i13 / 7.0f;
                                                                        for (int i43 = r17; i43 < arrayList.size(); i43++) {
                                                                            fk.c cVar = (fk.c) arrayList.get(i43);
                                                                            float f14 = cVar.f8773c;
                                                                            float f15 = cVar.a;
                                                                            float f16 = cVar.f12810b;
                                                                            if (Math.abs(b10 - f16) <= f13 && Math.abs(f10 - f15) <= f13) {
                                                                                float abs = Math.abs(f13 - f14);
                                                                                if (abs <= 1.0f || abs <= f14) {
                                                                                    int i44 = cVar.f8774d;
                                                                                    int i45 = i44 + 1;
                                                                                    float f17 = i44;
                                                                                    float f18 = (f15 * f17) + f10;
                                                                                    float f19 = i45;
                                                                                    arrayList.set(i43, new fk.c(f18 / f19, ((f16 * f17) + b10) / f19, ((f17 * cVar.f8773c) + f13) / f19, i45));
                                                                                    return true;
                                                                                }
                                                                            }
                                                                        }
                                                                        arrayList.add(new fk.c(f10, b10, f13, 1));
                                                                        return true;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                return r17;
                            }
                        }
                    }
                }
            }
        }
        b10 = Float.NaN;
        r17 = z5;
        if (!Float.isNaN(b10)) {
        }
        return r17;
    }

    public boolean l() {
        ArrayList arrayList = (ArrayList) this.f57c;
        int size = arrayList.size();
        Iterator it = arrayList.iterator();
        float f2 = 0.0f;
        int i5 = 0;
        float f10 = 0.0f;
        while (it.hasNext()) {
            fk.c cVar = (fk.c) it.next();
            if (cVar.f8774d >= 2) {
                i5++;
                f10 += cVar.f8773c;
            }
        }
        if (i5 >= 3) {
            float f11 = f10 / size;
            Iterator it2 = arrayList.iterator();
            while (it2.hasNext()) {
                f2 += Math.abs(((fk.c) it2.next()).f8773c - f11);
            }
            if (f2 <= f10 * 0.05f) {
                return true;
            }
        }
        return false;
    }

    public synchronized boolean m() {
        boolean z5;
        boolean z6;
        try {
            synchronized (this) {
                try {
                    if (!this.a) {
                        Boolean q5 = q();
                        this.f57c = q5;
                        if (q5 == null) {
                            ((ni.k) ((vi.b) this.f56b)).a(new com.google.firebase.messaging.m(0));
                        }
                        this.a = true;
                    }
                } finally {
                }
            }
            return z6;
        } catch (Throwable th2) {
            throw th2;
        }
        Boolean bool = (Boolean) this.f57c;
        if (bool != null) {
            z6 = bool.booleanValue();
        } else {
            ki.g gVar = ((FirebaseMessaging) this.f58d).a;
            gVar.a();
            dj.a aVar = (dj.a) gVar.f13387g.get();
            synchronized (aVar) {
                z5 = aVar.a;
            }
            z6 = z5;
        }
        return z6;
    }

    public boolean n(ba.a aVar) {
        da.a aVar2 = (da.a) this.f56b;
        return aVar.a == 0 && aVar.f2756b == 0 && aVar.f2757c == aVar2.f7458d.width() && aVar.f2758d == aVar2.f7458d.height();
    }

    public boolean o(int i5) {
        if (i5 != 0) {
            ba.a[] aVarArr = ((da.a) this.f56b).f7461g;
            ba.a aVar = aVarArr[i5];
            ba.a aVar2 = aVarArr[i5 - 1];
            if ((aVar.f2759e != 2 || !n(aVar)) && (aVar2.f2760f != 2 || !n(aVar2))) {
                return false;
            }
        }
        return true;
    }

    public Sink p(int i5) {
        et.b k;
        rs.g gVar = (rs.g) this.f58d;
        synchronized (gVar) {
            try {
                if (this.a) {
                    throw new IllegalStateException("Check failed.");
                }
                if (!Intrinsics.areEqual(((rs.d) this.f56b).f17642g, this)) {
                    return new et.d();
                }
                if (!((rs.d) this.f56b).f17640e) {
                    boolean[] zArr = (boolean[]) this.f57c;
                    Intrinsics.checkNotNull(zArr);
                    zArr[i5] = true;
                }
                File file = (File) ((rs.d) this.f56b).f17639d.get(i5);
                try {
                    Intrinsics.checkNotNullParameter(file, "file");
                    try {
                        k = y.k(file);
                    } catch (FileNotFoundException unused) {
                        file.getParentFile().mkdirs();
                        k = y.k(file);
                    }
                    return new rs.h(k, new hl.a(3, gVar, this));
                } catch (FileNotFoundException unused2) {
                    return new et.d();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public Boolean q() {
        ApplicationInfo applicationInfo;
        Bundle bundle;
        ki.g gVar = ((FirebaseMessaging) this.f58d).a;
        gVar.a();
        Context context = gVar.a;
        SharedPreferences sharedPreferences = context.getSharedPreferences("com.google.firebase.messaging", 0);
        if (sharedPreferences.contains("auto_init")) {
            return Boolean.valueOf(sharedPreferences.getBoolean("auto_init", false));
        }
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager == null || (applicationInfo = packageManager.getApplicationInfo(context.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT)) == null || (bundle = applicationInfo.metaData) == null || !bundle.containsKey("firebase_messaging_auto_init_enabled")) {
                return null;
            }
            return Boolean.valueOf(applicationInfo.metaData.getBoolean("firebase_messaging_auto_init_enabled"));
        } catch (PackageManager.NameNotFoundException unused) {
            return null;
        }
    }

    public ek.e r() {
        ek.e eVar = (ek.e) this.f58d;
        if (eVar != null) {
            return eVar;
        }
        int i5 = 0;
        int i6 = 0;
        for (int i10 = 0; i10 < 6; i10++) {
            i6 = f(i10, 8, i6);
        }
        int f2 = f(8, 7, f(8, 8, f(7, 8, i6)));
        for (int i11 = 5; i11 >= 0; i11--) {
            f2 = f(8, i11, f2);
        }
        int i12 = ((nj.b) this.f56b).f15511e;
        int i13 = i12 - 7;
        for (int i14 = i12 - 1; i14 >= i13; i14--) {
            i5 = f(8, i14, i5);
        }
        for (int i15 = i12 - 8; i15 < i12; i15++) {
            i5 = f(i15, 8, i5);
        }
        ek.e a = ek.e.a(f2, i5);
        if (a == null) {
            a = ek.e.a(f2 ^ 21522, i5 ^ 21522);
        }
        this.f58d = a;
        if (a != null) {
            return a;
        }
        throw jj.d.a();
    }

    public ek.h s() {
        ek.h hVar = (ek.h) this.f57c;
        if (hVar != null) {
            return hVar;
        }
        int i5 = ((nj.b) this.f56b).f15511e;
        int i6 = (i5 - 17) / 4;
        if (i6 <= 6) {
            return ek.h.c(i6);
        }
        int i10 = i5 - 11;
        int i11 = 0;
        int i12 = 0;
        for (int i13 = 5; i13 >= 0; i13--) {
            for (int i14 = i5 - 9; i14 >= i10; i14--) {
                i12 = f(i14, i13, i12);
            }
        }
        ek.h b10 = ek.h.b(i12);
        if (b10 != null && (b10.a * 4) + 17 == i5) {
            this.f57c = b10;
            return b10;
        }
        for (int i15 = 5; i15 >= 0; i15--) {
            for (int i16 = i5 - 9; i16 >= i10; i16--) {
                i11 = f(i15, i16, i11);
            }
        }
        ek.h b11 = ek.h.b(i11);
        if (b11 == null || (b11.a * 4) + 17 != i5) {
            throw jj.d.a();
        }
        this.f57c = b11;
        return b11;
    }

    public void t() {
        if (((ek.e) this.f58d) == null) {
            return;
        }
        int i5 = f0.e.c(8)[((ek.e) this.f58d).f8138b];
        nj.b bVar = (nj.b) this.f56b;
        int i6 = bVar.f15511e;
        for (int i10 = 0; i10 < i6; i10++) {
            for (int i11 = 0; i11 < i6; i11++) {
                if (ek.d.a(i5, i10, i11)) {
                    bVar.a(i11, i10);
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:37:0x00c5, code lost:
    
        r7 = r6;
     */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0083  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x008b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void u(int i5, Bitmap bitmap) {
        int i6;
        int b10;
        t tVar = (t) this.f57c;
        da.a aVar = (da.a) this.f56b;
        boolean z5 = this.a;
        if (z5) {
            Canvas canvas = new Canvas(bitmap);
            ba.b bVar = aVar.f7457c;
            ba.c m5 = bVar.m(i5);
            ba.a o6 = bVar.o(i5);
            ba.a o7 = i5 != 0 ? bVar.o(i5 - 1) : null;
            try {
                if (m5.getWidth() > 0 && m5.getHeight() > 0) {
                    if (bVar.n()) {
                        aVar.h(canvas, m5, o6, o7);
                    } else {
                        aVar.g(canvas, m5, o6, o7);
                    }
                    m5.dispose();
                    return;
                }
                return;
            } finally {
                m5.dispose();
            }
        }
        Canvas canvas2 = new Canvas(bitmap);
        int i10 = 0;
        canvas2.drawColor(0, PorterDuff.Mode.SRC);
        if (o(i5)) {
            i10 = i5;
        } else {
            int i11 = i5 - 1;
            while (true) {
                if (i11 < 0) {
                    break;
                }
                ba.a aVar2 = aVar.f7461g[i11];
                int i12 = aVar2.f2760f;
                if (i12 != 1) {
                    if (i12 != 2) {
                        i6 = i12 == 3 ? 3 : 4;
                    } else if (n(aVar2)) {
                        i6 = 2;
                    }
                    b10 = f0.e.b(i6);
                    if (b10 != 0) {
                        ba.a aVar3 = aVar.f7461g[i11];
                        CloseableReference j = ((n9.b) ((s9.a) tVar.f16718e).f17827b).j(i11);
                        if (j != null) {
                            try {
                                canvas2.drawBitmap((Bitmap) j.q(), 0.0f, 0.0f, (Paint) null);
                                if (aVar3.f2760f == 2) {
                                    h(canvas2, aVar3);
                                }
                                i10 = i11 + 1;
                            } finally {
                                if (!z5) {
                                    j.close();
                                }
                            }
                        } else if (o(i11)) {
                            break;
                        } else {
                            i11--;
                        }
                    } else if (b10 == 1) {
                        i10 = i11 + 1;
                        break;
                    } else if (b10 == 3) {
                        break;
                    } else {
                        i11--;
                    }
                }
                i6 = 1;
                b10 = f0.e.b(i6);
                if (b10 != 0) {
                }
            }
        }
        while (i10 < i5) {
            ba.a aVar4 = aVar.f7461g[i10];
            int i13 = aVar4.f2760f;
            if (i13 != 3) {
                if (aVar4.f2759e == 2) {
                    h(canvas2, aVar4);
                }
                aVar.d(canvas2, i10);
                tVar.getClass();
                Intrinsics.checkNotNullParameter(bitmap, "bitmap");
                if (i13 == 2) {
                    h(canvas2, aVar4);
                }
            }
            i10++;
        }
        ba.a aVar5 = aVar.f7461g[i5];
        if (aVar5.f2759e == 2) {
            h(canvas2, aVar5);
        }
        aVar.d(canvas2, i5);
    }

    public f(nj.b bVar, int i5) {
        switch (i5) {
            case 4:
                this.f56b = bVar;
                this.f57c = new ArrayList();
                this.f58d = new int[5];
                return;
            default:
                int i6 = bVar.f15511e;
                if (i6 >= 21 && (i6 & 3) == 1) {
                    this.f56b = bVar;
                    return;
                }
                throw jj.d.a();
        }
    }

    public f(da.a aVar, boolean z5, t tVar) {
        this.f56b = aVar;
        this.f57c = tVar;
        this.a = z5;
        Paint paint = new Paint();
        this.f58d = paint;
        paint.setColor(0);
        paint.setStyle(Paint.Style.FILL);
        paint.setXfermode(new PorterDuffXfermode(PorterDuff.Mode.SRC));
    }

    public f(rs.g this$0, rs.d entry) {
        boolean[] zArr;
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(entry, "entry");
        this.f58d = this$0;
        this.f56b = entry;
        if (entry.f17640e) {
            zArr = null;
        } else {
            this$0.getClass();
            zArr = new boolean[2];
        }
        this.f57c = zArr;
    }
}
