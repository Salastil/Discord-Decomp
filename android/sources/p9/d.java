package p9;

import a5.a0;
import android.content.Context;
import android.graphics.Color;
import android.util.Log;
import android.util.SparseArray;
import cd.j;
import cd.k;
import cd.l;
import ch.u;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import com.facebook.common.references.CloseableReference;
import com.facebook.soloader.b0;
import com.facebook.soloader.z;
import hc.g1;
import ie.j0;
import ie.m;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.concurrent.ExecutorService;
import ke.o;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.reflect.KProperty;
import v4.d0;
import x4.g;

/* loaded from: classes3.dex */
public final class d implements a, k, vo.d, lb.c, nf.c, d0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16328d;

    /* renamed from: e, reason: collision with root package name */
    public int f16329e;

    public /* synthetic */ d(int i5) {
        this.f16328d = i5;
    }

    public static bd.f i(u uVar, a0 a0Var) {
        IOException iOException = (IOException) a0Var.f125i;
        if (!(iOException instanceof ie.d0)) {
            return null;
        }
        int i5 = ((ie.d0) iOException).f10662v;
        if (i5 != 403 && i5 != 404 && i5 != 410 && i5 != 416 && i5 != 500 && i5 != 503) {
            return null;
        }
        if (uVar.a(1)) {
            return new bd.f(1, LogThrottleSingleton.RATE_LIMIT_FIVE_MINUTES);
        }
        if (uVar.a(2)) {
            return new bd.f(2, LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE);
        }
        return null;
    }

    public static long m(a0 a0Var) {
        Throwable th2 = (IOException) a0Var.f125i;
        if ((th2 instanceof g1) || (th2 instanceof FileNotFoundException) || (th2 instanceof ie.a0) || (th2 instanceof j0)) {
            return -9223372036854775807L;
        }
        int i5 = m.f10690e;
        while (th2 != null) {
            if ((th2 instanceof m) && ((m) th2).f10691d == 2008) {
                return -9223372036854775807L;
            }
            th2 = th2.getCause();
        }
        return Math.min((a0Var.f124e - 1) * 1000, 5000);
    }

    @Override // p9.a
    public void a(c bitmapFramePreparer, n9.b bitmapFrameCache, n9.a animationBackend, int i5) {
        c cVar;
        n9.b bVar;
        n9.a aVar;
        Intrinsics.checkNotNullParameter(bitmapFramePreparer, "bitmapFramePreparer");
        Intrinsics.checkNotNullParameter(bitmapFrameCache, "bitmapFrameCache");
        Intrinsics.checkNotNullParameter(animationBackend, "animationBackend");
        int i6 = this.f16329e;
        int i10 = 1;
        if (1 > i6) {
            return;
        }
        while (true) {
            int d6 = (i5 + i10) % animationBackend.f14962c.d();
            if (p8.a.a.isLoggable(2)) {
                p8.a.o(d.class, "Preparing frame %d, last drawn: %d", Integer.valueOf(d6), Integer.valueOf(i5));
            }
            bitmapFramePreparer.getClass();
            Intrinsics.checkNotNullParameter(bitmapFrameCache, "bitmapFrameCache");
            Intrinsics.checkNotNullParameter(animationBackend, "animationBackend");
            int hashCode = (animationBackend.hashCode() * 31) + d6;
            synchronized (((SparseArray) bitmapFramePreparer.f16327w)) {
                if (((SparseArray) bitmapFramePreparer.f16327w).get(hashCode) != null) {
                    p8.a.q("Already scheduled decode job for frame %d", Integer.valueOf(d6), c.class);
                } else if (bitmapFrameCache.contains(d6)) {
                    p8.a.q("Frame %d is cached already.", Integer.valueOf(d6), c.class);
                } else {
                    cVar = bitmapFramePreparer;
                    bVar = bitmapFrameCache;
                    aVar = animationBackend;
                    b bVar2 = new b(cVar, aVar, bVar, d6, hashCode);
                    ((SparseArray) cVar.f16327w).put(hashCode, bVar2);
                    ((ExecutorService) cVar.f16326v).execute(bVar2);
                    Unit unit = Unit.a;
                }
                cVar = bitmapFramePreparer;
                bVar = bitmapFrameCache;
                aVar = animationBackend;
            }
            if (i10 == i6) {
                return;
            }
            i10++;
            bitmapFramePreparer = cVar;
            animationBackend = aVar;
            bitmapFrameCache = bVar;
        }
    }

    @Override // nf.c
    public int b(Context context, boolean z5) {
        return 0;
    }

    @Override // p9.a
    public CloseableReference c(int i5, int i6, int i10) {
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:42:0x009d, code lost:
    
        r4 = (com.facebook.soloader.b) r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x009f, code lost:
    
        android.util.Log.e("SoLoader", "Preparing BackupSoSource for the first time BackupSoSource");
        r4.d(0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x00b8, code lost:
    
        r9 = r10.length;
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x00b9, code lost:
    
        if (r1 >= r9) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x00bb, code lost:
    
        r0 = r10[r1];
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x00bf, code lost:
    
        if ((r0 instanceof com.facebook.soloader.e) != false) goto L44;
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x00c4, code lost:
    
        if ((r0 instanceof com.facebook.soloader.b) == false) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x00c7, code lost:
    
        ((com.facebook.soloader.e) r0).f5092b |= 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:53:0x00ce, code lost:
    
        r1 = r1 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x00d2, code lost:
    
        r9 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x00d3, code lost:
    
        android.util.Log.e("SoLoader", "Encountered an exception while reunpacking BackupSoSource BackupSoSource for library " + r0 + ": ", r9);
     */
    @Override // lb.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean e(UnsatisfiedLinkError unsatisfiedLinkError, b0[] b0VarArr) {
        int i5 = 0;
        if (unsatisfiedLinkError instanceof com.facebook.soloader.a0) {
            com.facebook.soloader.a0 a0Var = (com.facebook.soloader.a0) unsatisfiedLinkError;
            String str = a0Var.f5086d;
            String message = a0Var.getMessage();
            if (str == null) {
                Log.e("SoLoader", "No so name provided in ULE, cannot recover");
                return false;
            }
            if (a0Var instanceof z) {
                if ((this.f16329e & 1) != 0) {
                    Log.e("SoLoader", "Reunpacking BackupSoSources due to " + a0Var + ", retrying for specific library " + str);
                    try {
                        for (b0 b0Var : b0VarArr) {
                            if ((b0Var instanceof com.facebook.soloader.b) && ((com.facebook.soloader.b) b0Var).j(str)) {
                            }
                        }
                    } catch (IOException e9) {
                        Log.e("SoLoader", "Failed to run recovery for backup so source due to: " + e9);
                        return false;
                    }
                }
            } else if (message != null && (message.contains("/app/") || message.contains("/mnt/"))) {
                Log.e("SoLoader", "Reunpacking BackupSoSources due to " + a0Var + ", retrying for specific library " + str);
                int length = b0VarArr.length;
                int i6 = 0;
                while (true) {
                    if (i6 >= length) {
                        break;
                    }
                    b0 b0Var2 = b0VarArr[i6];
                    if (b0Var2 instanceof com.facebook.soloader.b) {
                        break;
                    }
                    i6++;
                }
            }
            return true;
        }
        return false;
    }

    @Override // v4.d0
    public Object g(w4.a aVar, float f2) {
        int i5;
        int i6;
        int argb;
        float e9;
        ArrayList arrayList = new ArrayList();
        int i10 = 1;
        int i11 = 0;
        boolean z5 = aVar.A() == 1;
        if (z5) {
            aVar.c();
        }
        while (aVar.o()) {
            arrayList.add(Float.valueOf((float) aVar.r()));
        }
        int i12 = 2;
        if (arrayList.size() == 4 && ((Float) arrayList.get(0)).floatValue() == 1.0f) {
            arrayList.set(0, Float.valueOf(0.0f));
            arrayList.add(Float.valueOf(1.0f));
            arrayList.add((Float) arrayList.get(1));
            arrayList.add((Float) arrayList.get(2));
            arrayList.add((Float) arrayList.get(3));
            this.f16329e = 2;
        }
        if (z5) {
            aVar.g();
        }
        if (this.f16329e == -1) {
            this.f16329e = arrayList.size() / 4;
        }
        int i13 = this.f16329e;
        float[] fArr = new float[i13];
        int[] iArr = new int[i13];
        int i14 = 0;
        int i15 = 0;
        int i16 = 0;
        while (true) {
            i5 = this.f16329e * 4;
            if (i14 >= i5) {
                break;
            }
            int i17 = i14 / 4;
            double floatValue = ((Float) arrayList.get(i14)).floatValue();
            int i18 = i11;
            int i19 = i14 % 4;
            if (i19 == 0) {
                if (i17 > 0) {
                    float f10 = (float) floatValue;
                    if (fArr[i17 - 1] >= f10) {
                        fArr[i17] = f10 + 0.01f;
                    }
                }
                fArr[i17] = (float) floatValue;
            } else if (i19 == i10) {
                i15 = (int) (floatValue * 255.0d);
            } else if (i19 == 2) {
                i16 = (int) (floatValue * 255.0d);
            } else if (i19 == 3) {
                iArr[i17] = Color.argb(255, i15, i16, (int) (floatValue * 255.0d));
            }
            i14++;
            i11 = i18;
            i10 = 1;
        }
        int i20 = i11;
        s4.c cVar = new s4.c(fArr, iArr);
        if (arrayList.size() <= i5) {
            return cVar;
        }
        int size = (arrayList.size() - i5) / 2;
        float[] fArr2 = new float[size];
        float[] fArr3 = new float[size];
        int i21 = i20;
        while (i5 < arrayList.size()) {
            if (i5 % 2 == 0) {
                fArr2[i21] = ((Float) arrayList.get(i5)).floatValue();
            } else {
                fArr3[i21] = ((Float) arrayList.get(i5)).floatValue();
                i21++;
            }
            i5++;
        }
        float[] fArr4 = cVar.a;
        if (fArr4.length == 0) {
            fArr4 = fArr2;
        } else if (size != 0) {
            int length = fArr4.length + size;
            float[] fArr5 = new float[length];
            int i22 = i20;
            int i23 = i22;
            int i24 = i23;
            int i25 = i24;
            while (i22 < length) {
                float f11 = i24 < fArr4.length ? fArr4[i24] : Float.NaN;
                float f12 = i25 < size ? fArr2[i25] : Float.NaN;
                if (Float.isNaN(f12) || f11 < f12) {
                    fArr5[i22] = f11;
                    i24++;
                } else if (Float.isNaN(f11) || f12 < f11) {
                    fArr5[i22] = f12;
                    i25++;
                } else {
                    fArr5[i22] = f11;
                    i24++;
                    i25++;
                    i23++;
                }
                i22++;
            }
            fArr4 = i23 == 0 ? fArr5 : Arrays.copyOf(fArr5, length - i23);
        }
        int length2 = fArr4.length;
        int[] iArr2 = new int[length2];
        int i26 = i20;
        while (i26 < length2) {
            float f13 = fArr4[i26];
            int binarySearch = Arrays.binarySearch(fArr, f13);
            int binarySearch2 = Arrays.binarySearch(fArr2, f13);
            if (binarySearch < 0 || binarySearch2 > 0) {
                if (binarySearch2 < 0) {
                    binarySearch2 = -(binarySearch2 + 1);
                }
                float f14 = fArr3[binarySearch2];
                if (i13 >= 2 && f13 != fArr[i20]) {
                    for (int i27 = 1; i27 < i13; i27++) {
                        float f15 = fArr[i27];
                        if (f15 >= f13 || i27 == i13 - 1) {
                            if (i27 != i13 - 1 || f13 < f15) {
                                int i28 = i27 - 1;
                                float f16 = fArr[i28];
                                int u5 = ta.a.u(iArr[i28], iArr[i27], (f13 - f16) / (f15 - f16));
                                i6 = Color.argb((int) (f14 * 255.0f), Color.red(u5), Color.green(u5), Color.blue(u5));
                            } else {
                                i6 = Color.argb((int) (f14 * 255.0f), Color.red(iArr[i27]), Color.green(iArr[i27]), Color.blue(iArr[i27]));
                            }
                        }
                    }
                    throw new IllegalArgumentException("Unreachable code.");
                }
                i6 = iArr[i20];
                iArr2[i26] = i6;
            } else {
                int i29 = iArr[binarySearch];
                if (size >= i12 && f13 > fArr2[i20]) {
                    for (int i30 = 1; i30 < size; i30++) {
                        float f17 = fArr2[i30];
                        if (f17 >= f13 || i30 == size - 1) {
                            if (f17 <= f13) {
                                e9 = fArr3[i30];
                            } else {
                                int i31 = i30 - 1;
                                float f18 = fArr2[i31];
                                e9 = g.e(fArr3[i31], fArr3[i30], (f13 - f18) / (f17 - f18));
                            }
                            argb = Color.argb((int) (e9 * 255.0f), Color.red(i29), Color.green(i29), Color.blue(i29));
                        }
                    }
                    throw new IllegalArgumentException("Unreachable code.");
                }
                argb = Color.argb((int) (fArr3[i20] * 255.0f), Color.red(i29), Color.green(i29), Color.blue(i29));
                iArr2[i26] = argb;
            }
            i26++;
            i12 = 2;
        }
        return new s4.c(fArr4, iArr2);
    }

    @Override // vo.d
    public Object getValue(Object obj, KProperty property) {
        fr.d thisRef = (fr.d) obj;
        Intrinsics.checkNotNullParameter(thisRef, "thisRef");
        Intrinsics.checkNotNullParameter(property, "property");
        Intrinsics.checkNotNullParameter(thisRef, "thisRef");
        return thisRef.f9009d.get(this.f16329e);
    }

    @Override // nf.c
    public int j(Context context) {
        return this.f16329e;
    }

    public int k(int i5) {
        int i6 = this.f16329e;
        return i6 == -1 ? i5 == 7 ? 6 : 3 : i6;
    }

    public int l(int i5) {
        int i6 = this.f16329e;
        int i10 = i5 % i6;
        Integer valueOf = Integer.valueOf(i10);
        if (valueOf.intValue() < 0) {
            valueOf = null;
        }
        return valueOf != null ? valueOf.intValue() : i10 + i6;
    }

    @Override // cd.k
    public l n(j jVar) {
        int i5;
        int i6 = ke.d0.a;
        if (i6 < 23 || ((i5 = this.f16329e) != 1 && (i5 != 0 || i6 < 31))) {
            return new r8.c(3).n(jVar);
        }
        int h6 = o.h(jVar.f3437c.I);
        ke.b.y("DMCodecAdapterFactory", "Creating an asynchronous MediaCodec adapter for track type " + ke.d0.B(h6));
        return new e4.c(h6).n(jVar);
    }

    public String toString() {
        switch (this.f16328d) {
            case 8:
                StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
                return a3.e.p(new Object[]{Integer.valueOf(this.f16329e)}, 1, null, "Status: %d", "format(...)");
            default:
                return super.toString();
        }
    }

    public /* synthetic */ d(int i5, int i6) {
        this.f16328d = i6;
        this.f16329e = i5;
    }

    @Override // p9.a
    public void d() {
    }

    @Override // p9.a
    public void f() {
    }

    @Override // p9.a
    public void h(int i5, int i6) {
    }
}
