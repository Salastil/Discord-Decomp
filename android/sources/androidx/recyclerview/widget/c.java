package androidx.recyclerview.widget;

import java.util.ArrayList;
import java.util.Collections;
import java.util.concurrent.ExecutorService;

/* loaded from: classes.dex */
public abstract class c {

    /* renamed from: b, reason: collision with root package name */
    public static ExecutorService f2359b;
    public static final Object a = new Object();

    /* renamed from: c, reason: collision with root package name */
    public static final s f2360c = new s(0);

    public static u a(c cVar, boolean z5) {
        int[] iArr;
        int[] iArr2;
        int i5;
        y yVar;
        int i6;
        x xVar;
        int i10;
        y yVar2;
        y yVar3;
        int i11;
        int i12;
        int i13;
        int i14;
        int i15;
        int i16;
        int i17;
        int i18;
        int oldListSize = cVar.getOldListSize();
        int newListSize = cVar.getNewListSize();
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        x xVar2 = new x();
        int i19 = 0;
        xVar2.a = 0;
        xVar2.f2484b = oldListSize;
        xVar2.f2485c = 0;
        xVar2.f2486d = newListSize;
        arrayList2.add(xVar2);
        int i20 = oldListSize + newListSize;
        int i21 = 1;
        int i22 = (((i20 + 1) / 2) * 2) + 1;
        int[] iArr3 = new int[i22];
        int i23 = i22 / 2;
        int[] iArr4 = new int[i22];
        ArrayList arrayList3 = new ArrayList();
        while (!arrayList2.isEmpty()) {
            x xVar3 = (x) arrayList2.remove(arrayList2.size() - i21);
            if (xVar3.b() >= i21 && xVar3.a() >= i21) {
                int a10 = ((xVar3.a() + xVar3.b()) + i21) / 2;
                int i24 = i21 + i23;
                iArr3[i24] = xVar3.a;
                iArr4[i24] = xVar3.f2484b;
                int i25 = i19;
                while (i25 < a10) {
                    int i26 = Math.abs(xVar3.b() - xVar3.a()) % 2 == i21 ? i21 : i19;
                    int b10 = xVar3.b() - xVar3.a();
                    int i27 = -i25;
                    int i28 = i27;
                    while (true) {
                        if (i28 > i25) {
                            iArr = iArr4;
                            iArr2 = iArr3;
                            i10 = i19;
                            i5 = i23;
                            yVar2 = null;
                            break;
                        }
                        if (i28 == i27 || (i28 != i25 && iArr3[i28 + 1 + i23] > iArr3[(i28 - 1) + i23])) {
                            i15 = iArr3[i28 + 1 + i23];
                            i16 = i15;
                        } else {
                            i15 = iArr3[(i28 - 1) + i23];
                            i16 = i15 + 1;
                        }
                        iArr = iArr4;
                        int i29 = ((i16 - xVar3.a) + xVar3.f2485c) - i28;
                        if (i25 == 0 || i16 != i15) {
                            i17 = i29;
                        } else {
                            i17 = i29;
                            i29--;
                        }
                        int i30 = i17;
                        iArr2 = iArr3;
                        int i31 = i16;
                        int i32 = i30;
                        i5 = i23;
                        while (i31 < xVar3.f2484b && i32 < xVar3.f2486d && cVar.areItemsTheSame(i31, i32)) {
                            i31++;
                            i32++;
                        }
                        iArr2[i28 + i5] = i31;
                        if (i26 != 0) {
                            int i33 = b10 - i28;
                            i18 = i28;
                            if (i33 >= i27 + 1 && i33 <= i25 - 1 && iArr[i33 + i5] <= i31) {
                                yVar2 = new y();
                                yVar2.a = i15;
                                yVar2.f2487b = i29;
                                yVar2.f2488c = i31;
                                yVar2.f2489d = i32;
                                i10 = 0;
                                yVar2.f2490e = false;
                                break;
                            }
                        } else {
                            i18 = i28;
                        }
                        i28 = i18 + 2;
                        i19 = 0;
                        iArr4 = iArr;
                        iArr3 = iArr2;
                        i23 = i5;
                    }
                    if (yVar2 != null) {
                        yVar = yVar2;
                        break;
                    }
                    int i34 = (xVar3.b() - xVar3.a()) % 2 == 0 ? 1 : i10;
                    int b11 = xVar3.b() - xVar3.a();
                    int i35 = i27;
                    while (true) {
                        if (i35 > i25) {
                            yVar3 = null;
                            break;
                        }
                        if (i35 == i27 || (i35 != i25 && iArr[i35 + 1 + i5] < iArr[(i35 - 1) + i5])) {
                            i11 = iArr[i35 + 1 + i5];
                            i12 = i11;
                        } else {
                            i11 = iArr[(i35 - 1) + i5];
                            i12 = i11 - 1;
                        }
                        int i36 = xVar3.f2486d - ((xVar3.f2484b - i12) - i35);
                        int i37 = (i25 == 0 || i12 != i11) ? i36 : i36 + 1;
                        while (i12 > xVar3.a && i36 > xVar3.f2485c) {
                            i13 = i34;
                            if (!cVar.areItemsTheSame(i12 - 1, i36 - 1)) {
                                break;
                            }
                            i12--;
                            i36--;
                            i34 = i13;
                        }
                        i13 = i34;
                        iArr[i35 + i5] = i12;
                        if (i13 != 0 && (i14 = b11 - i35) >= i27 && i14 <= i25 && iArr2[i14 + i5] >= i12) {
                            yVar3 = new y();
                            yVar3.a = i12;
                            yVar3.f2487b = i36;
                            yVar3.f2488c = i11;
                            yVar3.f2489d = i37;
                            yVar3.f2490e = true;
                            break;
                        }
                        i35 += 2;
                        i34 = i13;
                    }
                    if (yVar3 != null) {
                        yVar = yVar3;
                        break;
                    }
                    i25++;
                    iArr4 = iArr;
                    iArr3 = iArr2;
                    i23 = i5;
                    i21 = 1;
                    i19 = 0;
                }
            }
            iArr = iArr4;
            iArr2 = iArr3;
            i5 = i23;
            yVar = null;
            if (yVar != null) {
                if (yVar.a() > 0) {
                    int i38 = yVar.f2489d;
                    int i39 = yVar.f2487b;
                    int i40 = i38 - i39;
                    int i41 = yVar.f2488c;
                    int i42 = yVar.a;
                    int i43 = i41 - i42;
                    arrayList.add(i40 != i43 ? yVar.f2490e ? new t(i42, i39, yVar.a()) : i40 > i43 ? new t(i42, i39 + 1, yVar.a()) : new t(i42 + 1, i39, yVar.a()) : new t(i42, i39, i43));
                }
                if (arrayList3.isEmpty()) {
                    xVar = new x();
                    i6 = 1;
                } else {
                    i6 = 1;
                    xVar = (x) arrayList3.remove(arrayList3.size() - 1);
                }
                xVar.a = xVar3.a;
                xVar.f2485c = xVar3.f2485c;
                xVar.f2484b = yVar.a;
                xVar.f2486d = yVar.f2487b;
                arrayList2.add(xVar);
                xVar3.f2484b = xVar3.f2484b;
                xVar3.f2486d = xVar3.f2486d;
                xVar3.a = yVar.f2488c;
                xVar3.f2485c = yVar.f2489d;
                arrayList2.add(xVar3);
            } else {
                i6 = 1;
                arrayList3.add(xVar3);
            }
            iArr4 = iArr;
            i21 = i6;
            iArr3 = iArr2;
            i23 = i5;
            i19 = 0;
        }
        int[] iArr5 = iArr4;
        Collections.sort(arrayList, f2360c);
        return new u(cVar, arrayList, iArr3, iArr5, z5);
    }

    public abstract boolean areContentsTheSame(int i5, int i6);

    public abstract boolean areItemsTheSame(int i5, int i6);

    public abstract Object getChangePayload(int i5, int i6);

    public abstract int getNewListSize();

    public abstract int getOldListSize();
}
