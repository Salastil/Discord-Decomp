package androidx.recyclerview.widget;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class u {
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f2468b;

    /* renamed from: c, reason: collision with root package name */
    public final int[] f2469c;

    /* renamed from: d, reason: collision with root package name */
    public final c f2470d;

    /* renamed from: e, reason: collision with root package name */
    public final int f2471e;

    /* renamed from: f, reason: collision with root package name */
    public final int f2472f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f2473g;

    public u(c cVar, ArrayList arrayList, int[] iArr, int[] iArr2, boolean z5) {
        int i5;
        t tVar;
        int i6;
        this.a = arrayList;
        this.f2468b = iArr;
        this.f2469c = iArr2;
        Arrays.fill(iArr, 0);
        Arrays.fill(iArr2, 0);
        this.f2470d = cVar;
        int oldListSize = cVar.getOldListSize();
        this.f2471e = oldListSize;
        int newListSize = cVar.getNewListSize();
        this.f2472f = newListSize;
        this.f2473g = z5;
        t tVar2 = arrayList.isEmpty() ? null : (t) arrayList.get(0);
        if (tVar2 == null || tVar2.a != 0 || tVar2.f2461b != 0) {
            arrayList.add(0, new t(0, 0, 0));
        }
        arrayList.add(new t(oldListSize, newListSize, 0));
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            t tVar3 = (t) it.next();
            for (int i10 = 0; i10 < tVar3.f2462c; i10++) {
                int i11 = tVar3.a + i10;
                int i12 = tVar3.f2461b + i10;
                int i13 = cVar.areContentsTheSame(i11, i12) ? 1 : 2;
                iArr[i11] = (i12 << 4) | i13;
                iArr2[i12] = (i11 << 4) | i13;
            }
        }
        if (this.f2473g) {
            Iterator it2 = arrayList.iterator();
            int i14 = 0;
            while (it2.hasNext()) {
                t tVar4 = (t) it2.next();
                while (true) {
                    i5 = tVar4.a;
                    if (i14 < i5) {
                        if (iArr[i14] == 0) {
                            int size = arrayList.size();
                            int i15 = 0;
                            int i16 = 0;
                            while (true) {
                                if (i15 < size) {
                                    tVar = (t) arrayList.get(i15);
                                    while (true) {
                                        i6 = tVar.f2461b;
                                        if (i16 < i6) {
                                            if (iArr2[i16] == 0 && cVar.areItemsTheSame(i14, i16)) {
                                                int i17 = cVar.areContentsTheSame(i14, i16) ? 8 : 4;
                                                iArr[i14] = (i16 << 4) | i17;
                                                iArr2[i16] = i17 | (i14 << 4);
                                            } else {
                                                i16++;
                                            }
                                        }
                                    }
                                }
                                i16 = tVar.f2462c + i6;
                                i15++;
                            }
                        }
                        i14++;
                    }
                }
                i14 = tVar4.f2462c + i5;
            }
        }
    }

    public static w b(ArrayDeque arrayDeque, int i5, boolean z5) {
        w wVar;
        Iterator it = arrayDeque.iterator();
        while (true) {
            if (!it.hasNext()) {
                wVar = null;
                break;
            }
            wVar = (w) it.next();
            if (wVar.a == i5 && wVar.f2482c == z5) {
                it.remove();
                break;
            }
        }
        while (it.hasNext()) {
            w wVar2 = (w) it.next();
            if (z5) {
                wVar2.f2481b--;
            } else {
                wVar2.f2481b++;
            }
        }
        return wVar;
    }

    public final void a(b bVar) {
        int[] iArr;
        c cVar;
        int i5;
        int i6;
        ArrayList arrayList;
        u uVar = this;
        g gVar = new g(bVar);
        ArrayDeque arrayDeque = new ArrayDeque();
        ArrayList arrayList2 = uVar.a;
        boolean z5 = true;
        int size = arrayList2.size() - 1;
        int i10 = uVar.f2471e;
        int i11 = uVar.f2472f;
        int i12 = i10;
        while (size >= 0) {
            t tVar = (t) arrayList2.get(size);
            int i13 = tVar.a;
            int i14 = tVar.f2462c;
            int i15 = i13 + i14;
            int i16 = tVar.f2461b;
            int i17 = i16 + i14;
            while (true) {
                iArr = uVar.f2468b;
                cVar = uVar.f2470d;
                boolean z6 = z5;
                i5 = 0;
                if (i12 <= i15) {
                    break;
                }
                i12--;
                int i18 = iArr[i12];
                if ((i18 & 12) != 0) {
                    arrayList = arrayList2;
                    int i19 = i18 >> 4;
                    w b10 = b(arrayDeque, i19, false);
                    if (b10 != null) {
                        int i20 = (i10 - b10.f2481b) - 1;
                        gVar.a(i12, i20);
                        if ((i18 & 4) != 0) {
                            gVar.d(i20, z6 ? 1 : 0, cVar.getChangePayload(i12, i19));
                        }
                    } else {
                        arrayDeque.add(new w(i12, (i10 - i12) - (z6 ? 1 : 0), z6));
                    }
                } else {
                    arrayList = arrayList2;
                    gVar.c(i12, z6 ? 1 : 0);
                    i10--;
                }
                arrayList2 = arrayList;
                z5 = true;
            }
            ArrayList arrayList3 = arrayList2;
            while (i11 > i17) {
                i11--;
                int i21 = uVar.f2469c[i11];
                if ((i21 & 12) != 0) {
                    int i22 = i21 >> 4;
                    w b11 = b(arrayDeque, i22, true);
                    if (b11 == null) {
                        arrayDeque.add(new w(i11, i10 - i12, false));
                        i6 = 0;
                    } else {
                        i6 = 0;
                        gVar.a((i10 - b11.f2481b) - 1, i12);
                        if ((i21 & 4) != 0) {
                            gVar.d(i12, 1, cVar.getChangePayload(i22, i11));
                        }
                    }
                } else {
                    i6 = i5;
                    gVar.b(i12, 1);
                    i10++;
                }
                uVar = this;
                i5 = i6;
            }
            int i23 = i16;
            int i24 = i13;
            while (i5 < i14) {
                if ((iArr[i24] & 15) == 2) {
                    gVar.d(i24, 1, cVar.getChangePayload(i24, i23));
                }
                i24++;
                i23++;
                i5++;
            }
            size--;
            uVar = this;
            z5 = true;
            i11 = i16;
            i12 = i13;
            arrayList2 = arrayList3;
        }
        gVar.e();
    }
}
