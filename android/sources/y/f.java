package y;

import com.google.firebase.messaging.p;
import k2.r;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kr.n;

/* loaded from: classes.dex */
public abstract class f {
    public static final r a = new r(26);

    /* renamed from: b, reason: collision with root package name */
    public static final Object f20582b = new Object();

    /* renamed from: c, reason: collision with root package name */
    public static final e f20583c;

    /* renamed from: d, reason: collision with root package name */
    public static final long f20584d;

    /* renamed from: e, reason: collision with root package name */
    public static final p f20585e;

    /* renamed from: f, reason: collision with root package name */
    public static final Object f20586f = null;

    /* renamed from: g, reason: collision with root package name */
    public static final m0 f20587g;

    /* renamed from: h, reason: collision with root package name */
    public static final a f20588h;

    static {
        f20583c = e.f20577w;
        long j = 1;
        f20584d = j + j;
        p pVar = new p();
        pVar.f6253c = new long[16];
        pVar.f6254d = new int[16];
        int[] iArr = new int[16];
        int i5 = 0;
        while (i5 < 16) {
            int i6 = i5 + 1;
            iArr[i5] = i6;
            i5 = i6;
        }
        pVar.f6255e = iArr;
        f20585e = pVar;
        f20587g = m0.f13512d;
        long j5 = f20584d;
        f20584d = j + j5;
        a aVar = new a(j5, null, new n(24));
        f20583c = f20583c.b(aVar.f20569b);
        f20588h = aVar;
        new x.a(0);
    }

    public static final h a(h hVar) {
        h e9;
        c b10 = b();
        h e10 = e(hVar, b10.e(), b10.b());
        if (e10 != null) {
            return e10;
        }
        synchronized (f20582b) {
            c b11 = b();
            e9 = e(hVar, b11.e(), b11.b());
        }
        if (e9 != null) {
            return e9;
        }
        throw new IllegalStateException("Reading a state that was created after the snapshot was taken or in a snapshot that has not yet been applied");
    }

    public static final c b() {
        c cVar = (c) a.get();
        return cVar == null ? f20588h : cVar;
    }

    public static final Function1 c(Function1 function1, Function1 function12, boolean z5) {
        if (!z5) {
            function12 = null;
        }
        return (function1 == null || function12 == null || function1 == function12) ? function1 == null ? function12 : function1 : new com.discord.permissions.b(15, function1, function12);
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x0044, code lost:
    
        r1 = r0;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final h d(h hVar, g gVar) {
        h a10 = gVar.a();
        p pVar = f20585e;
        long j = (pVar.a > 0 ? ((long[]) pVar.f6253c)[0] : f20584d) - 1;
        h hVar2 = null;
        h hVar3 = null;
        while (true) {
            if (a10 == null) {
                break;
            }
            long j5 = a10.a;
            if (j5 == 0) {
                break;
            }
            if (j5 != 0 && Intrinsics.compare(j5, j) <= 0 && !e.f20577w.a(j5)) {
                if (hVar3 == null) {
                    hVar3 = a10;
                } else if (Intrinsics.compare(a10.a, hVar3.a) >= 0) {
                    hVar2 = hVar3;
                }
            }
            a10 = a10.f20589b;
        }
        if (hVar2 != null) {
            hVar2.a = LongCompanionObject.MAX_VALUE;
            return hVar2;
        }
        h a11 = hVar.a();
        a11.f20589b = gVar.a();
        Intrinsics.checkNotNull(a11, "null cannot be cast to non-null type T of androidx.compose.runtime.snapshots.SnapshotKt.newOverwritableRecordLocked");
        gVar.h(a11);
        Intrinsics.checkNotNull(a11, "null cannot be cast to non-null type T of androidx.compose.runtime.snapshots.SnapshotKt.newOverwritableRecordLocked");
        return a11;
    }

    public static final h e(h hVar, long j, e eVar) {
        h hVar2 = null;
        while (hVar != null) {
            long j5 = hVar.a;
            if (j5 != 0 && Intrinsics.compare(j5, j) <= 0 && !eVar.a(j5) && (hVar2 == null || Intrinsics.compare(hVar2.a, hVar.a) < 0)) {
                hVar2 = hVar;
            }
            hVar = hVar.f20589b;
        }
        if (hVar2 != null) {
            return hVar2;
        }
        return null;
    }

    public static final h f(h hVar, g gVar) {
        h e9;
        c b10 = b();
        Function1 c6 = b10.c();
        if (c6 != null) {
            c6.invoke(gVar);
        }
        h e10 = e(hVar, b10.e(), b10.b());
        if (e10 != null) {
            return e10;
        }
        synchronized (f20582b) {
            c b11 = b();
            h a10 = gVar.a();
            Intrinsics.checkNotNull(a10, "null cannot be cast to non-null type T of androidx.compose.runtime.snapshots.SnapshotKt.readable");
            e9 = e(a10, b11.e(), b11.b());
            if (e9 == null) {
                throw new IllegalStateException("Reading a state that was created after the snapshot was taken or in a snapshot that has not yet been applied");
            }
        }
        return e9;
    }

    public static final void g(int i5) {
        p pVar = f20585e;
        int i6 = ((int[]) pVar.f6255e)[i5];
        pVar.h(i6, pVar.a - 1);
        pVar.a--;
        long[] jArr = (long[]) pVar.f6253c;
        long j = jArr[i6];
        int i10 = i6;
        while (i10 > 0) {
            int i11 = ((i10 + 1) >> 1) - 1;
            if (Intrinsics.compare(jArr[i11], j) <= 0) {
                break;
            }
            pVar.h(i11, i10);
            i10 = i11;
        }
        long[] jArr2 = (long[]) pVar.f6253c;
        int i12 = pVar.a >> 1;
        while (i6 < i12) {
            int i13 = (i6 + 1) << 1;
            int i14 = i13 - 1;
            if (i13 < pVar.a && Intrinsics.compare(jArr2[i13], jArr2[i14]) < 0) {
                if (Intrinsics.compare(jArr2[i13], jArr2[i6]) >= 0) {
                    break;
                }
                pVar.h(i13, i6);
                i6 = i13;
            } else {
                if (Intrinsics.compare(jArr2[i14], jArr2[i6]) >= 0) {
                    break;
                }
                pVar.h(i14, i6);
                i6 = i14;
            }
        }
        ((int[]) pVar.f6255e)[i5] = pVar.f6252b;
        pVar.f6252b = i5;
    }
}
