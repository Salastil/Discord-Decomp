package af;

import android.os.SystemClock;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;

/* loaded from: classes3.dex */
public final class x implements OnCompleteListener {

    /* renamed from: d, reason: collision with root package name */
    public final e f601d;

    /* renamed from: e, reason: collision with root package name */
    public final int f602e;

    /* renamed from: i, reason: collision with root package name */
    public final a f603i;

    /* renamed from: v, reason: collision with root package name */
    public final long f604v;

    /* renamed from: w, reason: collision with root package name */
    public final long f605w;

    public x(e eVar, int i5, a aVar, long j, long j5) {
        this.f601d = eVar;
        this.f602e = i5;
        this.f603i = aVar;
        this.f604v = j;
        this.f605w = j5;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0031 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static bf.c a(q qVar, bf.e eVar, int i5) {
        bf.b0 b0Var = eVar.R;
        bf.c cVar = b0Var == null ? null : b0Var.f2841v;
        if (cVar != null && cVar.f2843e) {
            int[] iArr = cVar.f2845v;
            int i6 = 0;
            if (iArr == null) {
                int[] iArr2 = cVar.f2847x;
                if (iArr2 != null) {
                    while (i6 < iArr2.length) {
                        if (iArr2[i6] == i5) {
                            break;
                        }
                        i6++;
                    }
                }
                if (qVar.f591q >= cVar.f2846w) {
                    return cVar;
                }
            } else {
                while (i6 < iArr.length) {
                    if (iArr[i6] != i5) {
                        i6++;
                    } else if (qVar.f591q >= cVar.f2846w) {
                        break;
                    }
                }
            }
        }
        return null;
    }

    @Override // com.google.android.gms.tasks.OnCompleteListener
    public final void onComplete(Task task) {
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        long j;
        long j5;
        long j7 = this.f604v;
        e eVar = this.f601d;
        if (eVar.c()) {
            bf.i iVar = (bf.i) bf.h.a().a;
            if (iVar == null || iVar.f2890e) {
                q qVar = (q) eVar.G.get(this.f603i);
                if (qVar != null) {
                    ze.c cVar = qVar.f583g;
                    if (cVar instanceof bf.e) {
                        bf.e eVar2 = (bf.e) cVar;
                        int i13 = 0;
                        boolean z5 = j7 > 0;
                        int i14 = eVar2.M;
                        if (iVar != null) {
                            z5 &= iVar.f2891i;
                            i5 = iVar.f2892v;
                            int i15 = iVar.f2893w;
                            int i16 = iVar.f2889d;
                            if (eVar2.R == null || eVar2.c()) {
                                i6 = i16;
                                i10 = i15;
                            } else {
                                bf.c a = a(qVar, eVar2, this.f602e);
                                if (a == null) {
                                    return;
                                }
                                boolean z6 = a.f2844i && j7 > 0;
                                i6 = i16;
                                i10 = a.f2846w;
                                z5 = z6;
                            }
                        } else {
                            i5 = 5000;
                            i6 = 0;
                            i10 = 100;
                        }
                        int i17 = i5;
                        int i18 = -1;
                        if (task.m()) {
                            i12 = 0;
                        } else if (task.k()) {
                            i13 = -1;
                            i12 = 100;
                        } else {
                            Exception h6 = task.h();
                            if (h6 instanceof ze.e) {
                                Status status = ((ze.e) h6).f21197d;
                                i11 = status.f5657d;
                                ye.b bVar = status.f5660v;
                                if (bVar != null) {
                                    i12 = i11;
                                    i13 = bVar.f20906e;
                                }
                            } else {
                                i11 = 101;
                            }
                            i12 = i11;
                            i13 = -1;
                        }
                        if (z5) {
                            long j10 = this.f605w;
                            long currentTimeMillis = System.currentTimeMillis();
                            i18 = (int) (SystemClock.elapsedRealtime() - j10);
                            j5 = currentTimeMillis;
                            j = j7;
                        } else {
                            j = 0;
                            j5 = 0;
                        }
                        y yVar = new y(new bf.g(this.f602e, i12, i13, j, j5, null, null, i14, i18), i6, i17, i10);
                        fg.a aVar = eVar.K;
                        aVar.sendMessage(aVar.obtainMessage(18, yVar));
                    }
                }
            }
        }
    }
}
