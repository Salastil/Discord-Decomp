package ke;

import android.content.Context;
import android.content.IntentFilter;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.util.SparseIntArray;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Formatter;
import java.util.Iterator;
import java.util.Locale;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class u {

    /* renamed from: f, reason: collision with root package name */
    public static u f13349f;

    /* renamed from: g, reason: collision with root package name */
    public static HandlerThread f13350g;

    /* renamed from: h, reason: collision with root package name */
    public static Handler f13351h;
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public int f13352b;

    /* renamed from: c, reason: collision with root package name */
    public Object f13353c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f13354d;

    /* renamed from: e, reason: collision with root package name */
    public Object f13355e;

    public u(int i5, String str, ArrayList arrayList, ArrayList arrayList2) {
        this.a = 1;
        this.f13352b = i5;
        this.f13355e = str;
        this.f13353c = arrayList;
        this.f13354d = arrayList2;
    }

    public static void a(u uVar, int i5) {
        synchronized (uVar.f13355e) {
            try {
                if (uVar.f13352b == i5) {
                    return;
                }
                uVar.f13352b = i5;
                Iterator it = ((CopyOnWriteArrayList) uVar.f13354d).iterator();
                while (it.hasNext()) {
                    WeakReference weakReference = (WeakReference) it.next();
                    ie.r rVar = (ie.r) weakReference.get();
                    if (rVar != null) {
                        rVar.a(i5);
                    } else {
                        ((CopyOnWriteArrayList) uVar.f13354d).remove(weakReference);
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static void b(SparseIntArray sparseIntArray, long j) {
        if (sparseIntArray != null) {
            int i5 = (int) ((500000 + j) / 1000000);
            if (j >= 0) {
                sparseIntArray.put(i5, sparseIntArray.get(i5) + 1);
            }
        }
    }

    public static synchronized u e(Context context) {
        u uVar;
        synchronized (u.class) {
            try {
                if (f13349f == null) {
                    f13349f = new u(context);
                }
                uVar = f13349f;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return uVar;
    }

    public void c(e4.r rVar) {
        if (rVar != null) {
            ak.e eVar = (ak.e) rVar;
            ak.a aVar = (ak.a) this.f13353c;
            ak.a[] aVarArr = (ak.a[]) eVar.f8001i;
            for (ak.a aVar2 : aVarArr) {
                if (aVar2 != null) {
                    aVar2.d();
                }
            }
            eVar.J(aVarArr, aVar);
            ak.c cVar = (ak.c) eVar.f8000e;
            boolean z5 = eVar.f664v;
            jj.l lVar = z5 ? cVar.f654b : cVar.f656d;
            jj.l lVar2 = z5 ? cVar.f655c : cVar.f657e;
            int p3 = eVar.p((int) lVar.f12810b);
            int p5 = eVar.p((int) lVar2.f12810b);
            int i5 = -1;
            int i6 = 1;
            int i10 = 0;
            while (p3 < p5) {
                ak.a aVar3 = aVarArr[p3];
                if (aVar3 != null) {
                    int i11 = aVar3.f653f;
                    int i12 = i11 - i5;
                    if (i12 == 0) {
                        i10++;
                    } else {
                        if (i12 == 1) {
                            i6 = Math.max(i6, i10);
                            i5 = aVar3.f653f;
                        } else if (i12 < 0 || i11 >= aVar.f653f || i12 > p3) {
                            aVarArr[p3] = null;
                        } else {
                            if (i6 > 2) {
                                i12 *= i6 - 2;
                            }
                            boolean z6 = i12 >= p3;
                            for (int i13 = 1; i13 <= i12 && !z6; i13++) {
                                z6 = aVarArr[p3 - i13] != null;
                            }
                            if (z6) {
                                aVarArr[p3] = null;
                            } else {
                                i5 = aVar3.f653f;
                            }
                        }
                        i10 = 1;
                    }
                }
                p3++;
            }
        }
    }

    public String d(long j, long j5, String str, int i5) {
        String[] strArr = (String[]) this.f13353c;
        String[] strArr2 = (String[]) this.f13355e;
        StringBuilder sb2 = new StringBuilder();
        int i6 = 0;
        while (true) {
            int i10 = this.f13352b;
            if (i6 >= i10) {
                sb2.append(strArr[i10]);
                return sb2.toString();
            }
            sb2.append(strArr[i6]);
            int i11 = ((int[]) this.f13354d)[i6];
            if (i11 == 1) {
                sb2.append(str);
            } else if (i11 == 2) {
                sb2.append(String.format(Locale.US, strArr2[i6], Long.valueOf(j)));
            } else if (i11 == 3) {
                sb2.append(String.format(Locale.US, strArr2[i6], Integer.valueOf(i5)));
            } else if (i11 == 4) {
                sb2.append(String.format(Locale.US, strArr2[i6], Long.valueOf(j5)));
            }
            i6++;
        }
    }

    public int f() {
        int i5;
        synchronized (this.f13355e) {
            i5 = this.f13352b;
        }
        return i5;
    }

    public String toString() {
        switch (this.a) {
            case 2:
                int i5 = this.f13352b;
                e4.r[] rVarArr = (e4.r[]) this.f13354d;
                e4.r rVar = rVarArr[0];
                if (rVar == null) {
                    rVar = rVarArr[i5 + 1];
                }
                Formatter formatter = new Formatter();
                for (int i6 = 0; i6 < ((ak.a[]) rVar.f8001i).length; i6++) {
                    try {
                        formatter.format("CW %3d:", Integer.valueOf(i6));
                        for (int i10 = 0; i10 < i5 + 2; i10++) {
                            e4.r rVar2 = rVarArr[i10];
                            if (rVar2 == null) {
                                formatter.format("    |   ", new Object[0]);
                            } else {
                                ak.a aVar = ((ak.a[]) rVar2.f8001i)[i6];
                                if (aVar == null) {
                                    formatter.format("    |   ", new Object[0]);
                                } else {
                                    formatter.format(" %3d|%3d", Integer.valueOf(aVar.f653f), Integer.valueOf(aVar.f652e));
                                }
                            }
                        }
                        formatter.format("%n", new Object[0]);
                    } finally {
                    }
                }
                String formatter2 = formatter.toString();
                formatter.close();
                return formatter2;
            default:
                return super.toString();
        }
    }

    public u(ak.a aVar, ak.c cVar) {
        this.a = 2;
        this.f13353c = aVar;
        int i5 = aVar.f649b;
        this.f13352b = i5;
        this.f13355e = cVar;
        this.f13354d = new e4.r[i5 + 2];
    }

    public u(String[] strArr, int[] iArr, String[] strArr2, int i5) {
        this.a = 3;
        this.f13353c = strArr;
        this.f13354d = iArr;
        this.f13355e = strArr2;
        this.f13352b = i5;
    }

    public u(Context context) {
        this.a = 0;
        this.f13353c = new Handler(Looper.getMainLooper());
        this.f13354d = new CopyOnWriteArrayList();
        this.f13355e = new Object();
        this.f13352b = 0;
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
        context.registerReceiver(new c4.d(4, this), intentFilter);
    }

    public u(int i5) {
        this.a = 4;
        this.f13353c = new SparseIntArray[9];
        this.f13354d = new ArrayList();
        this.f13355e = new x0.i(this);
        this.f13352b = i5;
    }
}
