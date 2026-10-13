package y;

import a5.k0;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import kotlin.collections.d0;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.markers.KMappedMarker;
import kr.l;
import s.m;

/* loaded from: classes.dex */
public final class e implements Iterable, KMappedMarker {

    /* renamed from: w, reason: collision with root package name */
    public static final e f20577w = new e(0, 0, 0, null);

    /* renamed from: d, reason: collision with root package name */
    public final long f20578d;

    /* renamed from: e, reason: collision with root package name */
    public final long f20579e;

    /* renamed from: i, reason: collision with root package name */
    public final long f20580i;

    /* renamed from: v, reason: collision with root package name */
    public final long[] f20581v;

    public e(long j, long j5, long j7, long[] jArr) {
        this.f20578d = j;
        this.f20579e = j5;
        this.f20580i = j7;
        this.f20581v = jArr;
    }

    public final boolean a(long j) {
        long[] jArr;
        long j5 = j - this.f20580i;
        long j7 = 0;
        return (Intrinsics.compare(j5, j7) < 0 || Intrinsics.compare(j5, (long) 64) >= 0) ? (Intrinsics.compare(j5, (long) 64) < 0 || Intrinsics.compare(j5, (long) IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) >= 0) ? Intrinsics.compare(j5, j7) <= 0 && (jArr = this.f20581v) != null && k0.k(jArr, j) >= 0 : ((1 << (((int) j5) - 64)) & this.f20578d) != 0 : ((1 << ((int) j5)) & this.f20579e) != 0;
    }

    public final e b(long j) {
        long[] jArr;
        long j5;
        long j7;
        long[] jArr2;
        long[] jArr3;
        long j10 = this.f20580i;
        long j11 = j - j10;
        long j12 = 0;
        int compare = Intrinsics.compare(j11, j12);
        long j13 = this.f20579e;
        int i5 = 64;
        if (compare < 0 || Intrinsics.compare(j11, 64) >= 0) {
            long j14 = 64;
            int compare2 = Intrinsics.compare(j11, j14);
            long j15 = this.f20578d;
            if (compare2 < 0 || Intrinsics.compare(j11, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) >= 0) {
                long j16 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                int compare3 = Intrinsics.compare(j11, j16);
                long[] jArr4 = this.f20581v;
                if (compare3 < 0) {
                    if (jArr4 == null) {
                        return new e(this.f20578d, this.f20579e, this.f20580i, new long[]{j});
                    }
                    int k = k0.k(jArr4, j);
                    if (k < 0) {
                        int i6 = -(k + 1);
                        int length = jArr4.length;
                        long[] jArr5 = new long[length + 1];
                        u.f(jArr4, jArr5, 0, 0, i6);
                        u.f(jArr4, jArr5, i6 + 1, i6, length);
                        jArr5[i6] = j;
                        return new e(this.f20578d, this.f20579e, this.f20580i, jArr5);
                    }
                } else if (!a(j)) {
                    long j17 = 1;
                    long j18 = ((j + j17) / j14) * j14;
                    long[] jArr6 = jArr4;
                    if (Intrinsics.compare(j18, j12) < 0) {
                        j18 = (LongCompanionObject.MAX_VALUE - j16) + j17;
                    }
                    long j19 = j15;
                    long j20 = j10;
                    rd.u uVar = null;
                    while (true) {
                        if (Intrinsics.compare(j20, j18) >= 0) {
                            jArr = jArr6;
                            j5 = j13;
                            j7 = j20;
                            break;
                        }
                        if (j13 != 0) {
                            if (uVar == null) {
                                jArr = jArr6;
                                uVar = new rd.u(jArr);
                            } else {
                                jArr = jArr6;
                            }
                            int i10 = 0;
                            while (i10 < i5) {
                                long j21 = j20;
                                if ((j13 & (1 << i10)) != 0) {
                                    long j22 = j21 + i10;
                                    m mVar = (m) uVar.f17275e;
                                    int i11 = mVar.f17681b + 1;
                                    long[] jArr7 = mVar.a;
                                    if (jArr7.length < i11) {
                                        long[] copyOf = Arrays.copyOf(jArr7, Math.max(i11, (jArr7.length * 3) / 2));
                                        Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
                                        mVar.a = copyOf;
                                    }
                                    long[] jArr8 = mVar.a;
                                    int i12 = mVar.f17681b;
                                    jArr8[i12] = j22;
                                    mVar.f17681b = i12 + 1;
                                }
                                i10++;
                                j20 = j21;
                                i5 = 64;
                            }
                        } else {
                            jArr = jArr6;
                        }
                        long j23 = j20;
                        if (j19 == 0) {
                            j7 = j18;
                            j5 = 0;
                            break;
                        }
                        j20 = j23 + j14;
                        jArr6 = jArr;
                        j13 = j19;
                        i5 = 64;
                        j19 = 0;
                    }
                    if (uVar != null) {
                        m mVar2 = (m) uVar.f17275e;
                        int i13 = mVar2.f17681b;
                        if (i13 == 0) {
                            jArr3 = null;
                        } else {
                            long[] jArr9 = new long[i13];
                            long[] jArr10 = mVar2.a;
                            for (int i14 = 0; i14 < i13; i14++) {
                                jArr9[i14] = jArr10[i14];
                            }
                            jArr3 = jArr9;
                        }
                        if (jArr3 != null) {
                            jArr2 = jArr3;
                            return new e(j19, j5, j7, jArr2).b(j);
                        }
                    }
                    jArr2 = jArr;
                    return new e(j19, j5, j7, jArr2).b(j);
                }
            } else {
                long j24 = 1 << (((int) j11) - 64);
                if ((j15 & j24) == 0) {
                    return new e(j15 | j24, this.f20579e, this.f20580i, this.f20581v);
                }
            }
        } else {
            long j25 = 1 << ((int) j11);
            if ((j13 & j25) == 0) {
                return new e(this.f20578d, j13 | j25, this.f20580i, this.f20581v);
            }
        }
        return this;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        d block = new d(this, null);
        Intrinsics.checkNotNullParameter(block, "block");
        return l.a(block);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        sb2.append(" [");
        ArrayList arrayList = new ArrayList(d0.l(this, 10));
        Iterator it = iterator();
        while (it.hasNext()) {
            arrayList.add(String.valueOf(((Number) it.next()).longValue()));
        }
        StringBuilder sb3 = new StringBuilder();
        sb3.append((CharSequence) "");
        int size = arrayList.size();
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            Object obj = arrayList.get(i6);
            i5++;
            if (i5 > 1) {
                sb3.append((CharSequence) ", ");
            }
            if (obj != null ? obj instanceof CharSequence : true) {
                sb3.append((CharSequence) obj);
            } else if (obj instanceof Character) {
                sb3.append(((Character) obj).charValue());
            } else {
                sb3.append((CharSequence) obj.toString());
            }
        }
        sb3.append((CharSequence) "");
        sb2.append(sb3.toString());
        sb2.append(']');
        return sb2.toString();
    }
}
